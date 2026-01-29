// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/FrontWheelAngleFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FrontWheelAngleFb in the package segway_msgs.
typedef struct segway_msgs__msg__FrontWheelAngleFb
{
  /// Angle of front wheel encoder; 0: in the middle; Positive: indicates the left-turn angle(unit:degree)
  float chassis_front_wheel_angle;
  uint64_t chassis_front_wheel_angle_timestamp;
} segway_msgs__msg__FrontWheelAngleFb;

// Struct for a sequence of segway_msgs__msg__FrontWheelAngleFb.
typedef struct segway_msgs__msg__FrontWheelAngleFb__Sequence
{
  segway_msgs__msg__FrontWheelAngleFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__FrontWheelAngleFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__STRUCT_H_
