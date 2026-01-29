// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/ChassisMileageMeterFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CHASSIS_MILEAGE_METER_FB__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__CHASSIS_MILEAGE_METER_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/chassis_mileage_meter_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_ChassisMileageMeterFb_vehicle_meters
{
public:
  Init_ChassisMileageMeterFb_vehicle_meters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::msg::ChassisMileageMeterFb vehicle_meters(::segway_msgs::msg::ChassisMileageMeterFb::_vehicle_meters_type arg)
  {
    msg_.vehicle_meters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::ChassisMileageMeterFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::ChassisMileageMeterFb>()
{
  return segway_msgs::msg::builder::Init_ChassisMileageMeterFb_vehicle_meters();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__CHASSIS_MILEAGE_METER_FB__BUILDER_HPP_
