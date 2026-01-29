// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:srv/RosGetVelMaxFeedbackCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__SRV__DETAIL__ROS_GET_VEL_MAX_FEEDBACK_CMD__BUILDER_HPP_
#define SEGWAY_MSGS__SRV__DETAIL__ROS_GET_VEL_MAX_FEEDBACK_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/srv/detail/ros_get_vel_max_feedback_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosGetVelMaxFeedbackCmd_Request_ros_get_vel_max_fb_cmd
{
public:
  Init_RosGetVelMaxFeedbackCmd_Request_ros_get_vel_max_fb_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request ros_get_vel_max_fb_cmd(::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request::_ros_get_vel_max_fb_cmd_type arg)
  {
    msg_.ros_get_vel_max_fb_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request>()
{
  return segway_msgs::srv::builder::Init_RosGetVelMaxFeedbackCmd_Request_ros_get_vel_max_fb_cmd();
}

}  // namespace segway_msgs


namespace segway_msgs
{

namespace srv
{

namespace builder
{

class Init_RosGetVelMaxFeedbackCmd_Response_angular_max_vel_fb
{
public:
  explicit Init_RosGetVelMaxFeedbackCmd_Response_angular_max_vel_fb(::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response & msg)
  : msg_(msg)
  {}
  ::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response angular_max_vel_fb(::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response::_angular_max_vel_fb_type arg)
  {
    msg_.angular_max_vel_fb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response msg_;
};

class Init_RosGetVelMaxFeedbackCmd_Response_backward_max_vel_fb
{
public:
  explicit Init_RosGetVelMaxFeedbackCmd_Response_backward_max_vel_fb(::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response & msg)
  : msg_(msg)
  {}
  Init_RosGetVelMaxFeedbackCmd_Response_angular_max_vel_fb backward_max_vel_fb(::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response::_backward_max_vel_fb_type arg)
  {
    msg_.backward_max_vel_fb = std::move(arg);
    return Init_RosGetVelMaxFeedbackCmd_Response_angular_max_vel_fb(msg_);
  }

private:
  ::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response msg_;
};

class Init_RosGetVelMaxFeedbackCmd_Response_forward_max_vel_fb
{
public:
  Init_RosGetVelMaxFeedbackCmd_Response_forward_max_vel_fb()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosGetVelMaxFeedbackCmd_Response_backward_max_vel_fb forward_max_vel_fb(::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response::_forward_max_vel_fb_type arg)
  {
    msg_.forward_max_vel_fb = std::move(arg);
    return Init_RosGetVelMaxFeedbackCmd_Response_backward_max_vel_fb(msg_);
  }

private:
  ::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response>()
{
  return segway_msgs::srv::builder::Init_RosGetVelMaxFeedbackCmd_Response_forward_max_vel_fb();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__SRV__DETAIL__ROS_GET_VEL_MAX_FEEDBACK_CMD__BUILDER_HPP_
