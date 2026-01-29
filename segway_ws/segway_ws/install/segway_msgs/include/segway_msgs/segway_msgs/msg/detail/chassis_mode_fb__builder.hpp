// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/ChassisModeFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CHASSIS_MODE_FB__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__CHASSIS_MODE_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/chassis_mode_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_ChassisModeFb_chassis_mode
{
public:
  Init_ChassisModeFb_chassis_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::msg::ChassisModeFb chassis_mode(::segway_msgs::msg::ChassisModeFb::_chassis_mode_type arg)
  {
    msg_.chassis_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::ChassisModeFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::ChassisModeFb>()
{
  return segway_msgs::msg::builder::Init_ChassisModeFb_chassis_mode();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__CHASSIS_MODE_FB__BUILDER_HPP_
