// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:msg/FrontWheelAngleFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__STRUCT_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__msg__FrontWheelAngleFb __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__msg__FrontWheelAngleFb __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FrontWheelAngleFb_
{
  using Type = FrontWheelAngleFb_<ContainerAllocator>;

  explicit FrontWheelAngleFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_front_wheel_angle = 0.0f;
      this->chassis_front_wheel_angle_timestamp = 0ull;
    }
  }

  explicit FrontWheelAngleFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->chassis_front_wheel_angle = 0.0f;
      this->chassis_front_wheel_angle_timestamp = 0ull;
    }
  }

  // field types and members
  using _chassis_front_wheel_angle_type =
    float;
  _chassis_front_wheel_angle_type chassis_front_wheel_angle;
  using _chassis_front_wheel_angle_timestamp_type =
    uint64_t;
  _chassis_front_wheel_angle_timestamp_type chassis_front_wheel_angle_timestamp;

  // setters for named parameter idiom
  Type & set__chassis_front_wheel_angle(
    const float & _arg)
  {
    this->chassis_front_wheel_angle = _arg;
    return *this;
  }
  Type & set__chassis_front_wheel_angle_timestamp(
    const uint64_t & _arg)
  {
    this->chassis_front_wheel_angle_timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::msg::FrontWheelAngleFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::msg::FrontWheelAngleFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::msg::FrontWheelAngleFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::msg::FrontWheelAngleFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::FrontWheelAngleFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::FrontWheelAngleFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::FrontWheelAngleFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::FrontWheelAngleFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::msg::FrontWheelAngleFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::msg::FrontWheelAngleFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__msg__FrontWheelAngleFb
    std::shared_ptr<segway_msgs::msg::FrontWheelAngleFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__msg__FrontWheelAngleFb
    std::shared_ptr<segway_msgs::msg::FrontWheelAngleFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FrontWheelAngleFb_ & other) const
  {
    if (this->chassis_front_wheel_angle != other.chassis_front_wheel_angle) {
      return false;
    }
    if (this->chassis_front_wheel_angle_timestamp != other.chassis_front_wheel_angle_timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const FrontWheelAngleFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FrontWheelAngleFb_

// alias to use template instance with default allocator
using FrontWheelAngleFb =
  segway_msgs::msg::FrontWheelAngleFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__STRUCT_HPP_
