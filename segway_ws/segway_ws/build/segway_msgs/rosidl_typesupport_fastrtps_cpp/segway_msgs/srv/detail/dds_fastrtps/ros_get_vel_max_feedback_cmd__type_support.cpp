// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from segway_msgs:srv/RosGetVelMaxFeedbackCmd.idl
// generated code does not contain a copyright notice
#include "segway_msgs/srv/detail/ros_get_vel_max_feedback_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "segway_msgs/srv/detail/ros_get_vel_max_feedback_cmd__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace segway_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
cdr_serialize(
  const segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: ros_get_vel_max_fb_cmd
  cdr << (ros_message.ros_get_vel_max_fb_cmd ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request & ros_message)
{
  // Member: ros_get_vel_max_fb_cmd
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.ros_get_vel_max_fb_cmd = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
get_serialized_size(
  const segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: ros_get_vel_max_fb_cmd
  {
    size_t item_size = sizeof(ros_message.ros_get_vel_max_fb_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
max_serialized_size_RosGetVelMaxFeedbackCmd_Request(
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


  // Member: ros_get_vel_max_fb_cmd
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
    using DataType = segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request;
    is_plain =
      (
      offsetof(DataType, ros_get_vel_max_fb_cmd) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RosGetVelMaxFeedbackCmd_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RosGetVelMaxFeedbackCmd_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RosGetVelMaxFeedbackCmd_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RosGetVelMaxFeedbackCmd_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RosGetVelMaxFeedbackCmd_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RosGetVelMaxFeedbackCmd_Request__callbacks = {
  "segway_msgs::srv",
  "RosGetVelMaxFeedbackCmd_Request",
  _RosGetVelMaxFeedbackCmd_Request__cdr_serialize,
  _RosGetVelMaxFeedbackCmd_Request__cdr_deserialize,
  _RosGetVelMaxFeedbackCmd_Request__get_serialized_size,
  _RosGetVelMaxFeedbackCmd_Request__max_serialized_size
};

static rosidl_message_type_support_t _RosGetVelMaxFeedbackCmd_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RosGetVelMaxFeedbackCmd_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace segway_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_segway_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Request>()
{
  return &segway_msgs::srv::typesupport_fastrtps_cpp::_RosGetVelMaxFeedbackCmd_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, srv, RosGetVelMaxFeedbackCmd_Request)() {
  return &segway_msgs::srv::typesupport_fastrtps_cpp::_RosGetVelMaxFeedbackCmd_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace segway_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
cdr_serialize(
  const segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: forward_max_vel_fb
  cdr << ros_message.forward_max_vel_fb;
  // Member: backward_max_vel_fb
  cdr << ros_message.backward_max_vel_fb;
  // Member: angular_max_vel_fb
  cdr << ros_message.angular_max_vel_fb;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response & ros_message)
{
  // Member: forward_max_vel_fb
  cdr >> ros_message.forward_max_vel_fb;

  // Member: backward_max_vel_fb
  cdr >> ros_message.backward_max_vel_fb;

  // Member: angular_max_vel_fb
  cdr >> ros_message.angular_max_vel_fb;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
get_serialized_size(
  const segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: forward_max_vel_fb
  {
    size_t item_size = sizeof(ros_message.forward_max_vel_fb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: backward_max_vel_fb
  {
    size_t item_size = sizeof(ros_message.backward_max_vel_fb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_max_vel_fb
  {
    size_t item_size = sizeof(ros_message.angular_max_vel_fb);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
max_serialized_size_RosGetVelMaxFeedbackCmd_Response(
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


  // Member: forward_max_vel_fb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: backward_max_vel_fb
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: angular_max_vel_fb
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
    using DataType = segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response;
    is_plain =
      (
      offsetof(DataType, angular_max_vel_fb) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RosGetVelMaxFeedbackCmd_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RosGetVelMaxFeedbackCmd_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RosGetVelMaxFeedbackCmd_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RosGetVelMaxFeedbackCmd_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RosGetVelMaxFeedbackCmd_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RosGetVelMaxFeedbackCmd_Response__callbacks = {
  "segway_msgs::srv",
  "RosGetVelMaxFeedbackCmd_Response",
  _RosGetVelMaxFeedbackCmd_Response__cdr_serialize,
  _RosGetVelMaxFeedbackCmd_Response__cdr_deserialize,
  _RosGetVelMaxFeedbackCmd_Response__get_serialized_size,
  _RosGetVelMaxFeedbackCmd_Response__max_serialized_size
};

static rosidl_message_type_support_t _RosGetVelMaxFeedbackCmd_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RosGetVelMaxFeedbackCmd_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace segway_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_segway_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_msgs::srv::RosGetVelMaxFeedbackCmd_Response>()
{
  return &segway_msgs::srv::typesupport_fastrtps_cpp::_RosGetVelMaxFeedbackCmd_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, srv, RosGetVelMaxFeedbackCmd_Response)() {
  return &segway_msgs::srv::typesupport_fastrtps_cpp::_RosGetVelMaxFeedbackCmd_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace segway_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _RosGetVelMaxFeedbackCmd__callbacks = {
  "segway_msgs::srv",
  "RosGetVelMaxFeedbackCmd",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, srv, RosGetVelMaxFeedbackCmd_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, srv, RosGetVelMaxFeedbackCmd_Response)(),
};

static rosidl_service_type_support_t _RosGetVelMaxFeedbackCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RosGetVelMaxFeedbackCmd__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace segway_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_segway_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<segway_msgs::srv::RosGetVelMaxFeedbackCmd>()
{
  return &segway_msgs::srv::typesupport_fastrtps_cpp::_RosGetVelMaxFeedbackCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, srv, RosGetVelMaxFeedbackCmd)() {
  return &segway_msgs::srv::typesupport_fastrtps_cpp::_RosGetVelMaxFeedbackCmd__handle;
}

#ifdef __cplusplus
}
#endif
