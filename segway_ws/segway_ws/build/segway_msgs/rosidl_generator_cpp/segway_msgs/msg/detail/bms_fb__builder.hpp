// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/BmsFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__BMS_FB__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__BMS_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/bms_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_BmsFb_bat_temp
{
public:
  explicit Init_BmsFb_bat_temp(::segway_msgs::msg::BmsFb & msg)
  : msg_(msg)
  {}
  ::segway_msgs::msg::BmsFb bat_temp(::segway_msgs::msg::BmsFb::_bat_temp_type arg)
  {
    msg_.bat_temp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::BmsFb msg_;
};

class Init_BmsFb_bat_current
{
public:
  explicit Init_BmsFb_bat_current(::segway_msgs::msg::BmsFb & msg)
  : msg_(msg)
  {}
  Init_BmsFb_bat_temp bat_current(::segway_msgs::msg::BmsFb::_bat_current_type arg)
  {
    msg_.bat_current = std::move(arg);
    return Init_BmsFb_bat_temp(msg_);
  }

private:
  ::segway_msgs::msg::BmsFb msg_;
};

class Init_BmsFb_bat_vol
{
public:
  explicit Init_BmsFb_bat_vol(::segway_msgs::msg::BmsFb & msg)
  : msg_(msg)
  {}
  Init_BmsFb_bat_current bat_vol(::segway_msgs::msg::BmsFb::_bat_vol_type arg)
  {
    msg_.bat_vol = std::move(arg);
    return Init_BmsFb_bat_current(msg_);
  }

private:
  ::segway_msgs::msg::BmsFb msg_;
};

class Init_BmsFb_bat_charging
{
public:
  explicit Init_BmsFb_bat_charging(::segway_msgs::msg::BmsFb & msg)
  : msg_(msg)
  {}
  Init_BmsFb_bat_vol bat_charging(::segway_msgs::msg::BmsFb::_bat_charging_type arg)
  {
    msg_.bat_charging = std::move(arg);
    return Init_BmsFb_bat_vol(msg_);
  }

private:
  ::segway_msgs::msg::BmsFb msg_;
};

class Init_BmsFb_bat_soc
{
public:
  Init_BmsFb_bat_soc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BmsFb_bat_charging bat_soc(::segway_msgs::msg::BmsFb::_bat_soc_type arg)
  {
    msg_.bat_soc = std::move(arg);
    return Init_BmsFb_bat_charging(msg_);
  }

private:
  ::segway_msgs::msg::BmsFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::BmsFb>()
{
  return segway_msgs::msg::builder::Init_BmsFb_bat_soc();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__BMS_FB__BUILDER_HPP_
