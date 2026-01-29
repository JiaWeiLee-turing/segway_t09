// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:msg/FrontWheelAngleFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__TRAITS_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/msg/detail/front_wheel_angle_fb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace segway_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FrontWheelAngleFb & msg,
  std::ostream & out)
{
  out << "{";
  // member: chassis_front_wheel_angle
  {
    out << "chassis_front_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_front_wheel_angle, out);
    out << ", ";
  }

  // member: chassis_front_wheel_angle_timestamp
  {
    out << "chassis_front_wheel_angle_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_front_wheel_angle_timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FrontWheelAngleFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: chassis_front_wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_front_wheel_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_front_wheel_angle, out);
    out << "\n";
  }

  // member: chassis_front_wheel_angle_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "chassis_front_wheel_angle_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.chassis_front_wheel_angle_timestamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FrontWheelAngleFb & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace segway_msgs

namespace rosidl_generator_traits
{

[[deprecated("use segway_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_msgs::msg::FrontWheelAngleFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::msg::FrontWheelAngleFb & msg)
{
  return segway_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::msg::FrontWheelAngleFb>()
{
  return "segway_msgs::msg::FrontWheelAngleFb";
}

template<>
inline const char * name<segway_msgs::msg::FrontWheelAngleFb>()
{
  return "segway_msgs/msg/FrontWheelAngleFb";
}

template<>
struct has_fixed_size<segway_msgs::msg::FrontWheelAngleFb>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::msg::FrontWheelAngleFb>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::msg::FrontWheelAngleFb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__TRAITS_HPP_
