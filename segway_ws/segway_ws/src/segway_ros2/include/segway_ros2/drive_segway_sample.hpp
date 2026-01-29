#ifndef DRIVE_SEGWAY_SAMPLE_HPP
#define DRIVE_SEGWAY_SAMPLE_HPP

#include "comm_ctrl_navigation.h"
#include <Ge_encoder_odometry.h>
#include <boost/optional.hpp>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <fstream>
#include <functional>
#include <iostream>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <sstream>
#include <string>
#include <vector>

#include <autoware_auto_vehicle_msgs/msg/gear_command.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <segway_msgs/msg/bms_fb.hpp>
#include <segway_msgs/msg/chassis_ctrl_src_fb.hpp>
#include <segway_msgs/msg/chassis_mileage_meter_fb.hpp>
#include <segway_msgs/msg/chassis_mode_fb.hpp>
#include <segway_msgs/msg/error_code_fb.hpp>
#include <segway_msgs/msg/motor_work_mode_fb.hpp>
#include <segway_msgs/msg/speed_fb.hpp>
#include <segway_msgs/msg/ticks_fb.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include <std_msgs/msg/string.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tier4_vehicle_msgs/msg/actuation_command_stamped.hpp>

namespace segway_chassis {

class SegwayChassis : public rclcpp::Node {
public:
  explicit SegwayChassis(const rclcpp::NodeOptions &options);
  ~SegwayChassis() noexcept;
  static SegwayChassis *instance_;
  static SegwayChassis *GetInstance() { return instance_; }
  void PubData(StampedBasicFrame *frame);
  void EvnetPubData(int event_no);

private:
  void time_update_1000Hz();
  void time_update_1Hz();
  void pub_odom_to_ros_odom(Odometry odom_data);
  void pub_imu_to_ros_imu(void);

  rclcpp::TimerBase::SharedPtr timer_1000hz_, timer_1hz_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Publisher<segway_msgs::msg::BmsFb>::SharedPtr bms_fb_pub_;
  rclcpp::Publisher<segway_msgs::msg::ChassisCtrlSrcFb>::SharedPtr
      chassis_ctrl_src_fb_pub_;
  rclcpp::Publisher<segway_msgs::msg::ChassisMileageMeterFb>::SharedPtr
      chassis_mileage_meter_fb_pub_;
  rclcpp::Publisher<segway_msgs::msg::ChassisModeFb>::SharedPtr
      chassis_mode_fb_pub_;
  rclcpp::Publisher<segway_msgs::msg::ErrorCodeFb>::SharedPtr
      error_code_fb_pub_;
  rclcpp::Publisher<segway_msgs::msg::MotorWorkModeFb>::SharedPtr
      motor_work_mode_fb_pub_;
  rclcpp::Publisher<segway_msgs::msg::SpeedFb>::SharedPtr speed_fb_pub_;
  rclcpp::Publisher<segway_msgs::msg::TicksFb>::SharedPtr ticks_fb_pub_;
  rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_pub_;
  rclcpp::Publisher<sensor_msgs::msg::Imu>::SharedPtr imu_pub_;

  rclcpp::Subscription<tier4_vehicle_msgs::msg::ActuationCommandStamped>::
      SharedPtr sub_actuation_cmd_;
  rclcpp::Subscription<autoware_auto_vehicle_msgs::msg::GearCommand>::SharedPtr
      gear_sub_;

  /* received & published topics */
  segway_msgs::msg::BmsFb bms_fb_;
  segway_msgs::msg::ChassisCtrlSrcFb chassis_ctrl_src_fb_;
  segway_msgs::msg::ChassisMileageMeterFb chassis_mileage_meter_fb_;
  segway_msgs::msg::ChassisModeFb chassis_mode_fb_;
  segway_msgs::msg::ErrorCodeFb error_code_fb_;
  segway_msgs::msg::MotorWorkModeFb motor_work_mode_fb_;
  segway_msgs::msg::SpeedFb speed_fb_;
  segway_msgs::msg::TicksFb ticks_fb_;
  nav_msgs::msg::Odometry ROS_odom_;
  sensor_msgs::msg::Imu ros_imu_;
  // geometry_msgs::msg::TransformStamped odom_trans;

  void on_actuator_cmd(
      const tier4_vehicle_msgs::msg::ActuationCommandStamped::ConstSharedPtr
          msg);
  void on_gear_cmd(
      const autoware_auto_vehicle_msgs::msg::GearCommand::ConstSharedPtr msg);

  inline double linear_map(double x, double a, double b, double c, double d) {
    return std::clamp(((x - a) * (d - c) / (b - a) + c), c, d);
  }

  s_aprctrl_datastamped_t timestamp_data;
  s_aprctrl_event_t event_data;
  int chassis_event_id = 0;
  uint8_t gear_cmd = 1;  // gear_N
  uint8_t gear_status;
};

SegwayChassis *SegwayChassis::instance_ = nullptr;

} // namespace segway_chassis

#endif