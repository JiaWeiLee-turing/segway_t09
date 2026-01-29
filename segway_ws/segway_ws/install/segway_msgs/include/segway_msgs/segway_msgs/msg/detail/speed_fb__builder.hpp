// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/SpeedFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__SPEED_FB__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__SPEED_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/speed_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_SpeedFb_speed_timestamp
{
public:
  explicit Init_SpeedFb_speed_timestamp(::segway_msgs::msg::SpeedFb & msg)
  : msg_(msg)
  {}
  ::segway_msgs::msg::SpeedFb speed_timestamp(::segway_msgs::msg::SpeedFb::_speed_timestamp_type arg)
  {
    msg_.speed_timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::SpeedFb msg_;
};

class Init_SpeedFb_rr_speed
{
public:
  explicit Init_SpeedFb_rr_speed(::segway_msgs::msg::SpeedFb & msg)
  : msg_(msg)
  {}
  Init_SpeedFb_speed_timestamp rr_speed(::segway_msgs::msg::SpeedFb::_rr_speed_type arg)
  {
    msg_.rr_speed = std::move(arg);
    return Init_SpeedFb_speed_timestamp(msg_);
  }

private:
  ::segway_msgs::msg::SpeedFb msg_;
};

class Init_SpeedFb_rl_speed
{
public:
  explicit Init_SpeedFb_rl_speed(::segway_msgs::msg::SpeedFb & msg)
  : msg_(msg)
  {}
  Init_SpeedFb_rr_speed rl_speed(::segway_msgs::msg::SpeedFb::_rl_speed_type arg)
  {
    msg_.rl_speed = std::move(arg);
    return Init_SpeedFb_rr_speed(msg_);
  }

private:
  ::segway_msgs::msg::SpeedFb msg_;
};

class Init_SpeedFb_fr_speed
{
public:
  explicit Init_SpeedFb_fr_speed(::segway_msgs::msg::SpeedFb & msg)
  : msg_(msg)
  {}
  Init_SpeedFb_rl_speed fr_speed(::segway_msgs::msg::SpeedFb::_fr_speed_type arg)
  {
    msg_.fr_speed = std::move(arg);
    return Init_SpeedFb_rl_speed(msg_);
  }

private:
  ::segway_msgs::msg::SpeedFb msg_;
};

class Init_SpeedFb_fl_speed
{
public:
  explicit Init_SpeedFb_fl_speed(::segway_msgs::msg::SpeedFb & msg)
  : msg_(msg)
  {}
  Init_SpeedFb_fr_speed fl_speed(::segway_msgs::msg::SpeedFb::_fl_speed_type arg)
  {
    msg_.fl_speed = std::move(arg);
    return Init_SpeedFb_fr_speed(msg_);
  }

private:
  ::segway_msgs::msg::SpeedFb msg_;
};

class Init_SpeedFb_turn_speed
{
public:
  explicit Init_SpeedFb_turn_speed(::segway_msgs::msg::SpeedFb & msg)
  : msg_(msg)
  {}
  Init_SpeedFb_fl_speed turn_speed(::segway_msgs::msg::SpeedFb::_turn_speed_type arg)
  {
    msg_.turn_speed = std::move(arg);
    return Init_SpeedFb_fl_speed(msg_);
  }

private:
  ::segway_msgs::msg::SpeedFb msg_;
};

class Init_SpeedFb_car_speed
{
public:
  Init_SpeedFb_car_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedFb_turn_speed car_speed(::segway_msgs::msg::SpeedFb::_car_speed_type arg)
  {
    msg_.car_speed = std::move(arg);
    return Init_SpeedFb_turn_speed(msg_);
  }

private:
  ::segway_msgs::msg::SpeedFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::SpeedFb>()
{
  return segway_msgs::msg::builder::Init_SpeedFb_car_speed();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__SPEED_FB__BUILDER_HPP_
