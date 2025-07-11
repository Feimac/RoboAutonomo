// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nav2_msgs:action/DockRobot.idl
// generated code does not contain a copyright notice
#include "nav2_msgs/action/detail/dock_robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `dock_id`
// Member `dock_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `dock_pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
nav2_msgs__action__DockRobot_Goal__init(nav2_msgs__action__DockRobot_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // use_dock_id
  msg->use_dock_id = true;
  // dock_id
  if (!rosidl_runtime_c__String__init(&msg->dock_id)) {
    nav2_msgs__action__DockRobot_Goal__fini(msg);
    return false;
  }
  // dock_pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->dock_pose)) {
    nav2_msgs__action__DockRobot_Goal__fini(msg);
    return false;
  }
  // dock_type
  if (!rosidl_runtime_c__String__init(&msg->dock_type)) {
    nav2_msgs__action__DockRobot_Goal__fini(msg);
    return false;
  }
  // max_staging_time
  msg->max_staging_time = 1000.0f;
  // navigate_to_staging_pose
  msg->navigate_to_staging_pose = true;
  return true;
}

void
nav2_msgs__action__DockRobot_Goal__fini(nav2_msgs__action__DockRobot_Goal * msg)
{
  if (!msg) {
    return;
  }
  // use_dock_id
  // dock_id
  rosidl_runtime_c__String__fini(&msg->dock_id);
  // dock_pose
  geometry_msgs__msg__PoseStamped__fini(&msg->dock_pose);
  // dock_type
  rosidl_runtime_c__String__fini(&msg->dock_type);
  // max_staging_time
  // navigate_to_staging_pose
}

bool
nav2_msgs__action__DockRobot_Goal__are_equal(const nav2_msgs__action__DockRobot_Goal * lhs, const nav2_msgs__action__DockRobot_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // use_dock_id
  if (lhs->use_dock_id != rhs->use_dock_id) {
    return false;
  }
  // dock_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dock_id), &(rhs->dock_id)))
  {
    return false;
  }
  // dock_pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->dock_pose), &(rhs->dock_pose)))
  {
    return false;
  }
  // dock_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->dock_type), &(rhs->dock_type)))
  {
    return false;
  }
  // max_staging_time
  if (lhs->max_staging_time != rhs->max_staging_time) {
    return false;
  }
  // navigate_to_staging_pose
  if (lhs->navigate_to_staging_pose != rhs->navigate_to_staging_pose) {
    return false;
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_Goal__copy(
  const nav2_msgs__action__DockRobot_Goal * input,
  nav2_msgs__action__DockRobot_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // use_dock_id
  output->use_dock_id = input->use_dock_id;
  // dock_id
  if (!rosidl_runtime_c__String__copy(
      &(input->dock_id), &(output->dock_id)))
  {
    return false;
  }
  // dock_pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->dock_pose), &(output->dock_pose)))
  {
    return false;
  }
  // dock_type
  if (!rosidl_runtime_c__String__copy(
      &(input->dock_type), &(output->dock_type)))
  {
    return false;
  }
  // max_staging_time
  output->max_staging_time = input->max_staging_time;
  // navigate_to_staging_pose
  output->navigate_to_staging_pose = input->navigate_to_staging_pose;
  return true;
}

nav2_msgs__action__DockRobot_Goal *
nav2_msgs__action__DockRobot_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_Goal * msg = (nav2_msgs__action__DockRobot_Goal *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__action__DockRobot_Goal));
  bool success = nav2_msgs__action__DockRobot_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__action__DockRobot_Goal__destroy(nav2_msgs__action__DockRobot_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__action__DockRobot_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__action__DockRobot_Goal__Sequence__init(nav2_msgs__action__DockRobot_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_Goal * data = NULL;

  if (size) {
    data = (nav2_msgs__action__DockRobot_Goal *)allocator.zero_allocate(size, sizeof(nav2_msgs__action__DockRobot_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__action__DockRobot_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__action__DockRobot_Goal__fini(&data[i - 1]);
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
nav2_msgs__action__DockRobot_Goal__Sequence__fini(nav2_msgs__action__DockRobot_Goal__Sequence * array)
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
      nav2_msgs__action__DockRobot_Goal__fini(&array->data[i]);
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

nav2_msgs__action__DockRobot_Goal__Sequence *
nav2_msgs__action__DockRobot_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_Goal__Sequence * array = (nav2_msgs__action__DockRobot_Goal__Sequence *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__action__DockRobot_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__action__DockRobot_Goal__Sequence__destroy(nav2_msgs__action__DockRobot_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__action__DockRobot_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__action__DockRobot_Goal__Sequence__are_equal(const nav2_msgs__action__DockRobot_Goal__Sequence * lhs, const nav2_msgs__action__DockRobot_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__action__DockRobot_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_Goal__Sequence__copy(
  const nav2_msgs__action__DockRobot_Goal__Sequence * input,
  nav2_msgs__action__DockRobot_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__action__DockRobot_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__action__DockRobot_Goal * data =
      (nav2_msgs__action__DockRobot_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__action__DockRobot_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__action__DockRobot_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__action__DockRobot_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
nav2_msgs__action__DockRobot_Result__init(nav2_msgs__action__DockRobot_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  msg->success = true;
  // error_code
  msg->error_code = 0;
  // num_retries
  msg->num_retries = 0;
  // error_msg
  if (!rosidl_runtime_c__String__init(&msg->error_msg)) {
    nav2_msgs__action__DockRobot_Result__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__action__DockRobot_Result__fini(nav2_msgs__action__DockRobot_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // error_code
  // num_retries
  // error_msg
  rosidl_runtime_c__String__fini(&msg->error_msg);
}

bool
nav2_msgs__action__DockRobot_Result__are_equal(const nav2_msgs__action__DockRobot_Result * lhs, const nav2_msgs__action__DockRobot_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // num_retries
  if (lhs->num_retries != rhs->num_retries) {
    return false;
  }
  // error_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_msg), &(rhs->error_msg)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_Result__copy(
  const nav2_msgs__action__DockRobot_Result * input,
  nav2_msgs__action__DockRobot_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // error_code
  output->error_code = input->error_code;
  // num_retries
  output->num_retries = input->num_retries;
  // error_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->error_msg), &(output->error_msg)))
  {
    return false;
  }
  return true;
}

nav2_msgs__action__DockRobot_Result *
nav2_msgs__action__DockRobot_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_Result * msg = (nav2_msgs__action__DockRobot_Result *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__action__DockRobot_Result));
  bool success = nav2_msgs__action__DockRobot_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__action__DockRobot_Result__destroy(nav2_msgs__action__DockRobot_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__action__DockRobot_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__action__DockRobot_Result__Sequence__init(nav2_msgs__action__DockRobot_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_Result * data = NULL;

  if (size) {
    data = (nav2_msgs__action__DockRobot_Result *)allocator.zero_allocate(size, sizeof(nav2_msgs__action__DockRobot_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__action__DockRobot_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__action__DockRobot_Result__fini(&data[i - 1]);
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
nav2_msgs__action__DockRobot_Result__Sequence__fini(nav2_msgs__action__DockRobot_Result__Sequence * array)
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
      nav2_msgs__action__DockRobot_Result__fini(&array->data[i]);
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

nav2_msgs__action__DockRobot_Result__Sequence *
nav2_msgs__action__DockRobot_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_Result__Sequence * array = (nav2_msgs__action__DockRobot_Result__Sequence *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__action__DockRobot_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__action__DockRobot_Result__Sequence__destroy(nav2_msgs__action__DockRobot_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__action__DockRobot_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__action__DockRobot_Result__Sequence__are_equal(const nav2_msgs__action__DockRobot_Result__Sequence * lhs, const nav2_msgs__action__DockRobot_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__action__DockRobot_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_Result__Sequence__copy(
  const nav2_msgs__action__DockRobot_Result__Sequence * input,
  nav2_msgs__action__DockRobot_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__action__DockRobot_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__action__DockRobot_Result * data =
      (nav2_msgs__action__DockRobot_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__action__DockRobot_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__action__DockRobot_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__action__DockRobot_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `docking_time`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
nav2_msgs__action__DockRobot_Feedback__init(nav2_msgs__action__DockRobot_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // state
  // docking_time
  if (!builtin_interfaces__msg__Duration__init(&msg->docking_time)) {
    nav2_msgs__action__DockRobot_Feedback__fini(msg);
    return false;
  }
  // num_retries
  msg->num_retries = 0;
  return true;
}

void
nav2_msgs__action__DockRobot_Feedback__fini(nav2_msgs__action__DockRobot_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // state
  // docking_time
  builtin_interfaces__msg__Duration__fini(&msg->docking_time);
  // num_retries
}

bool
nav2_msgs__action__DockRobot_Feedback__are_equal(const nav2_msgs__action__DockRobot_Feedback * lhs, const nav2_msgs__action__DockRobot_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // docking_time
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->docking_time), &(rhs->docking_time)))
  {
    return false;
  }
  // num_retries
  if (lhs->num_retries != rhs->num_retries) {
    return false;
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_Feedback__copy(
  const nav2_msgs__action__DockRobot_Feedback * input,
  nav2_msgs__action__DockRobot_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  // docking_time
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->docking_time), &(output->docking_time)))
  {
    return false;
  }
  // num_retries
  output->num_retries = input->num_retries;
  return true;
}

nav2_msgs__action__DockRobot_Feedback *
nav2_msgs__action__DockRobot_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_Feedback * msg = (nav2_msgs__action__DockRobot_Feedback *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__action__DockRobot_Feedback));
  bool success = nav2_msgs__action__DockRobot_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__action__DockRobot_Feedback__destroy(nav2_msgs__action__DockRobot_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__action__DockRobot_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__action__DockRobot_Feedback__Sequence__init(nav2_msgs__action__DockRobot_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_Feedback * data = NULL;

  if (size) {
    data = (nav2_msgs__action__DockRobot_Feedback *)allocator.zero_allocate(size, sizeof(nav2_msgs__action__DockRobot_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__action__DockRobot_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__action__DockRobot_Feedback__fini(&data[i - 1]);
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
nav2_msgs__action__DockRobot_Feedback__Sequence__fini(nav2_msgs__action__DockRobot_Feedback__Sequence * array)
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
      nav2_msgs__action__DockRobot_Feedback__fini(&array->data[i]);
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

nav2_msgs__action__DockRobot_Feedback__Sequence *
nav2_msgs__action__DockRobot_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_Feedback__Sequence * array = (nav2_msgs__action__DockRobot_Feedback__Sequence *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__action__DockRobot_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__action__DockRobot_Feedback__Sequence__destroy(nav2_msgs__action__DockRobot_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__action__DockRobot_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__action__DockRobot_Feedback__Sequence__are_equal(const nav2_msgs__action__DockRobot_Feedback__Sequence * lhs, const nav2_msgs__action__DockRobot_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__action__DockRobot_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_Feedback__Sequence__copy(
  const nav2_msgs__action__DockRobot_Feedback__Sequence * input,
  nav2_msgs__action__DockRobot_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__action__DockRobot_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__action__DockRobot_Feedback * data =
      (nav2_msgs__action__DockRobot_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__action__DockRobot_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__action__DockRobot_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__action__DockRobot_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "nav2_msgs/action/detail/dock_robot__functions.h"

bool
nav2_msgs__action__DockRobot_SendGoal_Request__init(nav2_msgs__action__DockRobot_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    nav2_msgs__action__DockRobot_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!nav2_msgs__action__DockRobot_Goal__init(&msg->goal)) {
    nav2_msgs__action__DockRobot_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__action__DockRobot_SendGoal_Request__fini(nav2_msgs__action__DockRobot_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  nav2_msgs__action__DockRobot_Goal__fini(&msg->goal);
}

bool
nav2_msgs__action__DockRobot_SendGoal_Request__are_equal(const nav2_msgs__action__DockRobot_SendGoal_Request * lhs, const nav2_msgs__action__DockRobot_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!nav2_msgs__action__DockRobot_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_SendGoal_Request__copy(
  const nav2_msgs__action__DockRobot_SendGoal_Request * input,
  nav2_msgs__action__DockRobot_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!nav2_msgs__action__DockRobot_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

nav2_msgs__action__DockRobot_SendGoal_Request *
nav2_msgs__action__DockRobot_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_SendGoal_Request * msg = (nav2_msgs__action__DockRobot_SendGoal_Request *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__action__DockRobot_SendGoal_Request));
  bool success = nav2_msgs__action__DockRobot_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__action__DockRobot_SendGoal_Request__destroy(nav2_msgs__action__DockRobot_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__action__DockRobot_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__action__DockRobot_SendGoal_Request__Sequence__init(nav2_msgs__action__DockRobot_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_SendGoal_Request * data = NULL;

  if (size) {
    data = (nav2_msgs__action__DockRobot_SendGoal_Request *)allocator.zero_allocate(size, sizeof(nav2_msgs__action__DockRobot_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__action__DockRobot_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__action__DockRobot_SendGoal_Request__fini(&data[i - 1]);
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
nav2_msgs__action__DockRobot_SendGoal_Request__Sequence__fini(nav2_msgs__action__DockRobot_SendGoal_Request__Sequence * array)
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
      nav2_msgs__action__DockRobot_SendGoal_Request__fini(&array->data[i]);
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

nav2_msgs__action__DockRobot_SendGoal_Request__Sequence *
nav2_msgs__action__DockRobot_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_SendGoal_Request__Sequence * array = (nav2_msgs__action__DockRobot_SendGoal_Request__Sequence *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__action__DockRobot_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__action__DockRobot_SendGoal_Request__Sequence__destroy(nav2_msgs__action__DockRobot_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__action__DockRobot_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__action__DockRobot_SendGoal_Request__Sequence__are_equal(const nav2_msgs__action__DockRobot_SendGoal_Request__Sequence * lhs, const nav2_msgs__action__DockRobot_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__action__DockRobot_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_SendGoal_Request__Sequence__copy(
  const nav2_msgs__action__DockRobot_SendGoal_Request__Sequence * input,
  nav2_msgs__action__DockRobot_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__action__DockRobot_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__action__DockRobot_SendGoal_Request * data =
      (nav2_msgs__action__DockRobot_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__action__DockRobot_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__action__DockRobot_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__action__DockRobot_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
nav2_msgs__action__DockRobot_SendGoal_Response__init(nav2_msgs__action__DockRobot_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    nav2_msgs__action__DockRobot_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__action__DockRobot_SendGoal_Response__fini(nav2_msgs__action__DockRobot_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
nav2_msgs__action__DockRobot_SendGoal_Response__are_equal(const nav2_msgs__action__DockRobot_SendGoal_Response * lhs, const nav2_msgs__action__DockRobot_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_SendGoal_Response__copy(
  const nav2_msgs__action__DockRobot_SendGoal_Response * input,
  nav2_msgs__action__DockRobot_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

nav2_msgs__action__DockRobot_SendGoal_Response *
nav2_msgs__action__DockRobot_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_SendGoal_Response * msg = (nav2_msgs__action__DockRobot_SendGoal_Response *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__action__DockRobot_SendGoal_Response));
  bool success = nav2_msgs__action__DockRobot_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__action__DockRobot_SendGoal_Response__destroy(nav2_msgs__action__DockRobot_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__action__DockRobot_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__action__DockRobot_SendGoal_Response__Sequence__init(nav2_msgs__action__DockRobot_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_SendGoal_Response * data = NULL;

  if (size) {
    data = (nav2_msgs__action__DockRobot_SendGoal_Response *)allocator.zero_allocate(size, sizeof(nav2_msgs__action__DockRobot_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__action__DockRobot_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__action__DockRobot_SendGoal_Response__fini(&data[i - 1]);
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
nav2_msgs__action__DockRobot_SendGoal_Response__Sequence__fini(nav2_msgs__action__DockRobot_SendGoal_Response__Sequence * array)
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
      nav2_msgs__action__DockRobot_SendGoal_Response__fini(&array->data[i]);
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

nav2_msgs__action__DockRobot_SendGoal_Response__Sequence *
nav2_msgs__action__DockRobot_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_SendGoal_Response__Sequence * array = (nav2_msgs__action__DockRobot_SendGoal_Response__Sequence *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__action__DockRobot_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__action__DockRobot_SendGoal_Response__Sequence__destroy(nav2_msgs__action__DockRobot_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__action__DockRobot_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__action__DockRobot_SendGoal_Response__Sequence__are_equal(const nav2_msgs__action__DockRobot_SendGoal_Response__Sequence * lhs, const nav2_msgs__action__DockRobot_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__action__DockRobot_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_SendGoal_Response__Sequence__copy(
  const nav2_msgs__action__DockRobot_SendGoal_Response__Sequence * input,
  nav2_msgs__action__DockRobot_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__action__DockRobot_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__action__DockRobot_SendGoal_Response * data =
      (nav2_msgs__action__DockRobot_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__action__DockRobot_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__action__DockRobot_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__action__DockRobot_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
nav2_msgs__action__DockRobot_GetResult_Request__init(nav2_msgs__action__DockRobot_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    nav2_msgs__action__DockRobot_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__action__DockRobot_GetResult_Request__fini(nav2_msgs__action__DockRobot_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
nav2_msgs__action__DockRobot_GetResult_Request__are_equal(const nav2_msgs__action__DockRobot_GetResult_Request * lhs, const nav2_msgs__action__DockRobot_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_GetResult_Request__copy(
  const nav2_msgs__action__DockRobot_GetResult_Request * input,
  nav2_msgs__action__DockRobot_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

nav2_msgs__action__DockRobot_GetResult_Request *
nav2_msgs__action__DockRobot_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_GetResult_Request * msg = (nav2_msgs__action__DockRobot_GetResult_Request *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__action__DockRobot_GetResult_Request));
  bool success = nav2_msgs__action__DockRobot_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__action__DockRobot_GetResult_Request__destroy(nav2_msgs__action__DockRobot_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__action__DockRobot_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__action__DockRobot_GetResult_Request__Sequence__init(nav2_msgs__action__DockRobot_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_GetResult_Request * data = NULL;

  if (size) {
    data = (nav2_msgs__action__DockRobot_GetResult_Request *)allocator.zero_allocate(size, sizeof(nav2_msgs__action__DockRobot_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__action__DockRobot_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__action__DockRobot_GetResult_Request__fini(&data[i - 1]);
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
nav2_msgs__action__DockRobot_GetResult_Request__Sequence__fini(nav2_msgs__action__DockRobot_GetResult_Request__Sequence * array)
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
      nav2_msgs__action__DockRobot_GetResult_Request__fini(&array->data[i]);
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

nav2_msgs__action__DockRobot_GetResult_Request__Sequence *
nav2_msgs__action__DockRobot_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_GetResult_Request__Sequence * array = (nav2_msgs__action__DockRobot_GetResult_Request__Sequence *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__action__DockRobot_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__action__DockRobot_GetResult_Request__Sequence__destroy(nav2_msgs__action__DockRobot_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__action__DockRobot_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__action__DockRobot_GetResult_Request__Sequence__are_equal(const nav2_msgs__action__DockRobot_GetResult_Request__Sequence * lhs, const nav2_msgs__action__DockRobot_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__action__DockRobot_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_GetResult_Request__Sequence__copy(
  const nav2_msgs__action__DockRobot_GetResult_Request__Sequence * input,
  nav2_msgs__action__DockRobot_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__action__DockRobot_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__action__DockRobot_GetResult_Request * data =
      (nav2_msgs__action__DockRobot_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__action__DockRobot_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__action__DockRobot_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__action__DockRobot_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "nav2_msgs/action/detail/dock_robot__functions.h"

bool
nav2_msgs__action__DockRobot_GetResult_Response__init(nav2_msgs__action__DockRobot_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!nav2_msgs__action__DockRobot_Result__init(&msg->result)) {
    nav2_msgs__action__DockRobot_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__action__DockRobot_GetResult_Response__fini(nav2_msgs__action__DockRobot_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  nav2_msgs__action__DockRobot_Result__fini(&msg->result);
}

bool
nav2_msgs__action__DockRobot_GetResult_Response__are_equal(const nav2_msgs__action__DockRobot_GetResult_Response * lhs, const nav2_msgs__action__DockRobot_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!nav2_msgs__action__DockRobot_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_GetResult_Response__copy(
  const nav2_msgs__action__DockRobot_GetResult_Response * input,
  nav2_msgs__action__DockRobot_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!nav2_msgs__action__DockRobot_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

nav2_msgs__action__DockRobot_GetResult_Response *
nav2_msgs__action__DockRobot_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_GetResult_Response * msg = (nav2_msgs__action__DockRobot_GetResult_Response *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__action__DockRobot_GetResult_Response));
  bool success = nav2_msgs__action__DockRobot_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__action__DockRobot_GetResult_Response__destroy(nav2_msgs__action__DockRobot_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__action__DockRobot_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__action__DockRobot_GetResult_Response__Sequence__init(nav2_msgs__action__DockRobot_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_GetResult_Response * data = NULL;

  if (size) {
    data = (nav2_msgs__action__DockRobot_GetResult_Response *)allocator.zero_allocate(size, sizeof(nav2_msgs__action__DockRobot_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__action__DockRobot_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__action__DockRobot_GetResult_Response__fini(&data[i - 1]);
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
nav2_msgs__action__DockRobot_GetResult_Response__Sequence__fini(nav2_msgs__action__DockRobot_GetResult_Response__Sequence * array)
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
      nav2_msgs__action__DockRobot_GetResult_Response__fini(&array->data[i]);
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

nav2_msgs__action__DockRobot_GetResult_Response__Sequence *
nav2_msgs__action__DockRobot_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_GetResult_Response__Sequence * array = (nav2_msgs__action__DockRobot_GetResult_Response__Sequence *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__action__DockRobot_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__action__DockRobot_GetResult_Response__Sequence__destroy(nav2_msgs__action__DockRobot_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__action__DockRobot_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__action__DockRobot_GetResult_Response__Sequence__are_equal(const nav2_msgs__action__DockRobot_GetResult_Response__Sequence * lhs, const nav2_msgs__action__DockRobot_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__action__DockRobot_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_GetResult_Response__Sequence__copy(
  const nav2_msgs__action__DockRobot_GetResult_Response__Sequence * input,
  nav2_msgs__action__DockRobot_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__action__DockRobot_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__action__DockRobot_GetResult_Response * data =
      (nav2_msgs__action__DockRobot_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__action__DockRobot_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__action__DockRobot_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__action__DockRobot_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "nav2_msgs/action/detail/dock_robot__functions.h"

bool
nav2_msgs__action__DockRobot_FeedbackMessage__init(nav2_msgs__action__DockRobot_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    nav2_msgs__action__DockRobot_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!nav2_msgs__action__DockRobot_Feedback__init(&msg->feedback)) {
    nav2_msgs__action__DockRobot_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
nav2_msgs__action__DockRobot_FeedbackMessage__fini(nav2_msgs__action__DockRobot_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  nav2_msgs__action__DockRobot_Feedback__fini(&msg->feedback);
}

bool
nav2_msgs__action__DockRobot_FeedbackMessage__are_equal(const nav2_msgs__action__DockRobot_FeedbackMessage * lhs, const nav2_msgs__action__DockRobot_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!nav2_msgs__action__DockRobot_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_FeedbackMessage__copy(
  const nav2_msgs__action__DockRobot_FeedbackMessage * input,
  nav2_msgs__action__DockRobot_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!nav2_msgs__action__DockRobot_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

nav2_msgs__action__DockRobot_FeedbackMessage *
nav2_msgs__action__DockRobot_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_FeedbackMessage * msg = (nav2_msgs__action__DockRobot_FeedbackMessage *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nav2_msgs__action__DockRobot_FeedbackMessage));
  bool success = nav2_msgs__action__DockRobot_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nav2_msgs__action__DockRobot_FeedbackMessage__destroy(nav2_msgs__action__DockRobot_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nav2_msgs__action__DockRobot_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nav2_msgs__action__DockRobot_FeedbackMessage__Sequence__init(nav2_msgs__action__DockRobot_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_FeedbackMessage * data = NULL;

  if (size) {
    data = (nav2_msgs__action__DockRobot_FeedbackMessage *)allocator.zero_allocate(size, sizeof(nav2_msgs__action__DockRobot_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nav2_msgs__action__DockRobot_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nav2_msgs__action__DockRobot_FeedbackMessage__fini(&data[i - 1]);
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
nav2_msgs__action__DockRobot_FeedbackMessage__Sequence__fini(nav2_msgs__action__DockRobot_FeedbackMessage__Sequence * array)
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
      nav2_msgs__action__DockRobot_FeedbackMessage__fini(&array->data[i]);
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

nav2_msgs__action__DockRobot_FeedbackMessage__Sequence *
nav2_msgs__action__DockRobot_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nav2_msgs__action__DockRobot_FeedbackMessage__Sequence * array = (nav2_msgs__action__DockRobot_FeedbackMessage__Sequence *)allocator.allocate(sizeof(nav2_msgs__action__DockRobot_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nav2_msgs__action__DockRobot_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nav2_msgs__action__DockRobot_FeedbackMessage__Sequence__destroy(nav2_msgs__action__DockRobot_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nav2_msgs__action__DockRobot_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nav2_msgs__action__DockRobot_FeedbackMessage__Sequence__are_equal(const nav2_msgs__action__DockRobot_FeedbackMessage__Sequence * lhs, const nav2_msgs__action__DockRobot_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nav2_msgs__action__DockRobot_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nav2_msgs__action__DockRobot_FeedbackMessage__Sequence__copy(
  const nav2_msgs__action__DockRobot_FeedbackMessage__Sequence * input,
  nav2_msgs__action__DockRobot_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nav2_msgs__action__DockRobot_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nav2_msgs__action__DockRobot_FeedbackMessage * data =
      (nav2_msgs__action__DockRobot_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nav2_msgs__action__DockRobot_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nav2_msgs__action__DockRobot_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nav2_msgs__action__DockRobot_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
