// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from segway_msgs:msg/TicksFb.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/ticks_fb__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "segway_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "segway_msgs/msg/detail/ticks_fb__struct.h"
#include "segway_msgs/msg/detail/ticks_fb__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TicksFb__ros_msg_type = segway_msgs__msg__TicksFb;

static bool _TicksFb__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TicksFb__ros_msg_type * ros_message = static_cast<const _TicksFb__ros_msg_type *>(untyped_ros_message);
  // Field name: fl_ticks
  {
    cdr << ros_message->fl_ticks;
  }

  // Field name: fr_ticks
  {
    cdr << ros_message->fr_ticks;
  }

  // Field name: rl_ticks
  {
    cdr << ros_message->rl_ticks;
  }

  // Field name: rr_ticks
  {
    cdr << ros_message->rr_ticks;
  }

  // Field name: ticks_timestamp
  {
    cdr << ros_message->ticks_timestamp;
  }

  return true;
}

static bool _TicksFb__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TicksFb__ros_msg_type * ros_message = static_cast<_TicksFb__ros_msg_type *>(untyped_ros_message);
  // Field name: fl_ticks
  {
    cdr >> ros_message->fl_ticks;
  }

  // Field name: fr_ticks
  {
    cdr >> ros_message->fr_ticks;
  }

  // Field name: rl_ticks
  {
    cdr >> ros_message->rl_ticks;
  }

  // Field name: rr_ticks
  {
    cdr >> ros_message->rr_ticks;
  }

  // Field name: ticks_timestamp
  {
    cdr >> ros_message->ticks_timestamp;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t get_serialized_size_segway_msgs__msg__TicksFb(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TicksFb__ros_msg_type * ros_message = static_cast<const _TicksFb__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name fl_ticks
  {
    size_t item_size = sizeof(ros_message->fl_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fr_ticks
  {
    size_t item_size = sizeof(ros_message->fr_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rl_ticks
  {
    size_t item_size = sizeof(ros_message->rl_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rr_ticks
  {
    size_t item_size = sizeof(ros_message->rr_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ticks_timestamp
  {
    size_t item_size = sizeof(ros_message->ticks_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TicksFb__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_segway_msgs__msg__TicksFb(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t max_serialized_size_segway_msgs__msg__TicksFb(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: fl_ticks
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fr_ticks
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rl_ticks
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rr_ticks
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ticks_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = segway_msgs__msg__TicksFb;
    is_plain =
      (
      offsetof(DataType, ticks_timestamp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TicksFb__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_segway_msgs__msg__TicksFb(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TicksFb = {
  "segway_msgs::msg",
  "TicksFb",
  _TicksFb__cdr_serialize,
  _TicksFb__cdr_deserialize,
  _TicksFb__get_serialized_size,
  _TicksFb__max_serialized_size
};

static rosidl_message_type_support_t _TicksFb__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TicksFb,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, msg, TicksFb)() {
  return &_TicksFb__type_support;
}

#if defined(__cplusplus)
}
#endif
