// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/ChassisCtrlSrcFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CHASSIS_CTRL_SRC_FB__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__CHASSIS_CTRL_SRC_FB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ChassisCtrlSrcFb in the package segway_msgs.
typedef struct segway_msgs__msg__ChassisCtrlSrcFb
{
  uint16_t chassis_ctrl_cmd_src;
} segway_msgs__msg__ChassisCtrlSrcFb;

// Struct for a sequence of segway_msgs__msg__ChassisCtrlSrcFb.
typedef struct segway_msgs__msg__ChassisCtrlSrcFb__Sequence
{
  segway_msgs__msg__ChassisCtrlSrcFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__ChassisCtrlSrcFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__CHASSIS_CTRL_SRC_FB__STRUCT_H_
