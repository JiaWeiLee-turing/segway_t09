// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/FrontWheelAngleFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/front_wheel_angle_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_FrontWheelAngleFb_chassis_front_wheel_angle_timestamp
{
public:
  explicit Init_FrontWheelAngleFb_chassis_front_wheel_angle_timestamp(::segway_msgs::msg::FrontWheelAngleFb & msg)
  : msg_(msg)
  {}
  ::segway_msgs::msg::FrontWheelAngleFb chassis_front_wheel_angle_timestamp(::segway_msgs::msg::FrontWheelAngleFb::_chassis_front_wheel_angle_timestamp_type arg)
  {
    msg_.chassis_front_wheel_angle_timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::FrontWheelAngleFb msg_;
};

class Init_FrontWheelAngleFb_chassis_front_wheel_angle
{
public:
  Init_FrontWheelAngleFb_chassis_front_wheel_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FrontWheelAngleFb_chassis_front_wheel_angle_timestamp chassis_front_wheel_angle(::segway_msgs::msg::FrontWheelAngleFb::_chassis_front_wheel_angle_type arg)
  {
    msg_.chassis_front_wheel_angle = std::move(arg);
    return Init_FrontWheelAngleFb_chassis_front_wheel_angle_timestamp(msg_);
  }

private:
  ::segway_msgs::msg::FrontWheelAngleFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::FrontWheelAngleFb>()
{
  return segway_msgs::msg::builder::Init_FrontWheelAngleFb_chassis_front_wheel_angle();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__BUILDER_HPP_
