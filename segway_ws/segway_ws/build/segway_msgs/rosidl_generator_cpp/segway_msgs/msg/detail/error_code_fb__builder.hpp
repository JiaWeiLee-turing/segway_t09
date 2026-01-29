// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/ErrorCodeFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__ERROR_CODE_FB__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__ERROR_CODE_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/error_code_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_ErrorCodeFb_brake_error
{
public:
  explicit Init_ErrorCodeFb_brake_error(::segway_msgs::msg::ErrorCodeFb & msg)
  : msg_(msg)
  {}
  ::segway_msgs::msg::ErrorCodeFb brake_error(::segway_msgs::msg::ErrorCodeFb::_brake_error_type arg)
  {
    msg_.brake_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::ErrorCodeFb msg_;
};

class Init_ErrorCodeFb_bms_error
{
public:
  explicit Init_ErrorCodeFb_bms_error(::segway_msgs::msg::ErrorCodeFb & msg)
  : msg_(msg)
  {}
  Init_ErrorCodeFb_brake_error bms_error(::segway_msgs::msg::ErrorCodeFb::_bms_error_type arg)
  {
    msg_.bms_error = std::move(arg);
    return Init_ErrorCodeFb_brake_error(msg_);
  }

private:
  ::segway_msgs::msg::ErrorCodeFb msg_;
};

class Init_ErrorCodeFb_rear_right_motor_error
{
public:
  explicit Init_ErrorCodeFb_rear_right_motor_error(::segway_msgs::msg::ErrorCodeFb & msg)
  : msg_(msg)
  {}
  Init_ErrorCodeFb_bms_error rear_right_motor_error(::segway_msgs::msg::ErrorCodeFb::_rear_right_motor_error_type arg)
  {
    msg_.rear_right_motor_error = std::move(arg);
    return Init_ErrorCodeFb_bms_error(msg_);
  }

private:
  ::segway_msgs::msg::ErrorCodeFb msg_;
};

class Init_ErrorCodeFb_rear_left_motor_error
{
public:
  explicit Init_ErrorCodeFb_rear_left_motor_error(::segway_msgs::msg::ErrorCodeFb & msg)
  : msg_(msg)
  {}
  Init_ErrorCodeFb_rear_right_motor_error rear_left_motor_error(::segway_msgs::msg::ErrorCodeFb::_rear_left_motor_error_type arg)
  {
    msg_.rear_left_motor_error = std::move(arg);
    return Init_ErrorCodeFb_rear_right_motor_error(msg_);
  }

private:
  ::segway_msgs::msg::ErrorCodeFb msg_;
};

class Init_ErrorCodeFb_front_right_motor_error
{
public:
  explicit Init_ErrorCodeFb_front_right_motor_error(::segway_msgs::msg::ErrorCodeFb & msg)
  : msg_(msg)
  {}
  Init_ErrorCodeFb_rear_left_motor_error front_right_motor_error(::segway_msgs::msg::ErrorCodeFb::_front_right_motor_error_type arg)
  {
    msg_.front_right_motor_error = std::move(arg);
    return Init_ErrorCodeFb_rear_left_motor_error(msg_);
  }

private:
  ::segway_msgs::msg::ErrorCodeFb msg_;
};

class Init_ErrorCodeFb_front_left_motor_error
{
public:
  explicit Init_ErrorCodeFb_front_left_motor_error(::segway_msgs::msg::ErrorCodeFb & msg)
  : msg_(msg)
  {}
  Init_ErrorCodeFb_front_right_motor_error front_left_motor_error(::segway_msgs::msg::ErrorCodeFb::_front_left_motor_error_type arg)
  {
    msg_.front_left_motor_error = std::move(arg);
    return Init_ErrorCodeFb_front_right_motor_error(msg_);
  }

private:
  ::segway_msgs::msg::ErrorCodeFb msg_;
};

class Init_ErrorCodeFb_central_error
{
public:
  explicit Init_ErrorCodeFb_central_error(::segway_msgs::msg::ErrorCodeFb & msg)
  : msg_(msg)
  {}
  Init_ErrorCodeFb_front_left_motor_error central_error(::segway_msgs::msg::ErrorCodeFb::_central_error_type arg)
  {
    msg_.central_error = std::move(arg);
    return Init_ErrorCodeFb_front_left_motor_error(msg_);
  }

private:
  ::segway_msgs::msg::ErrorCodeFb msg_;
};

class Init_ErrorCodeFb_host_error
{
public:
  Init_ErrorCodeFb_host_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ErrorCodeFb_central_error host_error(::segway_msgs::msg::ErrorCodeFb::_host_error_type arg)
  {
    msg_.host_error = std::move(arg);
    return Init_ErrorCodeFb_central_error(msg_);
  }

private:
  ::segway_msgs::msg::ErrorCodeFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::ErrorCodeFb>()
{
  return segway_msgs::msg::builder::Init_ErrorCodeFb_host_error();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__ERROR_CODE_FB__BUILDER_HPP_
