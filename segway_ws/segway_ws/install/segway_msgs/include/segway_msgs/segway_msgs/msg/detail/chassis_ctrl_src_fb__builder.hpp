// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from segway_msgs:msg/ChassisCtrlSrcFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CHASSIS_CTRL_SRC_FB__BUILDER_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__CHASSIS_CTRL_SRC_FB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "segway_msgs/msg/detail/chassis_ctrl_src_fb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace segway_msgs
{

namespace msg
{

namespace builder
{

class Init_ChassisCtrlSrcFb_chassis_ctrl_cmd_src
{
public:
  Init_ChassisCtrlSrcFb_chassis_ctrl_cmd_src()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::segway_msgs::msg::ChassisCtrlSrcFb chassis_ctrl_cmd_src(::segway_msgs::msg::ChassisCtrlSrcFb::_chassis_ctrl_cmd_src_type arg)
  {
    msg_.chassis_ctrl_cmd_src = std::move(arg);
    return std::move(msg_);
  }

private:
  ::segway_msgs::msg::ChassisCtrlSrcFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::segway_msgs::msg::ChassisCtrlSrcFb>()
{
  return segway_msgs::msg::builder::Init_ChassisCtrlSrcFb_chassis_ctrl_cmd_src();
}

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__CHASSIS_CTRL_SRC_FB__BUILDER_HPP_
