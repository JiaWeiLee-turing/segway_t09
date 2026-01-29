// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/MotorWorkModeFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__MOTOR_WORK_MODE_FB__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__MOTOR_WORK_MODE_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/motor_work_mode_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_MotorWorkModeFb_motor_work_mode
{
public:
  Init_MotorWorkModeFb_motor_work_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::msg::MotorWorkModeFb motor_work_mode(::segway_msgs::msg::MotorWorkModeFb::_motor_work_mode_type arg)
  {
    msg_.motor_work_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::MotorWorkModeFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::MotorWorkModeFb>()
{
  return segway_msgs::msg::builder::Init_MotorWorkModeFb_motor_work_mode();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__MOTOR_WORK_MODE_FB__BUILDER_HPP_
