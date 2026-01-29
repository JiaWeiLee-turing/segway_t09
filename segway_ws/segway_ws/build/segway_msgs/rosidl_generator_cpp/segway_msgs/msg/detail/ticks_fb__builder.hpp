// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/TicksFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__TICKS_FB__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__TICKS_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/ticks_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_TicksFb_ticks_timestamp
{
public:
  explicit Init_TicksFb_ticks_timestamp(::segway_msgs::msg::TicksFb & msg)
  : msg_(msg)
  {}
  ::segway_msgs::msg::TicksFb ticks_timestamp(::segway_msgs::msg::TicksFb::_ticks_timestamp_type arg)
  {
    msg_.ticks_timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::TicksFb msg_;
};

class Init_TicksFb_rr_ticks
{
public:
  explicit Init_TicksFb_rr_ticks(::segway_msgs::msg::TicksFb & msg)
  : msg_(msg)
  {}
  Init_TicksFb_ticks_timestamp rr_ticks(::segway_msgs::msg::TicksFb::_rr_ticks_type arg)
  {
    msg_.rr_ticks = std::move(arg);
    return Init_TicksFb_ticks_timestamp(msg_);
  }

private:
  ::segway_msgs::msg::TicksFb msg_;
};

class Init_TicksFb_rl_ticks
{
public:
  explicit Init_TicksFb_rl_ticks(::segway_msgs::msg::TicksFb & msg)
  : msg_(msg)
  {}
  Init_TicksFb_rr_ticks rl_ticks(::segway_msgs::msg::TicksFb::_rl_ticks_type arg)
  {
    msg_.rl_ticks = std::move(arg);
    return Init_TicksFb_rr_ticks(msg_);
  }

private:
  ::segway_msgs::msg::TicksFb msg_;
};

class Init_TicksFb_fr_ticks
{
public:
  explicit Init_TicksFb_fr_ticks(::segway_msgs::msg::TicksFb & msg)
  : msg_(msg)
  {}
  Init_TicksFb_rl_ticks fr_ticks(::segway_msgs::msg::TicksFb::_fr_ticks_type arg)
  {
    msg_.fr_ticks = std::move(arg);
    return Init_TicksFb_rl_ticks(msg_);
  }

private:
  ::segway_msgs::msg::TicksFb msg_;
};

class Init_TicksFb_fl_ticks
{
public:
  Init_TicksFb_fl_ticks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TicksFb_fr_ticks fl_ticks(::segway_msgs::msg::TicksFb::_fl_ticks_type arg)
  {
    msg_.fl_ticks = std::move(arg);
    return Init_TicksFb_fr_ticks(msg_);
  }

private:
  ::segway_msgs::msg::TicksFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::TicksFb>()
{
  return segway_msgs::msg::builder::Init_TicksFb_fl_ticks();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__TICKS_FB__BUILDER_HPP_
