// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from segway_msgs:msg/SpeedFb.idl
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
#include "segway_msgs/msg/detail/speed_fb__struct.h"
#include "segway_msgs/msg/detail/speed_fb__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool segway_msgs__msg__speed_fb__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("segway_msgs.msg._speed_fb.SpeedFb", full_classname_dest, 33) == 0);
  }
  segway_msgs__msg__SpeedFb * ros_message = _ros_message;
  {  // car_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "car_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->car_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turn_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turn_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fl_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "fl_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fl_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fr_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "fr_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fr_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rl_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "rl_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rl_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rr_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rr_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * segway_msgs__msg__speed_fb__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SpeedFb */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("segway_msgs.msg._speed_fb");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SpeedFb");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  segway_msgs__msg__SpeedFb * ros_message = (segway_msgs__msg__SpeedFb *)raw_ros_message;
  {  // car_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->car_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "car_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turn_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fl_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fl_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fl_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fr_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fr_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fr_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rl_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rl_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rl_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rr_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->speed_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
