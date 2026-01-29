// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosGetChassisRotateSwitchCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_ROTATE_SWITCH_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_ROTATE_SWITCH_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_get_chassis_rotate_switch_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosGetChassisRotateSwitchCmd_Request_ros_get_chassis_rotate_cmd
{
public:
  Init_RosGetChassisRotateSwitchCmd_Request_ros_get_chassis_rotate_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosGetChassisRotateSwitchCmd_Request ros_get_chassis_rotate_cmd(::segway_msgs::srv::RosGetChassisRotateSwitchCmd_Request::_ros_get_chassis_rotate_cmd_type arg)
  {
    msg_.ros_get_chassis_rotate_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosGetChassisRotateSwitchCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetChassisRotateSwitchCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosGetChassisRotateSwitchCmd_Request_ros_get_chassis_rotate_cmd();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosGetChassisRotateSwitchCmd_Response_chassis_rotate_state
{
public:
  Init_RosGetChassisRotateSwitchCmd_Response_chassis_rotate_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosGetChassisRotateSwitchCmd_Response chassis_rotate_state(::segway_msgs::srv::RosGetChassisRotateSwitchCmd_Response::_chassis_rotate_state_type arg)
  {
    msg_.chassis_rotate_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosGetChassisRotateSwitchCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetChassisRotateSwitchCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosGetChassisRotateSwitchCmd_Response_chassis_rotate_state();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_CHASSIS_ROTATE_SWITCH_CMD__BUILDER_HPP_
