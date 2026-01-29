// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from segway_msgs:action/RosSetIapCmd.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace segway_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RosSetIapCmd_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RosSetIapCmd_Goal_type_support_ids_t;

static const _RosSetIapCmd_Goal_type_support_ids_t _RosSetIapCmd_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RosSetIapCmd_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RosSetIapCmd_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RosSetIapCmd_Goal_type_support_symbol_names_t _RosSetIapCmd_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, action, RosSetIapCmd_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, segway_msgs, action, RosSetIapCmd_Goal)),
  }
};

typedef struct _RosSetIapCmd_Goal_type_support_data_t
{
  void * data[2];
} _RosSetIapCmd_Goal_type_support_data_t;

static _RosSetIapCmd_Goal_type_support_data_t _RosSetIapCmd_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RosSetIapCmd_Goal_message_typesupport_map = {
  2,
  "segway_msgs",
  &_RosSetIapCmd_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_RosSetIapCmd_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_RosSetIapCmd_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RosSetIapCmd_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RosSetIapCmd_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_Goal>()
{
  return &::segway_msgs::action::rosidl_typesupport_cpp::RosSetIapCmd_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, segway_msgs, action, RosSetIapCmd_Goal)() {
  return get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace segway_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RosSetIapCmd_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RosSetIapCmd_Result_type_support_ids_t;

static const _RosSetIapCmd_Result_type_support_ids_t _RosSetIapCmd_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RosSetIapCmd_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RosSetIapCmd_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RosSetIapCmd_Result_type_support_symbol_names_t _RosSetIapCmd_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, action, RosSetIapCmd_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, segway_msgs, action, RosSetIapCmd_Result)),
  }
};

typedef struct _RosSetIapCmd_Result_type_support_data_t
{
  void * data[2];
} _RosSetIapCmd_Result_type_support_data_t;

static _RosSetIapCmd_Result_type_support_data_t _RosSetIapCmd_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RosSetIapCmd_Result_message_typesupport_map = {
  2,
  "segway_msgs",
  &_RosSetIapCmd_Result_message_typesupport_ids.typesupport_identifier[0],
  &_RosSetIapCmd_Result_message_typesupport_symbol_names.symbol_name[0],
  &_RosSetIapCmd_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RosSetIapCmd_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RosSetIapCmd_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_Result>()
{
  return &::segway_msgs::action::rosidl_typesupport_cpp::RosSetIapCmd_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, segway_msgs, action, RosSetIapCmd_Result)() {
  return get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace segway_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RosSetIapCmd_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RosSetIapCmd_Feedback_type_support_ids_t;

static const _RosSetIapCmd_Feedback_type_support_ids_t _RosSetIapCmd_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RosSetIapCmd_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RosSetIapCmd_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RosSetIapCmd_Feedback_type_support_symbol_names_t _RosSetIapCmd_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, action, RosSetIapCmd_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, segway_msgs, action, RosSetIapCmd_Feedback)),
  }
};

typedef struct _RosSetIapCmd_Feedback_type_support_data_t
{
  void * data[2];
} _RosSetIapCmd_Feedback_type_support_data_t;

static _RosSetIapCmd_Feedback_type_support_data_t _RosSetIapCmd_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RosSetIapCmd_Feedback_message_typesupport_map = {
  2,
  "segway_msgs",
  &_RosSetIapCmd_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_RosSetIapCmd_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_RosSetIapCmd_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RosSetIapCmd_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RosSetIapCmd_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_Feedback>()
{
  return &::segway_msgs::action::rosidl_typesupport_cpp::RosSetIapCmd_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, segway_msgs, action, RosSetIapCmd_Feedback)() {
  return get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace segway_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RosSetIapCmd_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RosSetIapCmd_SendGoal_Request_type_support_ids_t;

static const _RosSetIapCmd_SendGoal_Request_type_support_ids_t _RosSetIapCmd_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RosSetIapCmd_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RosSetIapCmd_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RosSetIapCmd_SendGoal_Request_type_support_symbol_names_t _RosSetIapCmd_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, action, RosSetIapCmd_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, segway_msgs, action, RosSetIapCmd_SendGoal_Request)),
  }
};

typedef struct _RosSetIapCmd_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _RosSetIapCmd_SendGoal_Request_type_support_data_t;

static _RosSetIapCmd_SendGoal_Request_type_support_data_t _RosSetIapCmd_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RosSetIapCmd_SendGoal_Request_message_typesupport_map = {
  2,
  "segway_msgs",
  &_RosSetIapCmd_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RosSetIapCmd_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RosSetIapCmd_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RosSetIapCmd_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RosSetIapCmd_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_SendGoal_Request>()
{
  return &::segway_msgs::action::rosidl_typesupport_cpp::RosSetIapCmd_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, segway_msgs, action, RosSetIapCmd_SendGoal_Request)() {
  return get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace segway_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RosSetIapCmd_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RosSetIapCmd_SendGoal_Response_type_support_ids_t;

static const _RosSetIapCmd_SendGoal_Response_type_support_ids_t _RosSetIapCmd_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RosSetIapCmd_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RosSetIapCmd_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RosSetIapCmd_SendGoal_Response_type_support_symbol_names_t _RosSetIapCmd_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, action, RosSetIapCmd_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, segway_msgs, action, RosSetIapCmd_SendGoal_Response)),
  }
};

typedef struct _RosSetIapCmd_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _RosSetIapCmd_SendGoal_Response_type_support_data_t;

static _RosSetIapCmd_SendGoal_Response_type_support_data_t _RosSetIapCmd_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RosSetIapCmd_SendGoal_Response_message_typesupport_map = {
  2,
  "segway_msgs",
  &_RosSetIapCmd_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RosSetIapCmd_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RosSetIapCmd_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RosSetIapCmd_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RosSetIapCmd_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_SendGoal_Response>()
{
  return &::segway_msgs::action::rosidl_typesupport_cpp::RosSetIapCmd_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, segway_msgs, action, RosSetIapCmd_SendGoal_Response)() {
  return get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace segway_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RosSetIapCmd_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RosSetIapCmd_SendGoal_type_support_ids_t;

static const _RosSetIapCmd_SendGoal_type_support_ids_t _RosSetIapCmd_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RosSetIapCmd_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RosSetIapCmd_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RosSetIapCmd_SendGoal_type_support_symbol_names_t _RosSetIapCmd_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, action, RosSetIapCmd_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, segway_msgs, action, RosSetIapCmd_SendGoal)),
  }
};

typedef struct _RosSetIapCmd_SendGoal_type_support_data_t
{
  void * data[2];
} _RosSetIapCmd_SendGoal_type_support_data_t;

static _RosSetIapCmd_SendGoal_type_support_data_t _RosSetIapCmd_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RosSetIapCmd_SendGoal_service_typesupport_map = {
  2,
  "segway_msgs",
  &_RosSetIapCmd_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_RosSetIapCmd_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_RosSetIapCmd_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RosSetIapCmd_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RosSetIapCmd_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<segway_msgs::action::RosSetIapCmd_SendGoal>()
{
  return &::segway_msgs::action::rosidl_typesupport_cpp::RosSetIapCmd_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace segway_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RosSetIapCmd_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RosSetIapCmd_GetResult_Request_type_support_ids_t;

static const _RosSetIapCmd_GetResult_Request_type_support_ids_t _RosSetIapCmd_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RosSetIapCmd_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RosSetIapCmd_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RosSetIapCmd_GetResult_Request_type_support_symbol_names_t _RosSetIapCmd_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, action, RosSetIapCmd_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, segway_msgs, action, RosSetIapCmd_GetResult_Request)),
  }
};

typedef struct _RosSetIapCmd_GetResult_Request_type_support_data_t
{
  void * data[2];
} _RosSetIapCmd_GetResult_Request_type_support_data_t;

static _RosSetIapCmd_GetResult_Request_type_support_data_t _RosSetIapCmd_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RosSetIapCmd_GetResult_Request_message_typesupport_map = {
  2,
  "segway_msgs",
  &_RosSetIapCmd_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RosSetIapCmd_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RosSetIapCmd_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RosSetIapCmd_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RosSetIapCmd_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_GetResult_Request>()
{
  return &::segway_msgs::action::rosidl_typesupport_cpp::RosSetIapCmd_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, segway_msgs, action, RosSetIapCmd_GetResult_Request)() {
  return get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace segway_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RosSetIapCmd_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RosSetIapCmd_GetResult_Response_type_support_ids_t;

static const _RosSetIapCmd_GetResult_Response_type_support_ids_t _RosSetIapCmd_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RosSetIapCmd_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RosSetIapCmd_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RosSetIapCmd_GetResult_Response_type_support_symbol_names_t _RosSetIapCmd_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, action, RosSetIapCmd_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, segway_msgs, action, RosSetIapCmd_GetResult_Response)),
  }
};

typedef struct _RosSetIapCmd_GetResult_Response_type_support_data_t
{
  void * data[2];
} _RosSetIapCmd_GetResult_Response_type_support_data_t;

static _RosSetIapCmd_GetResult_Response_type_support_data_t _RosSetIapCmd_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RosSetIapCmd_GetResult_Response_message_typesupport_map = {
  2,
  "segway_msgs",
  &_RosSetIapCmd_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RosSetIapCmd_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RosSetIapCmd_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RosSetIapCmd_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RosSetIapCmd_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_GetResult_Response>()
{
  return &::segway_msgs::action::rosidl_typesupport_cpp::RosSetIapCmd_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, segway_msgs, action, RosSetIapCmd_GetResult_Response)() {
  return get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace segway_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RosSetIapCmd_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RosSetIapCmd_GetResult_type_support_ids_t;

static const _RosSetIapCmd_GetResult_type_support_ids_t _RosSetIapCmd_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RosSetIapCmd_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RosSetIapCmd_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RosSetIapCmd_GetResult_type_support_symbol_names_t _RosSetIapCmd_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, action, RosSetIapCmd_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, segway_msgs, action, RosSetIapCmd_GetResult)),
  }
};

typedef struct _RosSetIapCmd_GetResult_type_support_data_t
{
  void * data[2];
} _RosSetIapCmd_GetResult_type_support_data_t;

static _RosSetIapCmd_GetResult_type_support_data_t _RosSetIapCmd_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RosSetIapCmd_GetResult_service_typesupport_map = {
  2,
  "segway_msgs",
  &_RosSetIapCmd_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_RosSetIapCmd_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_RosSetIapCmd_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RosSetIapCmd_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RosSetIapCmd_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<segway_msgs::action::RosSetIapCmd_GetResult>()
{
  return &::segway_msgs::action::rosidl_typesupport_cpp::RosSetIapCmd_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace segway_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _RosSetIapCmd_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RosSetIapCmd_FeedbackMessage_type_support_ids_t;

static const _RosSetIapCmd_FeedbackMessage_type_support_ids_t _RosSetIapCmd_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RosSetIapCmd_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RosSetIapCmd_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RosSetIapCmd_FeedbackMessage_type_support_symbol_names_t _RosSetIapCmd_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, action, RosSetIapCmd_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, segway_msgs, action, RosSetIapCmd_FeedbackMessage)),
  }
};

typedef struct _RosSetIapCmd_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _RosSetIapCmd_FeedbackMessage_type_support_data_t;

static _RosSetIapCmd_FeedbackMessage_type_support_data_t _RosSetIapCmd_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RosSetIapCmd_FeedbackMessage_message_typesupport_map = {
  2,
  "segway_msgs",
  &_RosSetIapCmd_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_RosSetIapCmd_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_RosSetIapCmd_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RosSetIapCmd_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RosSetIapCmd_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_FeedbackMessage>()
{
  return &::segway_msgs::action::rosidl_typesupport_cpp::RosSetIapCmd_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, segway_msgs, action, RosSetIapCmd_FeedbackMessage)() {
  return get_message_type_support_handle<segway_msgs::action::RosSetIapCmd_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "segway_msgs/action/detail/ros_set_iap_cmd__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace segway_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t RosSetIapCmd_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace segway_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<segway_msgs::action::RosSetIapCmd>()
{
  using ::segway_msgs::action::rosidl_typesupport_cpp::RosSetIapCmd_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  RosSetIapCmd_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::segway_msgs::action::RosSetIapCmd::Impl::SendGoalService>();
  RosSetIapCmd_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::segway_msgs::action::RosSetIapCmd::Impl::GetResultService>();
  RosSetIapCmd_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::segway_msgs::action::RosSetIapCmd::Impl::CancelGoalService>();
  RosSetIapCmd_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::segway_msgs::action::RosSetIapCmd::Impl::FeedbackMessage>();
  RosSetIapCmd_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::segway_msgs::action::RosSetIapCmd::Impl::GoalStatusMessage>();
  return &RosSetIapCmd_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
