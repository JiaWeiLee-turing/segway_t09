#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <tf2/LinearMath/Quaternion.h>

#if 1
#define ODOM_BY_CHASSIS

#include "segway_ros2/drive_segway_sample.hpp"

namespace segway_chassis {

#define IMU_ANGULAR_VEL_CONVERT_UINIT                                          \
  0.0009288 //(2000 /32767 / 0.0163835 / 70 / 57.3)//FS:2000dps;
            // 0.0163835/70：coefficient；57.3：rad->degree
#define IMU_LINEAR_VEL_CONVERT_UINIT 0.0023943 //(9.80665 * 8 /32767 )//FS:8G;
#define RAD_DEGREE_CONVER 57.2958
chassis_motors_speed_data_t motorsSpeedData;
chassis_car_speed_data_t carSpeedData;
uint64_t Speed_TimeStamp;
uint8_t Speed_update;

front_motors_ticks_t frontTicksData;
rear_motors_ticks_t rearTicksData;
uint64_t Ticks_TimeStamp;
uint8_t Ticks_update;

imu_gyr_original_data_t ImuGyrData;
uint64_t ImuGyr_TimeStamp;
uint8_t ImuGyr_update;

imu_acc_original_data_t ImuAccData;
uint64_t ImuAcc_TimeStamp;
uint8_t ImuAcc_update;

odom_pos_xy_t OdomPoseXy;
odom_euler_xy_t OdomEulerXy;
odom_euler_z_t OdomEulerZ;
odom_vel_line_xy_t OdomVelLineXy;
uint64_t Odom_TimeStamp;
uint8_t Odom_update;

void PubDataWrapper(StampedBasicFrame *frame) {
  segway_chassis::SegwayChassis::GetInstance()->PubData(frame);
}
void EventPubDataWrapper(int event_no) {
  segway_chassis::SegwayChassis::GetInstance()->EvnetPubData(event_no);
}

SegwayChassis::SegwayChassis(const rclcpp::NodeOptions &options)
    : Node("segway_sample", options) {
  using rclcpp::QoS;
  using std::placeholders::_1;
  using std::placeholders::_2;

  // declear parameters

  // init Serial Port
  this->declare_parameter<std::string>("segwaySmartCarSerial", "ttyUSB0");
  std::string serial = this->get_parameter("segwaySmartCarSerial").as_string();
  RCLCPP_INFO(this->get_logger(), "segwaySmartCarSerial: %s", serial.c_str());
  set_smart_car_serial(serial.c_str());
  set_comu_interface(comu_serial);
  if (init_control_ctrl() == -1) {
    RCLCPP_ERROR(this->get_logger(), "init_control failed");
  } else {
    RCLCPP_INFO(this->get_logger(), "init success!");
  }

  // Publisher
  bms_fb_pub_ =
      this->create_publisher<segway_msgs::msg::BmsFb>("~/segway/bms", 1);
  chassis_ctrl_src_fb_pub_ =
      this->create_publisher<segway_msgs::msg::ChassisCtrlSrcFb>(
          "~/segway/chassis_control_src", 1);
  chassis_mileage_meter_fb_pub_ =
      this->create_publisher<segway_msgs::msg::ChassisMileageMeterFb>(
          "~/segway/chassis_mileage_meter", 1);
  chassis_mode_fb_pub_ =
      this->create_publisher<segway_msgs::msg::ChassisModeFb>(
          "~/segway/chassis_mode", 1);
  error_code_fb_pub_ = this->create_publisher<segway_msgs::msg::ErrorCodeFb>(
      "~/segway/error_code", 1);
  motor_work_mode_fb_pub_ =
      this->create_publisher<segway_msgs::msg::MotorWorkModeFb>(
          "~/segway/motor_mode", 1);
  speed_fb_pub_ =
      this->create_publisher<segway_msgs::msg::SpeedFb>("~/segway/speed", 1);
  ticks_fb_pub_ =
      this->create_publisher<segway_msgs::msg::TicksFb>("~/segway/ticks", 1);
  odom_pub_ =
      this->create_publisher<nav_msgs::msg::Odometry>("~/segway/odometry", 1);
  imu_pub_ = this->create_publisher<sensor_msgs::msg::Imu>("~/segway/imu", 1);

  // Subcriber
  sub_actuation_cmd_ =
      create_subscription<tier4_vehicle_msgs::msg::ActuationCommandStamped>(
          "control/command/actuation_cmd", QoS{1},
          std::bind(&SegwayChassis::on_actuator_cmd, this, _1));
  gear_sub_ =
      this->create_subscription<autoware_auto_vehicle_msgs::msg::GearCommand>(
          "control/command/gear_cmd", QoS{1},
          std::bind(&SegwayChassis::on_gear_cmd, this, _1));

  // Timer
  timer_1000hz_ = this->create_wall_timer(
      rclcpp::Rate(20).period(),
      std::bind(&SegwayChassis::time_update_1000Hz, this));
  timer_1hz_ =
      this->create_wall_timer(rclcpp::Rate(1).period(),
                              std::bind(&SegwayChassis::time_update_1Hz, this));

  instance_ = this;
  timestamp_data.on_new_data = PubDataWrapper;
  aprctrl_datastamped_jni_register(&timestamp_data);

  event_data.event_callback = EventPubDataWrapper;
  aprctrl_eventcallback_jni_register(&event_data);
}

SegwayChassis::~SegwayChassis() {}

void SegwayChassis::PubData(StampedBasicFrame *frame) {
  if (frame->type_id == Chassis_Data_Motors_Speed) {
    memcpy(&motorsSpeedData, frame->data,
           sizeof(motorsSpeedData)); // Speed data from chassis
    Speed_TimeStamp = frame->timestamp;
    Speed_update |= 1;
  } else if (frame->type_id == Chassis_Data_Car_Speed) {
    memcpy(&carSpeedData, frame->data,
           sizeof(carSpeedData)); // Speed data from chassis
    Speed_TimeStamp = frame->timestamp;
    Speed_update |= 2;
  } else if (frame->type_id == Chassis_Data_Front_Ticks) {
    memcpy(&frontTicksData, frame->data,
           sizeof(frontTicksData)); // Ticks data from chassis
    Ticks_TimeStamp = frame->timestamp;
    Ticks_update |= 1;
    // RCLCPP_WARN_THROTTLE(get_logger(), *this->get_clock(), 5 * 1000,
    //                      "fLTICKS:%d, frticks:%d", frontTicksData.fl_ticks,
    //                      frontTicksData.fr_ticks);
  } else if (frame->type_id == Chassis_Data_Rear_Ticks) {
    memcpy(&rearTicksData, frame->data,
           sizeof(rearTicksData)); // Ticks data from chassis
    Ticks_TimeStamp = frame->timestamp;
    Ticks_update |= 2;
    // RCLCPP_WARN_THROTTLE(get_logger(), *this->get_clock(), 5 * 1000,
    //                      "rLTICKS:%d, rrticks:%d", rearTicksData.rl_ticks,
    //                      rearTicksData.rr_ticks);
  } else if (frame->type_id == Chassis_Data_Imu_Gyr) {
    memcpy(&ImuGyrData, frame->data,
           sizeof(ImuGyrData)); // Ticks data from chassis
    ImuGyr_TimeStamp = frame->timestamp;
    ImuGyr_update = 1;
    // RCLCPP_WARN_THROTTLE(get_logger(), *this->get_clock(), 5 * 1000,
    //                      "GYR0:%d, gyr1:%d, gyr2:%d", ImuGyrData.gyr[0],
    //                      ImuGyrData.gyr[1], ImuGyrData.gyr[2]);
  } else if (frame->type_id == Chassis_Data_Imu_Acc) {
    memcpy(&ImuAccData, frame->data,
           sizeof(ImuAccData)); // Ticks data from chassis
    ImuAcc_TimeStamp = frame->timestamp;
    ImuAcc_update = 1;
    // RCLCPP_WARN_THROTTLE(get_logger(), *this->get_clock(), 5 * 1000,
    //                      "ACC0:%d, acc1:%d, acc2:%d", ImuAccData.acc[0],
    //                      ImuAccData.acc[1], ImuAccData.acc[2]);
  } else if (frame->type_id == Chassis_Data_Odom_Pose_xy) {
    memcpy(&OdomPoseXy, frame->data,
           sizeof(OdomPoseXy)); // Ticks data from chassis
    Odom_TimeStamp = frame->timestamp;
    Odom_update |= 1;
    // RCLCPP_WARN_THROTTLE(get_logger(), *this->get_clock(), 5 * 1000,
    //                      "odomPosX:%f, odomPosY:%f", OdomPoseXy.pos_x,
    //                      OdomPoseXy.pos_y);
  } else if (frame->type_id == Chassis_Data_Odom_Euler_xy) {
    memcpy(&OdomEulerXy, frame->data,
           sizeof(OdomEulerXy)); // Ticks data from chassis
    Odom_TimeStamp = frame->timestamp;
    Odom_update |= 2;
    // RCLCPP_WARN_THROTTLE(get_logger(), *this->get_clock(), 5 * 1000,
    //                      "OdomEulerX:%f, OdomEulerY:%f", OdomEulerXy.euler_x,
    //                      OdomEulerXy.euler_y);
  } else if (frame->type_id == Chassis_Data_Odom_Euler_z) {
    memcpy(&OdomEulerZ, frame->data,
           sizeof(OdomEulerZ)); // Ticks data from chassis
    Odom_TimeStamp = frame->timestamp;
    Odom_update |= 4;
    // RCLCPP_WARN_THROTTLE(get_logger(), *this->get_clock(), 5 * 1000,
    //                      "OdomEulerZ:%f", OdomEulerZ.euler_z);
  } else if (frame->type_id == Chassis_Data_Odom_Linevel_xy) {
    memcpy(&OdomVelLineXy, frame->data,
           sizeof(OdomVelLineXy)); // Ticks data from chassis
    Odom_TimeStamp = frame->timestamp;
    Odom_update |= 8;
    // RCLCPP_WARN_THROTTLE(get_logger(), *this->get_clock(), 5 * 1000,
    //                      "OdomVelLineX:%f, OdomVelLineY:%f",
    //                      OdomVelLineXy.vel_line_x, OdomVelLineXy.vel_line_y);
  }
}

void SegwayChassis::EvnetPubData(int event_no) {
  chassis_event_id = event_no;
  // TODO: unused event service
  // SegwayChassis::chassis_send_event_callback(event_no);
}

void SegwayChassis::on_actuator_cmd(
    const tier4_vehicle_msgs::msg::ActuationCommandStamped::ConstSharedPtr
        msg) {
  // throttle function
  double val = std::fabs(msg->actuation.accel_cmd);
  if (val < 20)
    val = 0;
  double linear_vel = std::clamp(val, 20.0, 100.0); // 0~100.0
  double vel_cmd = linear_map(linear_vel, 20.0, 100.0, 0.0, 1.39);

  // gear function
  int sign = 0;
  if (gear_cmd == 2) {
    sign = 1;
  } else if (gear_cmd == 20) {
    sign = -1;
  } else {
    sign = 0;
  }

  // steer function
  double angular_vel =
      msg->actuation.steer_cmd; // +0.51(left)  <->  -0.51rad(right)
  if (vel_cmd == 0)
    angular_vel = 0;

  // set enable/disable segway chassis
  bool enable_flg = false;
  if (std::fabs(speed_fb_.car_speed) < 0.1 && gear_cmd == 1) {
    enable_flg = false;
  } else {
    enable_flg = true;
  }
  set_enable_ctrl(enable_flg);

  // set cmd to segway chassis
  set_cmd_vel(sign * vel_cmd, angular_vel * 2.0);

  RCLCPP_WARN_THROTTLE(
      get_logger(), *this->get_clock(), 5 * 100,
      "actuator cmd:   enable: %d ,vel cmd: %f m/s, angular_cmd: %f rad/s",
      enable_flg, sign * vel_cmd, angular_vel * 2.0);
}

void SegwayChassis::on_gear_cmd(
    const autoware_auto_vehicle_msgs::msg::GearCommand::ConstSharedPtr msg) {
  gear_cmd = msg->command; // 1: N, 2: D, 20: R
}

void SegwayChassis::time_update_1000Hz() {
  if (Speed_update == 3) {
    speed_fb_.car_speed = carSpeedData.car_speed;
    speed_fb_.car_speed /= LINE_SPEED_TRANS_GAIN_MPS;
    speed_fb_.turn_speed = carSpeedData.turn_speed;
    speed_fb_.turn_speed /= ANGULAR_SPEED_TRANS_GAIN_RADPS;
    speed_fb_.fl_speed = motorsSpeedData.fl_speed;
    speed_fb_.fl_speed /=
        LINE_SPEED_TRANS_GAIN_MPS; // change the units from m/h to m/s
    speed_fb_.fr_speed = motorsSpeedData.fr_speed;
    speed_fb_.fr_speed /=
        LINE_SPEED_TRANS_GAIN_MPS; // change the units from m/h to m/s
    speed_fb_.rl_speed = motorsSpeedData.rl_speed;
    speed_fb_.rl_speed /=
        LINE_SPEED_TRANS_GAIN_MPS; // change the units from m/h to m/s
    speed_fb_.rr_speed = motorsSpeedData.rr_speed;
    speed_fb_.rr_speed /=
        LINE_SPEED_TRANS_GAIN_MPS; // change the units from m/h to m/s
    speed_fb_.speed_timestamp = Speed_TimeStamp;
    Speed_update = 0;
    speed_fb_pub_->publish(speed_fb_);
    // RCLCPP_WARN_THROTTLE(
    //     get_logger(), *this->get_clock(), 5 * 1000,
    //     "###chassis speed_fb, fl_speed:%f m/s, rr_speed:%f m/s",
    //     speed_fb_.fl_speed, speed_fb_.rr_speed);
  }

  if (Ticks_update == 3) {
    ticks_fb_.fl_ticks = frontTicksData.fl_ticks;
    ticks_fb_.fr_ticks = frontTicksData.fr_ticks;
    ticks_fb_.rl_ticks = rearTicksData.rl_ticks;
    ticks_fb_.rr_ticks = rearTicksData.rr_ticks;
    ticks_fb_.ticks_timestamp = Ticks_TimeStamp;
    Ticks_update = 0;
    ticks_fb_pub_->publish(ticks_fb_);
#ifndef ODOM_BY_CHASSIS
    SensorData::Ticks tick_msg(Ticks_TimeStamp, frontTicksData.l_ticks,
                               frontTicksData.r_ticks);
    if (robot::Chassis::m_ge_encoder.add_ticks(tick_msg)) {
      Odometry odome = robot::Chassis::m_ge_encoder.GetOdometry();
      pub_odom_to_ros_odom(odome);
    }
#endif
  }

  if (ImuGyr_update == 1 && ImuAcc_update == 1) {
#ifndef ODOM_BY_CHASSIS
    double yaw_radps = 0;
    yaw_radps =
        (double)ImuGyrData.gyr[2] / 900; //* IMU_ANGULAR_VEL_CONVERT_UINIT;
    SensorData::BaseImu imu_msg(ImuAcc_TimeStamp, yaw_radps);
    if (robot::Chassis::m_ge_encoder.add_imubase(imu_msg)) {
      Odometry odome = robot::Chassis::m_ge_encoder.GetOdometry();
      PubOdomToRosOdom(odome);
    }
#endif
    pub_imu_to_ros_imu();

    ImuGyr_update = 0;
    ImuAcc_update = 0;
  }

#ifdef ODOM_BY_CHASSIS
  static uint64_t time_pre = 0;
  if (Odom_update == 15) {
    Odom_update = 0;

    tf2::Quaternion q;
    q.setRPY(0, 0, OdomEulerZ.euler_z / RAD_DEGREE_CONVER);
    geometry_msgs::msg::Quaternion odom_quat = tf2::toMsg(q);

    // geometry_msgs::msg::Quaternion odom_quat =
    //     tf::createQuaternionMsgFromYaw(OdomEulerZ.euler_z /
    //     RAD_DEGREE_CONVER);

    ROS_odom_.header.stamp = this->now();
    ROS_odom_.header.frame_id = "odom";
    ROS_odom_.pose.pose.position.x = OdomPoseXy.pos_x;
    ROS_odom_.pose.pose.position.y = OdomPoseXy.pos_y;
    ROS_odom_.pose.pose.position.z = 0;
    // ROS_odom_.pose.pose.orientation.x = getOrientationX();
    // ROS_odom_.pose.pose.orientation.y = getOrientationY();
    // ROS_odom_.pose.pose.orientation.z = getOrientationZ();
    // ROS_odom_.pose.pose.orientation.w = getOrientationW();
    ROS_odom_.child_frame_id = "base_link";
    ROS_odom_.twist.twist.linear.x =
        (double)carSpeedData.car_speed / LINE_SPEED_TRANS_GAIN_MPS;
    ROS_odom_.twist.twist.linear.y = 0;
    ROS_odom_.twist.twist.linear.z = 0;
    ROS_odom_.twist.twist.angular.x = (double)ImuGyrData.gyr[0] / 900.0;
    ROS_odom_.twist.twist.angular.y = (double)ImuGyrData.gyr[1] / 900.0;
    ROS_odom_.twist.twist.angular.z =
        (double)ImuGyrData.gyr[2] / 900.0; //* IMU_ANGULAR_VEL_CONVERT_UINIT;

    // odom_trans.header.stamp = this->now();
    // odom_trans.header.frame_id = "odom";
    // odom_trans.child_frame_id = "base_link";
    // odom_trans.transform.translation.x = OdomPoseXy.pos_x;
    // odom_trans.transform.translation.y = OdomPoseXy.pos_y;
    // odom_trans.transform.translation.z = 0;
    // odom_trans.transform.rotation = odom_quat;
    // odom_broadcaster.sendTransform(odom_trans);

    if ((Odom_TimeStamp - time_pre) > 100000) {
      static uint8_t first = 1;
      if (first) {
        first = 0;
      } else {
        // uint64_t timegap = (Odom_TimeStamp - time_pre);
        // printf("!!!!!!!!!! timeout !!!timegap: %lu, curtime:%lu,
        // pretime:%lu\n", timegap, Odom_TimeStamp, time_pre);
      }
    }
    time_pre = Odom_TimeStamp;
    odom_pub_->publish(ROS_odom_);
  }
#endif
}

void SegwayChassis::pub_odom_to_ros_odom(Odometry odom_data) {
  // RCLCPP_WARN_THROTTLE(
  //     get_logger(), *this->get_clock(), 5 * 1000,
  //     "Odom_data to be published orientation: %f , pose x: %f , pose y: %f",
  //     odom_data.pose_.orientation, odom_data.pose_.x, odom_data.pose_.y);

  ROS_odom_.header.stamp = this->now();
  ROS_odom_.header.frame_id = "odom";
  ROS_odom_.pose.pose.position.x = odom_data.pose_.x;
  ROS_odom_.pose.pose.position.y = odom_data.pose_.y;
  ROS_odom_.pose.pose.position.z = 0;
  ROS_odom_.pose.pose.orientation.x = 0;
  ROS_odom_.pose.pose.orientation.y = 0;
  ROS_odom_.pose.pose.orientation.z = sin(odom_data.pose_.orientation / 2);
  ROS_odom_.pose.pose.orientation.w = cos(odom_data.pose_.orientation / 2);
  ROS_odom_.twist.twist.linear.x = odom_data.twist_.v_x;
  ROS_odom_.twist.twist.linear.y = odom_data.twist_.v_y;
  ROS_odom_.twist.twist.linear.z = 0;
  ROS_odom_.twist.twist.angular.x = 0;
  ROS_odom_.twist.twist.angular.y = 0;
  ROS_odom_.twist.twist.angular.z = odom_data.twist_.w_z;
  odom_pub_->publish(ROS_odom_);
}

void SegwayChassis::pub_imu_to_ros_imu(void) {
  ros_imu_.header.stamp = this->now();
  ros_imu_.header.frame_id = "segway_robot_imu";
  ros_imu_.angular_velocity.x =
      (double)ImuGyrData.gyr[0] / 900.0; //* IMU_ANGULAR_VEL_CONVERT_UINIT;
  ros_imu_.angular_velocity.y =
      (double)ImuGyrData.gyr[1] / 900.0; //* IMU_ANGULAR_VEL_CONVERT_UINIT;
  ros_imu_.angular_velocity.z =
      (double)ImuGyrData.gyr[2] / 900.0; //* IMU_ANGULAR_VEL_CONVERT_UINIT;
  ros_imu_.linear_acceleration.x = (double)ImuAccData.acc[0] / 4000.0 *
                                   9.8; // * IMU_LINEAR_VEL_CONVERT_UINIT;
  ros_imu_.linear_acceleration.y = (double)ImuAccData.acc[1] / 4000.0 *
                                   9.8; // * IMU_LINEAR_VEL_CONVERT_UINIT;
  ros_imu_.linear_acceleration.z = (double)ImuAccData.acc[2] / 4000.0 *
                                   9.8; // * IMU_LINEAR_VEL_CONVERT_UINIT;
  imu_pub_->publish(ros_imu_);
  // RCLCPP_WARN_THROTTLE(get_logger(), *this->get_clock(), 5 * 1000,
  //                      "ros_imu:angular_vel:%f  rad/s   linear_acc:%f  m/s2",
  //                      ros_imu_.angular_velocity.z,
  //                      ros_imu_.linear_acceleration.x);
}

void SegwayChassis::time_update_1Hz() {
  bms_fb_.bat_soc = get_bat_soc();
  bms_fb_.bat_charging = get_bat_charging();
  bms_fb_.bat_vol = get_bat_mvol();
  bms_fb_.bat_current = get_bat_mcurrent();
  bms_fb_.bat_temp = get_bat_temp();
  bms_fb_pub_->publish(bms_fb_);

  chassis_ctrl_src_fb_.chassis_ctrl_cmd_src = get_ctrl_cmd_src();
  chassis_ctrl_src_fb_pub_->publish(chassis_ctrl_src_fb_);

  chassis_mileage_meter_fb_.vehicle_meters = get_vehicle_meter();
  chassis_mileage_meter_fb_pub_->publish(chassis_mileage_meter_fb_);

  chassis_mode_fb_.chassis_mode =
      get_chassis_mode(); // 0: lock_mode, 1:ctrl_mode, 2:push_mode, 3:emergency
                          // mode, 4:error mode
  chassis_mode_fb_pub_->publish(chassis_mode_fb_);

  error_code_fb_.host_error = get_err_state(Host);
  error_code_fb_.central_error = get_err_state(Central);
  error_code_fb_.front_left_motor_error = get_err_state(Motor0);
  error_code_fb_.front_right_motor_error = get_err_state(Motor1);
  error_code_fb_.rear_left_motor_error = get_err_state(Motor2);
  error_code_fb_.rear_right_motor_error = get_err_state(Motor3);
  error_code_fb_.bms_error = get_err_state(BMS);
  error_code_fb_.brake_error = get_err_state(Brake);
  error_code_fb_pub_->publish(error_code_fb_);

  motor_work_mode_fb_.motor_work_mode = get_chassis_work_model();
  motor_work_mode_fb_pub_->publish(motor_work_mode_fb_);
}

} // namespace segway_chassis

#endif

int main(int argc, char *argv[]) {
  rclcpp::init(argc, argv);
  rclcpp::spin(
      std::make_shared<segway_chassis::SegwayChassis>(rclcpp::NodeOptions()));
  rclcpp::shutdown();
  return 0;
}
