// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:msg/MotorWorkModeFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__MOTOR_WORK_MODE_FB__STRUCT_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__MOTOR_WORK_MODE_FB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__msg__MotorWorkModeFb __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__msg__MotorWorkModeFb __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorWorkModeFb_
{
  using Type = MotorWorkModeFb_<ContainerAllocator>;

  explicit MotorWorkModeFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_work_mode = 0;
    }
  }

  explicit MotorWorkModeFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_work_mode = 0;
    }
  }

  // field types and members
  using _motor_work_mode_type =
    uint16_t;
  _motor_work_mode_type motor_work_mode;

  // setters for named parameter idiom
  Type & set__motor_work_mode(
    const uint16_t & _arg)
  {
    this->motor_work_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::msg::MotorWorkModeFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::msg::MotorWorkModeFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::msg::MotorWorkModeFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::msg::MotorWorkModeFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::MotorWorkModeFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::MotorWorkModeFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::MotorWorkModeFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::MotorWorkModeFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::msg::MotorWorkModeFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::msg::MotorWorkModeFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__msg__MotorWorkModeFb
    std::shared_ptr<segway_msgs::msg::MotorWorkModeFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__msg__MotorWorkModeFb
    std::shared_ptr<segway_msgs::msg::MotorWorkModeFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorWorkModeFb_ & other) const
  {
    if (this->motor_work_mode != other.motor_work_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorWorkModeFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorWorkModeFb_

// alias to use template instance with default allocator
using MotorWorkModeFb =
  segway_msgs::msg::MotorWorkModeFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__MOTOR_WORK_MODE_FB__STRUCT_HPP_
