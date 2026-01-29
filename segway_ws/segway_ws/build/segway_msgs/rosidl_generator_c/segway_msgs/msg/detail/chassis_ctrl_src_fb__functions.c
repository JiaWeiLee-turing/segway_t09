// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:msg/ChassisCtrlSrcFb.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/chassis_ctrl_src_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
segway_msgs__msg__ChassisCtrlSrcFb__init(segway_msgs__msg__ChassisCtrlSrcFb * msg)
{
  if (!msg) {
    return false;
  }
  // chassis_ctrl_cmd_src
  return true;
}

void
segway_msgs__msg__ChassisCtrlSrcFb__fini(segway_msgs__msg__ChassisCtrlSrcFb * msg)
{
  if (!msg) {
    return;
  }
  // chassis_ctrl_cmd_src
}

bool
segway_msgs__msg__ChassisCtrlSrcFb__are_equal(const segway_msgs__msg__ChassisCtrlSrcFb * lhs, const segway_msgs__msg__ChassisCtrlSrcFb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // chassis_ctrl_cmd_src
  if (lhs->chassis_ctrl_cmd_src != rhs->chassis_ctrl_cmd_src) {
    return false;
  }
  return true;
}

bool
segway_msgs__msg__ChassisCtrlSrcFb__copy(
  const segway_msgs__msg__ChassisCtrlSrcFb * input,
  segway_msgs__msg__ChassisCtrlSrcFb * output)
{
  if (!input || !output) {
    return false;
  }
  // chassis_ctrl_cmd_src
  output->chassis_ctrl_cmd_src = input->chassis_ctrl_cmd_src;
  return true;
}

segway_msgs__msg__ChassisCtrlSrcFb *
segway_msgs__msg__ChassisCtrlSrcFb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__ChassisCtrlSrcFb * msg = (segway_msgs__msg__ChassisCtrlSrcFb *)allocator.allocate(sizeof(segway_msgs__msg__ChassisCtrlSrcFb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__msg__ChassisCtrlSrcFb));
  bool success = segway_msgs__msg__ChassisCtrlSrcFb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__msg__ChassisCtrlSrcFb__destroy(segway_msgs__msg__ChassisCtrlSrcFb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__msg__ChassisCtrlSrcFb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__msg__ChassisCtrlSrcFb__Sequence__init(segway_msgs__msg__ChassisCtrlSrcFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__ChassisCtrlSrcFb * data = NULL;

  if (size) {
    data = (segway_msgs__msg__ChassisCtrlSrcFb *)allocator.zero_allocate(size, sizeof(segway_msgs__msg__ChassisCtrlSrcFb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__msg__ChassisCtrlSrcFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__msg__ChassisCtrlSrcFb__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
segway_msgs__msg__ChassisCtrlSrcFb__Sequence__fini(segway_msgs__msg__ChassisCtrlSrcFb__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      segway_msgs__msg__ChassisCtrlSrcFb__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

segway_msgs__msg__ChassisCtrlSrcFb__Sequence *
segway_msgs__msg__ChassisCtrlSrcFb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__ChassisCtrlSrcFb__Sequence * array = (segway_msgs__msg__ChassisCtrlSrcFb__Sequence *)allocator.allocate(sizeof(segway_msgs__msg__ChassisCtrlSrcFb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__msg__ChassisCtrlSrcFb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__msg__ChassisCtrlSrcFb__Sequence__destroy(segway_msgs__msg__ChassisCtrlSrcFb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__msg__ChassisCtrlSrcFb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__msg__ChassisCtrlSrcFb__Sequence__are_equal(const segway_msgs__msg__ChassisCtrlSrcFb__Sequence * lhs, const segway_msgs__msg__ChassisCtrlSrcFb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__msg__ChassisCtrlSrcFb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__msg__ChassisCtrlSrcFb__Sequence__copy(
  const segway_msgs__msg__ChassisCtrlSrcFb__Sequence * input,
  segway_msgs__msg__ChassisCtrlSrcFb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__msg__ChassisCtrlSrcFb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__msg__ChassisCtrlSrcFb * data =
      (segway_msgs__msg__ChassisCtrlSrcFb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__msg__ChassisCtrlSrcFb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__msg__ChassisCtrlSrcFb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__msg__ChassisCtrlSrcFb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
