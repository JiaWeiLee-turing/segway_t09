// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from segway_msgs:srv/RosGetVelMaxFeedbackCmd.idl
// generated code does not contain a copyright notice
#include "segway_msgs/srv/detail/ros_get_vel_max_feedback_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "segway_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "segway_msgs/srv/detail/ros_get_vel_max_feedback_cmd__struct.h"
#include "segway_msgs/srv/detail/ros_get_vel_max_feedback_cmd__functions.h"
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


using _RosGetVelMaxFeedbackCmd_Request__ros_msg_type = segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request;

static bool _RosGetVelMaxFeedbackCmd_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RosGetVelMaxFeedbackCmd_Request__ros_msg_type * ros_message = static_cast<const _RosGetVelMaxFeedbackCmd_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ros_get_vel_max_fb_cmd
  {
    cdr << (ros_message->ros_get_vel_max_fb_cmd ? true : false);
  }

  return true;
}

static bool _RosGetVelMaxFeedbackCmd_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RosGetVelMaxFeedbackCmd_Request__ros_msg_type * ros_message = static_cast<_RosGetVelMaxFeedbackCmd_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ros_get_vel_max_fb_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ros_get_vel_max_fb_cmd = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t get_serialized_size_segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RosGetVelMaxFeedbackCmd_Request__ros_msg_type * ros_message = static_cast<const _RosGetVelMaxFeedbackCmd_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ros_get_vel_max_fb_cmd
  {
    size_t item_size = sizeof(ros_message->ros_get_vel_max_fb_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RosGetVelMaxFeedbackCmd_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t max_serialized_size_segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request(
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

  // member: ros_get_vel_max_fb_cmd
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
    using DataType = segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request;
    is_plain =
      (
      offsetof(DataType, ros_get_vel_max_fb_cmd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RosGetVelMaxFeedbackCmd_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_segway_msgs__srv__RosGetVelMaxFeedbackCmd_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RosGetVelMaxFeedbackCmd_Request = {
  "segway_msgs::srv",
  "RosGetVelMaxFeedbackCmd_Request",
  _RosGetVelMaxFeedbackCmd_Request__cdr_serialize,
  _RosGetVelMaxFeedbackCmd_Request__cdr_deserialize,
  _RosGetVelMaxFeedbackCmd_Request__get_serialized_size,
  _RosGetVelMaxFeedbackCmd_Request__max_serialized_size
};

static rosidl_message_type_support_t _RosGetVelMaxFeedbackCmd_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RosGetVelMaxFeedbackCmd_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosGetVelMaxFeedbackCmd_Request)() {
  return &_RosGetVelMaxFeedbackCmd_Request__type_support;
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
// #include "segway_msgs/srv/detail/ros_get_vel_max_feedback_cmd__struct.h"
// already included above
// #include "segway_msgs/srv/detail/ros_get_vel_max_feedback_cmd__functions.h"
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


using _RosGetVelMaxFeedbackCmd_Response__ros_msg_type = segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response;

static bool _RosGetVelMaxFeedbackCmd_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RosGetVelMaxFeedbackCmd_Response__ros_msg_type * ros_message = static_cast<const _RosGetVelMaxFeedbackCmd_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: forward_max_vel_fb
  {
    cdr << ros_message->forward_max_vel_fb;
  }

  // Field name: backward_max_vel_fb
  {
    cdr << ros_message->backward_max_vel_fb;
  }

  // Field name: angular_max_vel_fb
  {
    cdr << ros_message->angular_max_vel_fb;
  }

  return true;
}

static bool _RosGetVelMaxFeedbackCmd_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RosGetVelMaxFeedbackCmd_Response__ros_msg_type * ros_message = static_cast<_RosGetVelMaxFeedbackCmd_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: forward_max_vel_fb
  {
    cdr >> ros_message->forward_max_vel_fb;
  }

  // Field name: backward_max_vel_fb
  {
    cdr >> ros_message->backward_max_vel_fb;
  }

  // Field name: angular_max_vel_fb
  {
    cdr >> ros_message->angular_max_vel_fb;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t get_serialized_size_segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RosGetVelMaxFeedbackCmd_Response__ros_msg_type * ros_message = static_cast<const _RosGetVelMaxFeedbackCmd_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name forward_max_vel_fb
  {
    size_t item_size = sizeof(ros_message->forward_max_vel_fb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name backward_max_vel_fb
  {
    size_t item_size = sizeof(ros_message->backward_max_vel_fb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_max_vel_fb
  {
    size_t item_size = sizeof(ros_message->angular_max_vel_fb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RosGetVelMaxFeedbackCmd_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t max_serialized_size_segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response(
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

  // member: forward_max_vel_fb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: backward_max_vel_fb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: angular_max_vel_fb
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
    using DataType = segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response;
    is_plain =
      (
      offsetof(DataType, angular_max_vel_fb) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RosGetVelMaxFeedbackCmd_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_segway_msgs__srv__RosGetVelMaxFeedbackCmd_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RosGetVelMaxFeedbackCmd_Response = {
  "segway_msgs::srv",
  "RosGetVelMaxFeedbackCmd_Response",
  _RosGetVelMaxFeedbackCmd_Response__cdr_serialize,
  _RosGetVelMaxFeedbackCmd_Response__cdr_deserialize,
  _RosGetVelMaxFeedbackCmd_Response__get_serialized_size,
  _RosGetVelMaxFeedbackCmd_Response__max_serialized_size
};

static rosidl_message_type_support_t _RosGetVelMaxFeedbackCmd_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RosGetVelMaxFeedbackCmd_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosGetVelMaxFeedbackCmd_Response)() {
  return &_RosGetVelMaxFeedbackCmd_Response__type_support;
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
#include "segway_msgs/srv/ros_get_vel_max_feedback_cmd.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RosGetVelMaxFeedbackCmd__callbacks = {
  "segway_msgs::srv",
  "RosGetVelMaxFeedbackCmd",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosGetVelMaxFeedbackCmd_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosGetVelMaxFeedbackCmd_Response)(),
};

static rosidl_service_type_support_t RosGetVelMaxFeedbackCmd__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RosGetVelMaxFeedbackCmd__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, srv, RosGetVelMaxFeedbackCmd)() {
  return &RosGetVelMaxFeedbackCmd__handle;
}

#if defined(__cplusplus)
}
#endif
