// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from segway_msgs:msg/ErrorCodeFb.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/error_code_fb__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "segway_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "segway_msgs/msg/detail/error_code_fb__struct.h"
#include "segway_msgs/msg/detail/error_code_fb__functions.h"
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


using _ErrorCodeFb__ros_msg_type = segway_msgs__msg__ErrorCodeFb;

static bool _ErrorCodeFb__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ErrorCodeFb__ros_msg_type * ros_message = static_cast<const _ErrorCodeFb__ros_msg_type *>(untyped_ros_message);
  // Field name: host_error
  {
    cdr << ros_message->host_error;
  }

  // Field name: central_error
  {
    cdr << ros_message->central_error;
  }

  // Field name: front_left_motor_error
  {
    cdr << ros_message->front_left_motor_error;
  }

  // Field name: front_right_motor_error
  {
    cdr << ros_message->front_right_motor_error;
  }

  // Field name: rear_left_motor_error
  {
    cdr << ros_message->rear_left_motor_error;
  }

  // Field name: rear_right_motor_error
  {
    cdr << ros_message->rear_right_motor_error;
  }

  // Field name: bms_error
  {
    cdr << ros_message->bms_error;
  }

  // Field name: brake_error
  {
    cdr << ros_message->brake_error;
  }

  return true;
}

static bool _ErrorCodeFb__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ErrorCodeFb__ros_msg_type * ros_message = static_cast<_ErrorCodeFb__ros_msg_type *>(untyped_ros_message);
  // Field name: host_error
  {
    cdr >> ros_message->host_error;
  }

  // Field name: central_error
  {
    cdr >> ros_message->central_error;
  }

  // Field name: front_left_motor_error
  {
    cdr >> ros_message->front_left_motor_error;
  }

  // Field name: front_right_motor_error
  {
    cdr >> ros_message->front_right_motor_error;
  }

  // Field name: rear_left_motor_error
  {
    cdr >> ros_message->rear_left_motor_error;
  }

  // Field name: rear_right_motor_error
  {
    cdr >> ros_message->rear_right_motor_error;
  }

  // Field name: bms_error
  {
    cdr >> ros_message->bms_error;
  }

  // Field name: brake_error
  {
    cdr >> ros_message->brake_error;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t get_serialized_size_segway_msgs__msg__ErrorCodeFb(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ErrorCodeFb__ros_msg_type * ros_message = static_cast<const _ErrorCodeFb__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name host_error
  {
    size_t item_size = sizeof(ros_message->host_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name central_error
  {
    size_t item_size = sizeof(ros_message->central_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_left_motor_error
  {
    size_t item_size = sizeof(ros_message->front_left_motor_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_right_motor_error
  {
    size_t item_size = sizeof(ros_message->front_right_motor_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_left_motor_error
  {
    size_t item_size = sizeof(ros_message->rear_left_motor_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rear_right_motor_error
  {
    size_t item_size = sizeof(ros_message->rear_right_motor_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bms_error
  {
    size_t item_size = sizeof(ros_message->bms_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brake_error
  {
    size_t item_size = sizeof(ros_message->brake_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ErrorCodeFb__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_segway_msgs__msg__ErrorCodeFb(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t max_serialized_size_segway_msgs__msg__ErrorCodeFb(
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

  // member: host_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: central_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_left_motor_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_right_motor_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rear_left_motor_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rear_right_motor_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: bms_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brake_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = segway_msgs__msg__ErrorCodeFb;
    is_plain =
      (
      offsetof(DataType, brake_error) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ErrorCodeFb__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_segway_msgs__msg__ErrorCodeFb(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ErrorCodeFb = {
  "segway_msgs::msg",
  "ErrorCodeFb",
  _ErrorCodeFb__cdr_serialize,
  _ErrorCodeFb__cdr_deserialize,
  _ErrorCodeFb__get_serialized_size,
  _ErrorCodeFb__max_serialized_size
};

static rosidl_message_type_support_t _ErrorCodeFb__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ErrorCodeFb,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, msg, ErrorCodeFb)() {
  return &_ErrorCodeFb__type_support;
}

#if defined(__cplusplus)
}
#endif
