// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:msg/TicksFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__TICKS_FB__STRUCT_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__TICKS_FB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__segway_msgs__msg__TicksFb __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__msg__TicksFb __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TicksFb_
{
  using Type = TicksFb_<ContainerAllocator>;

  explicit TicksFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_ticks = 0l;
      this->fr_ticks = 0l;
      this->rl_ticks = 0l;
      this->rr_ticks = 0l;
      this->ticks_timestamp = 0ull;
    }
  }

  explicit TicksFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fl_ticks = 0l;
      this->fr_ticks = 0l;
      this->rl_ticks = 0l;
      this->rr_ticks = 0l;
      this->ticks_timestamp = 0ull;
    }
  }

  // field types and members
  using _fl_ticks_type =
    int32_t;
  _fl_ticks_type fl_ticks;
  using _fr_ticks_type =
    int32_t;
  _fr_ticks_type fr_ticks;
  using _rl_ticks_type =
    int32_t;
  _rl_ticks_type rl_ticks;
  using _rr_ticks_type =
    int32_t;
  _rr_ticks_type rr_ticks;
  using _ticks_timestamp_type =
    uint64_t;
  _ticks_timestamp_type ticks_timestamp;

  // setters for named parameter idiom
  Type & set__fl_ticks(
    const int32_t & _arg)
  {
    this->fl_ticks = _arg;
    return *this;
  }
  Type & set__fr_ticks(
    const int32_t & _arg)
  {
    this->fr_ticks = _arg;
    return *this;
  }
  Type & set__rl_ticks(
    const int32_t & _arg)
  {
    this->rl_ticks = _arg;
    return *this;
  }
  Type & set__rr_ticks(
    const int32_t & _arg)
  {
    this->rr_ticks = _arg;
    return *this;
  }
  Type & set__ticks_timestamp(
    const uint64_t & _arg)
  {
    this->ticks_timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::msg::TicksFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::msg::TicksFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::msg::TicksFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::msg::TicksFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::TicksFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::TicksFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::TicksFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::TicksFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::msg::TicksFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::msg::TicksFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__msg__TicksFb
    std::shared_ptr<segway_msgs::msg::TicksFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__msg__TicksFb
    std::shared_ptr<segway_msgs::msg::TicksFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TicksFb_ & other) const
  {
    if (this->fl_ticks != other.fl_ticks) {
      return false;
    }
    if (this->fr_ticks != other.fr_ticks) {
      return false;
    }
    if (this->rl_ticks != other.rl_ticks) {
      return false;
    }
    if (this->rr_ticks != other.rr_ticks) {
      return false;
    }
    if (this->ticks_timestamp != other.ticks_timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TicksFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TicksFb_

// alias to use template instance with default allocator
using TicksFb =
  segway_msgs::msg::TicksFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__TICKS_FB__STRUCT_HPP_
