// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from segway_msgs:msg/ChassisMileageMeterFb.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/chassis_mileage_meter_fb__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
segway_msgs__msg__ChassisMileageMeterFb__init(segway_msgs__msg__ChassisMileageMeterFb * msg)
{
  if (!msg) {
    return false;
  }
  // vehicle_meters
  return true;
}

void
segway_msgs__msg__ChassisMileageMeterFb__fini(segway_msgs__msg__ChassisMileageMeterFb * msg)
{
  if (!msg) {
    return;
  }
  // vehicle_meters
}

bool
segway_msgs__msg__ChassisMileageMeterFb__are_equal(const segway_msgs__msg__ChassisMileageMeterFb * lhs, const segway_msgs__msg__ChassisMileageMeterFb * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vehicle_meters
  if (lhs->vehicle_meters != rhs->vehicle_meters) {
    return false;
  }
  return true;
}

bool
segway_msgs__msg__ChassisMileageMeterFb__copy(
  const segway_msgs__msg__ChassisMileageMeterFb * input,
  segway_msgs__msg__ChassisMileageMeterFb * output)
{
  if (!input || !output) {
    return false;
  }
  // vehicle_meters
  output->vehicle_meters = input->vehicle_meters;
  return true;
}

segway_msgs__msg__ChassisMileageMeterFb *
segway_msgs__msg__ChassisMileageMeterFb__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__ChassisMileageMeterFb * msg = (segway_msgs__msg__ChassisMileageMeterFb *)allocator.allocate(sizeof(segway_msgs__msg__ChassisMileageMeterFb), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(segway_msgs__msg__ChassisMileageMeterFb));
  bool success = segway_msgs__msg__ChassisMileageMeterFb__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
segway_msgs__msg__ChassisMileageMeterFb__destroy(segway_msgs__msg__ChassisMileageMeterFb * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    segway_msgs__msg__ChassisMileageMeterFb__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
segway_msgs__msg__ChassisMileageMeterFb__Sequence__init(segway_msgs__msg__ChassisMileageMeterFb__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__ChassisMileageMeterFb * data = NULL;

  if (size) {
    data = (segway_msgs__msg__ChassisMileageMeterFb *)allocator.zero_allocate(size, sizeof(segway_msgs__msg__ChassisMileageMeterFb), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = segway_msgs__msg__ChassisMileageMeterFb__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        segway_msgs__msg__ChassisMileageMeterFb__fini(&data[i - 1]);
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
segway_msgs__msg__ChassisMileageMeterFb__Sequence__fini(segway_msgs__msg__ChassisMileageMeterFb__Sequence * array)
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
      segway_msgs__msg__ChassisMileageMeterFb__fini(&array->data[i]);
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

segway_msgs__msg__ChassisMileageMeterFb__Sequence *
segway_msgs__msg__ChassisMileageMeterFb__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  segway_msgs__msg__ChassisMileageMeterFb__Sequence * array = (segway_msgs__msg__ChassisMileageMeterFb__Sequence *)allocator.allocate(sizeof(segway_msgs__msg__ChassisMileageMeterFb__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = segway_msgs__msg__ChassisMileageMeterFb__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
segway_msgs__msg__ChassisMileageMeterFb__Sequence__destroy(segway_msgs__msg__ChassisMileageMeterFb__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    segway_msgs__msg__ChassisMileageMeterFb__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
segway_msgs__msg__ChassisMileageMeterFb__Sequence__are_equal(const segway_msgs__msg__ChassisMileageMeterFb__Sequence * lhs, const segway_msgs__msg__ChassisMileageMeterFb__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!segway_msgs__msg__ChassisMileageMeterFb__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
segway_msgs__msg__ChassisMileageMeterFb__Sequence__copy(
  const segway_msgs__msg__ChassisMileageMeterFb__Sequence * input,
  segway_msgs__msg__ChassisMileageMeterFb__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(segway_msgs__msg__ChassisMileageMeterFb);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    segway_msgs__msg__ChassisMileageMeterFb * data =
      (segway_msgs__msg__ChassisMileageMeterFb *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!segway_msgs__msg__ChassisMileageMeterFb__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          segway_msgs__msg__ChassisMileageMeterFb__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!segway_msgs__msg__ChassisMileageMeterFb__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
