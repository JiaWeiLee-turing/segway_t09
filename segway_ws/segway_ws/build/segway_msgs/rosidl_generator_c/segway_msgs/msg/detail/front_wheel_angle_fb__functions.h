// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from segway_msgs:msg/FrontWheelAngleFb.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__FUNCTIONS_H_
#define SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "segway_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "segway_msgs/msg/detail/front_wheel_angle_fb__struct.h"

/// Initialize msg/FrontWheelAngleFb message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * segway_msgs__msg__FrontWheelAngleFb
 * )) before or use
 * segway_msgs__msg__FrontWheelAngleFb__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_msgs
bool
segway_msgs__msg__FrontWheelAngleFb__init(segway_msgs__msg__FrontWheelAngleFb * msg);

/// Finalize msg/FrontWheelAngleFb message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_msgs
void
segway_msgs__msg__FrontWheelAngleFb__fini(segway_msgs__msg__FrontWheelAngleFb * msg);

/// Create msg/FrontWheelAngleFb message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * segway_msgs__msg__FrontWheelAngleFb__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_msgs
segway_msgs__msg__FrontWheelAngleFb *
segway_msgs__msg__FrontWheelAngleFb__create();

/// Destroy msg/FrontWheelAngleFb message.
/**
 * It calls
 * segway_msgs__msg__FrontWheelAngleFb__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_msgs
void
segway_msgs__msg__FrontWheelAngleFb__destroy(segway_msgs__msg__FrontWheelAngleFb * msg);

/// Check for msg/FrontWheelAngleFb message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_msgs
bool
segway_msgs__msg__FrontWheelAngleFb__are_equal(const segway_msgs__msg__FrontWheelAngleFb * lhs, const segway_msgs__msg__FrontWheelAngleFb * rhs);

/// Copy a msg/FrontWheelAngleFb message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_msgs
bool
segway_msgs__msg__FrontWheelAngleFb__copy(
  const segway_msgs__msg__FrontWheelAngleFb * input,
  segway_msgs__msg__FrontWheelAngleFb * output);

/// Initialize array of msg/FrontWheelAngleFb messages.
/**
 * It allocates the memory for the number of elements and calls
 * segway_msgs__msg__FrontWheelAngleFb__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_msgs
bool
segway_msgs__msg__FrontWheelAngleFb__Sequence__init(segway_msgs__msg__FrontWheelAngleFb__Sequence * array, size_t size);

/// Finalize array of msg/FrontWheelAngleFb messages.
/**
 * It calls
 * segway_msgs__msg__FrontWheelAngleFb__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_msgs
void
segway_msgs__msg__FrontWheelAngleFb__Sequence__fini(segway_msgs__msg__FrontWheelAngleFb__Sequence * array);

/// Create array of msg/FrontWheelAngleFb messages.
/**
 * It allocates the memory for the array and calls
 * segway_msgs__msg__FrontWheelAngleFb__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_msgs
segway_msgs__msg__FrontWheelAngleFb__Sequence *
segway_msgs__msg__FrontWheelAngleFb__Sequence__create(size_t size);

/// Destroy array of msg/FrontWheelAngleFb messages.
/**
 * It calls
 * segway_msgs__msg__FrontWheelAngleFb__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_msgs
void
segway_msgs__msg__FrontWheelAngleFb__Sequence__destroy(segway_msgs__msg__FrontWheelAngleFb__Sequence * array);

/// Check for msg/FrontWheelAngleFb message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_msgs
bool
segway_msgs__msg__FrontWheelAngleFb__Sequence__are_equal(const segway_msgs__msg__FrontWheelAngleFb__Sequence * lhs, const segway_msgs__msg__FrontWheelAngleFb__Sequence * rhs);

/// Copy an array of msg/FrontWheelAngleFb messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_segway_msgs
bool
segway_msgs__msg__FrontWheelAngleFb__Sequence__copy(
  const segway_msgs__msg__FrontWheelAngleFb__Sequence * input,
  segway_msgs__msg__FrontWheelAngleFb__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__FRONT_WHEEL_ANGLE_FB__FUNCTIONS_H_
