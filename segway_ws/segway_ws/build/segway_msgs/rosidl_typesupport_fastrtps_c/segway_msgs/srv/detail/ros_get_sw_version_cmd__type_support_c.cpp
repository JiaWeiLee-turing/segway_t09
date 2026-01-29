// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from segway_msgs:srv/RosGetSwVersionCmd.idl
// generated code does not contain a copyright notice
#include "segway_msgs/srv/detail/ros_get_sw_version_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "segway_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "segway_msgs/srv/detail/ros_get_sw_version_cmd__struct.h"
#include "segway_msgs/srv/detail/ros_get_sw_version_cmd__functions.h"
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


using _RosGetSwVersionCmd_Request__ros_msg_type = segway_msgs__srv__RosGetSwVersionCmd_Request;

static bool _RosGetSwVersionCmd_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RosGetSwVersionCmd_Request__ros_msg_type * ros_message = static_cast<const _RosGetSwVersionCmd_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ros_get_sw_version_cmd
  {
    cdr << (ros_message->ros_get_sw_version_cmd ? true : false);
  }

  return true;
}

static bool _RosGetSwVersionCmd_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RosGetSwVersionCmd_Request__ros_msg_type * ros_message = static_cast<_RosGetSwVersionCmd_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ros_get_sw_version_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ros_get_sw_version_cmd = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t get_serialized_size_segway_msgs__srv__RosGetSwVersionCmd_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RosGetSwVersionCmd_Request__ros_msg_type * ros_message = static_cast<const _RosGetSwVersionCmd_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ros_get_sw_version_cmd
  {
    size_t item_size = sizeof(ros_message->ros_get_sw_version_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RosGetSwVersionCmd_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_segway_msgs__srv__RosGetSwVersionCmd_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t max_serialized_size_segway_msgs__srv__RosGetSwVersionCmd_Request(
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

  // member: ros_get_sw_version_cmd
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
    using DataType = segway_msgs__srv__RosGetSwVersionCmd_Request;
    is_plain =
      (
      offsetof(DataType, ros_get_sw_version_cmd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RosGetSwVersionCmd_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_segway_msgs__srv__RosGetSwVersionCmd_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RosGetSwVersionCmd_Request = {
  "segway_msgs::srv",
  "RosGetSwVersionCmd_Request",
  _RosGetSwVersionCmd_Request__cdr_serialize,
  _RosGetSwVersionCmd_Request__cdr_deserialize,
  _RosGetSwVersionCmd_Request__get_serialized_size,
  _RosGetSwVersionCmd_Request__max_serialized_size
};

static rosidl_message_type_support_t _RosGetSwVersionCmd_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RosGetSwVersionCmd_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosGetSwVersionCmd_Request)() {
  return &_RosGetSwVersionCmd_Request__type_support;
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
// #include "segway_msgs/srv/detail/ros_get_sw_version_cmd__struct.h"
// already included above
// #include "segway_msgs/srv/detail/ros_get_sw_version_cmd__functions.h"
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


using _RosGetSwVersionCmd_Response__ros_msg_type = segway_msgs__srv__RosGetSwVersionCmd_Response;

static bool _RosGetSwVersionCmd_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RosGetSwVersionCmd_Response__ros_msg_type * ros_message = static_cast<const _RosGetSwVersionCmd_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: host_version
  {
    cdr << ros_message->host_version;
  }

  // Field name: host_pantch_version
  {
    cdr << ros_message->host_pantch_version;
  }

  // Field name: central_version
  {
    cdr << ros_message->central_version;
  }

  // Field name: motor_version
  {
    cdr << ros_message->motor_version;
  }

  return true;
}

static bool _RosGetSwVersionCmd_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RosGetSwVersionCmd_Response__ros_msg_type * ros_message = static_cast<_RosGetSwVersionCmd_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: host_version
  {
    cdr >> ros_message->host_version;
  }

  // Field name: host_pantch_version
  {
    cdr >> ros_message->host_pantch_version;
  }

  // Field name: central_version
  {
    cdr >> ros_message->central_version;
  }

  // Field name: motor_version
  {
    cdr >> ros_message->motor_version;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t get_serialized_size_segway_msgs__srv__RosGetSwVersionCmd_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RosGetSwVersionCmd_Response__ros_msg_type * ros_message = static_cast<const _RosGetSwVersionCmd_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name host_version
  {
    size_t item_size = sizeof(ros_message->host_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name host_pantch_version
  {
    size_t item_size = sizeof(ros_message->host_pantch_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name central_version
  {
    size_t item_size = sizeof(ros_message->central_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_version
  {
    size_t item_size = sizeof(ros_message->motor_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RosGetSwVersionCmd_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_segway_msgs__srv__RosGetSwVersionCmd_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t max_serialized_size_segway_msgs__srv__RosGetSwVersionCmd_Response(
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

  // member: host_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: host_pantch_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: central_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: motor_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = segway_msgs__srv__RosGetSwVersionCmd_Response;
    is_plain =
      (
      offsetof(DataType, motor_version) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RosGetSwVersionCmd_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_segway_msgs__srv__RosGetSwVersionCmd_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RosGetSwVersionCmd_Response = {
  "segway_msgs::srv",
  "RosGetSwVersionCmd_Response",
  _RosGetSwVersionCmd_Response__cdr_serialize,
  _RosGetSwVersionCmd_Response__cdr_deserialize,
  _RosGetSwVersionCmd_Response__get_serialized_size,
  _RosGetSwVersionCmd_Response__max_serialized_size
};

static rosidl_message_type_support_t _RosGetSwVersionCmd_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RosGetSwVersionCmd_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosGetSwVersionCmd_Response)() {
  return &_RosGetSwVersionCmd_Response__type_support;
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
#include "segway_msgs/srv/ros_get_sw_version_cmd.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RosGetSwVersionCmd__callbacks = {
  "segway_msgs::srv",
  "RosGetSwVersionCmd",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosGetSwVersionCmd_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosGetSwVersionCmd_Response)(),
};

static rosidl_service_type_support_t RosGetSwVersionCmd__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RosGetSwVersionCmd__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosGetSwVersionCmd)() {
  return &RosGetSwVersionCmd__handle;
}

#if defined(__cplusplus)
}
#endif
