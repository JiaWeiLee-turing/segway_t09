// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from segway_msgs:msg/ErrorCodeFb.idl
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
#include "segway_msgs/msg/detail/error_code_fb__struct.h"
#include "segway_msgs/msg/detail/error_code_fb__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool segway_msgs__msg__error_code_fb__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("segway_msgs.msg._error_code_fb.ErrorCodeFb", full_classname_dest, 42) == 0);
  }
  segway_msgs__msg__ErrorCodeFb * ros_message = _ros_message;
  {  // host_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "host_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->host_error = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // central_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "central_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->central_error = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // front_left_motor_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_left_motor_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_left_motor_error = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // front_right_motor_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_right_motor_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_right_motor_error = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rear_left_motor_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_left_motor_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rear_left_motor_error = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rear_right_motor_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_right_motor_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rear_right_motor_error = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bms_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "bms_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bms_error = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brake_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_error = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * segway_msgs__msg__error_code_fb__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ErrorCodeFb */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("segway_msgs.msg._error_code_fb");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ErrorCodeFb");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  segway_msgs__msg__ErrorCodeFb * ros_message = (segway_msgs__msg__ErrorCodeFb *)raw_ros_message;
  {  // host_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->host_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "host_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // central_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->central_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "central_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_left_motor_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->front_left_motor_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_left_motor_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_right_motor_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->front_right_motor_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_right_motor_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_left_motor_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rear_left_motor_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_left_motor_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_right_motor_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rear_right_motor_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_right_motor_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bms_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bms_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bms_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brake_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
