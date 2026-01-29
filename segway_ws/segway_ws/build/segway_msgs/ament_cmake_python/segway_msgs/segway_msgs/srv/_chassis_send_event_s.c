// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from segway_msgs:srv/ChassisSendEvent.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "segway_msgs/srv/detail/chassis_send_event__struct.h"
#include "segway_msgs/srv/detail/chassis_send_event__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool segway_msgs__srv__chassis_send_event__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("segway_msgs.srv._chassis_send_event.ChassisSendEvent_Request", full_classname_dest, 60) == 0);
  }
  segway_msgs__srv__ChassisSendEvent_Request * ros_message = _ros_message;
  {  // chassis_send_event_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "chassis_send_event_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chassis_send_event_id = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * segway_msgs__srv__chassis_send_event__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChassisSendEvent_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("segway_msgs.srv._chassis_send_event");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChassisSendEvent_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  segway_msgs__srv__ChassisSendEvent_Request * ros_message = (segway_msgs__srv__ChassisSendEvent_Request *)raw_ros_message;
  {  // chassis_send_event_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->chassis_send_event_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chassis_send_event_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "segway_msgs/srv/detail/chassis_send_event__struct.h"
// already included above
// #include "segway_msgs/srv/detail/chassis_send_event__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool segway_msgs__srv__chassis_send_event__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("segway_msgs.srv._chassis_send_event.ChassisSendEvent_Response", full_classname_dest, 61) == 0);
  }
  segway_msgs__srv__ChassisSendEvent_Response * ros_message = _ros_message;
  {  // ros_is_received
    PyObject * field = PyObject_GetAttrString(_pymsg, "ros_is_received");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ros_is_received = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * segway_msgs__srv__chassis_send_event__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChassisSendEvent_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("segway_msgs.srv._chassis_send_event");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChassisSendEvent_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  segway_msgs__srv__ChassisSendEvent_Response * ros_message = (segway_msgs__srv__ChassisSendEvent_Response *)raw_ros_message;
  {  // ros_is_received
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ros_is_received ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ros_is_received", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
