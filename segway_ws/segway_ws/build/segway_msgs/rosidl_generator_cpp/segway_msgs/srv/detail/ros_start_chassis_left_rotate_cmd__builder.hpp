// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosStartChassisLeftRotateCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_START_CHASSIS_LEFT_ROTATE_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_START_CHASSIS_LEFT_ROTATE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_start_chassis_left_rotate_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosStartChassisLeftRotateCmd_Request_ros_start_chassis_left_rotate_cmd
{
public:
  Init_RosStartChassisLeftRotateCmd_Request_ros_start_chassis_left_rotate_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosStartChassisLeftRotateCmd_Request ros_start_chassis_left_rotate_cmd(::segway_msgs::srv::RosStartChassisLeftRotateCmd_Request::_ros_start_chassis_left_rotate_cmd_type arg)
  {
    msg_.ros_start_chassis_left_rotate_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosStartChassisLeftRotateCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosStartChassisLeftRotateCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosStartChassisLeftRotateCmd_Request_ros_start_chassis_left_rotate_cmd();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosStartChassisLeftRotateCmd_Response_chassis_left_rotate_result
{
public:
  Init_RosStartChassisLeftRotateCmd_Response_chassis_left_rotate_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosStartChassisLeftRotateCmd_Response chassis_left_rotate_result(::segway_msgs::srv::RosStartChassisLeftRotateCmd_Response::_chassis_left_rotate_result_type arg)
  {
    msg_.chassis_left_rotate_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosStartChassisLeftRotateCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosStartChassisLeftRotateCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosStartChassisLeftRotateCmd_Response_chassis_left_rotate_result();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_START_CHASSIS_LEFT_ROTATE_CMD__BUILDER_HPP_
