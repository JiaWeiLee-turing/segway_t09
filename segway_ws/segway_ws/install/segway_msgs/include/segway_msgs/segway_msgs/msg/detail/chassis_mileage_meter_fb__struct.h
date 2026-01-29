// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/ChassisMileageMeterFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CHASSIS_MILEAGE_METER_FB__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__CHASSIS_MILEAGE_METER_FB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ChassisMileageMeterFb in the package segway_msgs.
typedef struct segway_msgs__msg__ChassisMileageMeterFb
{
  uint32_t vehicle_meters;
} segway_msgs__msg__ChassisMileageMeterFb;

// Struct for a sequence of segway_msgs__msg__ChassisMileageMeterFb.
typedef struct segway_msgs__msg__ChassisMileageMeterFb__Sequence
{
  segway_msgs__msg__ChassisMileageMeterFb * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__ChassisMileageMeterFb__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__CHASSIS_MILEAGE_METER_FB__STRUCT_H_
