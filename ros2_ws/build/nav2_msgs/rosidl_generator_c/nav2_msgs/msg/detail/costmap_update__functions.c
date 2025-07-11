// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:msg/CostmapUpdate.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/msg/detail/costmap_update__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
nav2_msgs__msg__CostmapUpdate__init(nav2_msgs__msg__CostmapUpdate * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    nav2_msgs__msg__CostmapUpdate__fini(msg);
    return false;
  }
  // x
  // y
  // size_x
  // size_y
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    nav2_msgs__msg__CostmapUpdate__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__msg__CostmapUpdate__fini(nav2_msgs__msg__CostmapUpdate * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // x
  // y
  // size_x
  // size_y
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
nav2_msgs__msg__CostmapUpdate__are_equal(const nav2_msgs__msg__CostmapUpdate * lhs, const nav2_msgs__msg__CostmapUpdate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // size_x
  if (lhs->size_x != rhs->size_x) {
    return false;
  }
  // size_y
  if (lhs->size_y != rhs->size_y) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__msg__CostmapUpdate__copy(
  const nav2_msgs__msg__CostmapUpdate * input,
  nav2_msgs__msg__CostmapUpdate * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // size_x
  output->size_x = input->size_x;
  // size_y
  output->size_y = input->size_y;
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

nav2_msgs__msg__CostmapUpdate *
nav2_msgs__msg__CostmapUpdate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CostmapUpdate * msg = (nav2_msgs__msg__CostmapUpdate *)allocator.allocate(sizeof(nav2_msgs__msg__CostmapUpdate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__msg__CostmapUpdate));
  bool success = nav2_msgs__msg__CostmapUpdate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__msg__CostmapUpdate__destroy(nav2_msgs__msg__CostmapUpdate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__msg__CostmapUpdate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__msg__CostmapUpdate__Sequence__init(nav2_msgs__msg__CostmapUpdate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CostmapUpdate * data = NULL;

  if (size) {
    data = (nav2_msgs__msg__CostmapUpdate *)allocator.zero_allocate(size, sizeof(nav2_msgs__msg__CostmapUpdate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__msg__CostmapUpdate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__msg__CostmapUpdate__fini(&data[i - 1]);
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
nav2_msgs__msg__CostmapUpdate__Sequence__fini(nav2_msgs__msg__CostmapUpdate__Sequence * array)
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
      nav2_msgs__msg__CostmapUpdate__fini(&array->data[i]);
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

nav2_msgs__msg__CostmapUpdate__Sequence *
nav2_msgs__msg__CostmapUpdate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__msg__CostmapUpdate__Sequence * array = (nav2_msgs__msg__CostmapUpdate__Sequence *)allocator.allocate(sizeof(nav2_msgs__msg__CostmapUpdate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__msg__CostmapUpdate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__msg__CostmapUpdate__Sequence__destroy(nav2_msgs__msg__CostmapUpdate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__msg__CostmapUpdate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__msg__CostmapUpdate__Sequence__are_equal(const nav2_msgs__msg__CostmapUpdate__Sequence * lhs, const nav2_msgs__msg__CostmapUpdate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__msg__CostmapUpdate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__msg__CostmapUpdate__Sequence__copy(
  const nav2_msgs__msg__CostmapUpdate__Sequence * input,
  nav2_msgs__msg__CostmapUpdate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__msg__CostmapUpdate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__msg__CostmapUpdate * data =
      (nav2_msgs__msg__CostmapUpdate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__msg__CostmapUpdate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__msg__CostmapUpdate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__msg__CostmapUpdate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
