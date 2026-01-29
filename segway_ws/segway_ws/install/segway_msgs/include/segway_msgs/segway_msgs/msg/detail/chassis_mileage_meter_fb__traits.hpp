// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:msg/ChassisMileageMeterFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CHASSIS_MILEAGE_METER_FB__TRAITS_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__CHASSIS_MILEAGE_METER_FB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/msg/detail/chassis_mileage_meter_fb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace segway_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChassisMileageMeterFb & msg,
  std::ostream & out)
{
  out << "{";
  // member: vehicle_meters
  {
    out << "vehicle_meters: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_meters, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChassisMileageMeterFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: vehicle_meters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_meters: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_meters, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChassisMileageMeterFb & msg, bool use_flow_style = false)
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
  const segway_msgs::msg::ChassisMileageMeterFb & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::msg::ChassisMileageMeterFb & msg)
{
  return segway_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::msg::ChassisMileageMeterFb>()
{
  return "segway_msgs::msg::ChassisMileageMeterFb";
}

template<>
inline const char * name<segway_msgs::msg::ChassisMileageMeterFb>()
{
  return "segway_msgs/msg/ChassisMileageMeterFb";
}

template<>
struct has_fixed_size<segway_msgs::msg::ChassisMileageMeterFb>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<segway_msgs::msg::ChassisMileageMeterFb>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<segway_msgs::msg::ChassisMileageMeterFb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__MSG__DETAIL__CHASSIS_MILEAGE_METER_FB__TRAITS_HPP_
