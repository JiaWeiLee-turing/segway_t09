// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from segway_msgs:srv/RosSetCfgRotateFunctionCmd.idl
// generated code does not contain a copyright notice
#include "segway_msgs/srv/detail/ros_set_cfg_rotate_function_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "segway_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "segway_msgs/srv/detail/ros_set_cfg_rotate_function_cmd__struct.h"
#include "segway_msgs/srv/detail/ros_set_cfg_rotate_function_cmd__functions.h"
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


using _RosSetCfgRotateFunctionCmd_Request__ros_msg_type = segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request;

static bool _RosSetCfgRotateFunctionCmd_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RosSetCfgRotateFunctionCmd_Request__ros_msg_type * ros_message = static_cast<const _RosSetCfgRotateFunctionCmd_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cfg_in_situ_rotation_function
  {
    cdr << (ros_message->cfg_in_situ_rotation_function ? true : false);
  }

  return true;
}

static bool _RosSetCfgRotateFunctionCmd_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RosSetCfgRotateFunctionCmd_Request__ros_msg_type * ros_message = static_cast<_RosSetCfgRotateFunctionCmd_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cfg_in_situ_rotation_function
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->cfg_in_situ_rotation_function = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t get_serialized_size_segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RosSetCfgRotateFunctionCmd_Request__ros_msg_type * ros_message = static_cast<const _RosSetCfgRotateFunctionCmd_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cfg_in_situ_rotation_function
  {
    size_t item_size = sizeof(ros_message->cfg_in_situ_rotation_function);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RosSetCfgRotateFunctionCmd_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t max_serialized_size_segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request(
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

  // member: cfg_in_situ_rotation_function
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request;
    is_plain =
      (
      offsetof(DataType, cfg_in_situ_rotation_function) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RosSetCfgRotateFunctionCmd_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_segway_msgs__srv__RosSetCfgRotateFunctionCmd_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RosSetCfgRotateFunctionCmd_Request = {
  "segway_msgs::srv",
  "RosSetCfgRotateFunctionCmd_Request",
  _RosSetCfgRotateFunctionCmd_Request__cdr_serialize,
  _RosSetCfgRotateFunctionCmd_Request__cdr_deserialize,
  _RosSetCfgRotateFunctionCmd_Request__get_serialized_size,
  _RosSetCfgRotateFunctionCmd_Request__max_serialized_size
};

static rosidl_message_type_support_t _RosSetCfgRotateFunctionCmd_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RosSetCfgRotateFunctionCmd_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosSetCfgRotateFunctionCmd_Request)() {
  return &_RosSetCfgRotateFunctionCmd_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "segway_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "segway_msgs/srv/detail/ros_set_cfg_rotate_function_cmd__struct.h"
// already included above
// #include "segway_msgs/srv/detail/ros_set_cfg_rotate_function_cmd__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _RosSetCfgRotateFunctionCmd_Response__ros_msg_type = segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response;

static bool _RosSetCfgRotateFunctionCmd_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RosSetCfgRotateFunctionCmd_Response__ros_msg_type * ros_message = static_cast<const _RosSetCfgRotateFunctionCmd_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: cfg_in_situ_rotation_result
  {
    cdr << ros_message->cfg_in_situ_rotation_result;
  }

  return true;
}

static bool _RosSetCfgRotateFunctionCmd_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RosSetCfgRotateFunctionCmd_Response__ros_msg_type * ros_message = static_cast<_RosSetCfgRotateFunctionCmd_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: cfg_in_situ_rotation_result
  {
    cdr >> ros_message->cfg_in_situ_rotation_result;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t get_serialized_size_segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RosSetCfgRotateFunctionCmd_Response__ros_msg_type * ros_message = static_cast<const _RosSetCfgRotateFunctionCmd_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cfg_in_situ_rotation_result
  {
    size_t item_size = sizeof(ros_message->cfg_in_situ_rotation_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RosSetCfgRotateFunctionCmd_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t max_serialized_size_segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response(
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

  // member: cfg_in_situ_rotation_result
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response;
    is_plain =
      (
      offsetof(DataType, cfg_in_situ_rotation_result) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RosSetCfgRotateFunctionCmd_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_segway_msgs__srv__RosSetCfgRotateFunctionCmd_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RosSetCfgRotateFunctionCmd_Response = {
  "segway_msgs::srv",
  "RosSetCfgRotateFunctionCmd_Response",
  _RosSetCfgRotateFunctionCmd_Response__cdr_serialize,
  _RosSetCfgRotateFunctionCmd_Response__cdr_deserialize,
  _RosSetCfgRotateFunctionCmd_Response__get_serialized_size,
  _RosSetCfgRotateFunctionCmd_Response__max_serialized_size
};

static rosidl_message_type_support_t _RosSetCfgRotateFunctionCmd_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RosSetCfgRotateFunctionCmd_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosSetCfgRotateFunctionCmd_Response)() {
  return &_RosSetCfgRotateFunctionCmd_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "segway_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "segway_msgs/srv/ros_set_cfg_rotate_function_cmd.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RosSetCfgRotateFunctionCmd__callbacks = {
  "segway_msgs::srv",
  "RosSetCfgRotateFunctionCmd",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosSetCfgRotateFunctionCmd_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosSetCfgRotateFunctionCmd_Response)(),
};

static rosidl_service_type_support_t RosSetCfgRotateFunctionCmd__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RosSetCfgRotateFunctionCmd__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosSetCfgRotateFunctionCmd)() {
  return &RosSetCfgRotateFunctionCmd__handle;
}

#if defined(__cplusplus)
}
#endif
