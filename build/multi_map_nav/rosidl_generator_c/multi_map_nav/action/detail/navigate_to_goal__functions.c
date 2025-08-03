// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from multi_map_nav:action/NavigateToGoal.idl
// generated code does not contain a copyright notice
#include "multi_map_nav/action/detail/navigate_to_goal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_map`
#include "rosidl_runtime_c/string_functions.h"

bool
multi_map_nav__action__NavigateToGoal_Goal__init(multi_map_nav__action__NavigateToGoal_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_x
  // target_y
  // target_map
  if (!rosidl_runtime_c__String__init(&msg->target_map)) {
    multi_map_nav__action__NavigateToGoal_Goal__fini(msg);
    return false;
  }
  return true;
}

void
multi_map_nav__action__NavigateToGoal_Goal__fini(multi_map_nav__action__NavigateToGoal_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_x
  // target_y
  // target_map
  rosidl_runtime_c__String__fini(&msg->target_map);
}

bool
multi_map_nav__action__NavigateToGoal_Goal__are_equal(const multi_map_nav__action__NavigateToGoal_Goal * lhs, const multi_map_nav__action__NavigateToGoal_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_x
  if (lhs->target_x != rhs->target_x) {
    return false;
  }
  // target_y
  if (lhs->target_y != rhs->target_y) {
    return false;
  }
  // target_map
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->target_map), &(rhs->target_map)))
  {
    return false;
  }
  return true;
}

bool
multi_map_nav__action__NavigateToGoal_Goal__copy(
  const multi_map_nav__action__NavigateToGoal_Goal * input,
  multi_map_nav__action__NavigateToGoal_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_x
  output->target_x = input->target_x;
  // target_y
  output->target_y = input->target_y;
  // target_map
  if (!rosidl_runtime_c__String__copy(
      &(input->target_map), &(output->target_map)))
  {
    return false;
  }
  return true;
}

multi_map_nav__action__NavigateToGoal_Goal *
multi_map_nav__action__NavigateToGoal_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_Goal * msg = (multi_map_nav__action__NavigateToGoal_Goal *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_map_nav__action__NavigateToGoal_Goal));
  bool success = multi_map_nav__action__NavigateToGoal_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multi_map_nav__action__NavigateToGoal_Goal__destroy(multi_map_nav__action__NavigateToGoal_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multi_map_nav__action__NavigateToGoal_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multi_map_nav__action__NavigateToGoal_Goal__Sequence__init(multi_map_nav__action__NavigateToGoal_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_Goal * data = NULL;

  if (size) {
    data = (multi_map_nav__action__NavigateToGoal_Goal *)allocator.zero_allocate(size, sizeof(multi_map_nav__action__NavigateToGoal_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_map_nav__action__NavigateToGoal_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_map_nav__action__NavigateToGoal_Goal__fini(&data[i - 1]);
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
multi_map_nav__action__NavigateToGoal_Goal__Sequence__fini(multi_map_nav__action__NavigateToGoal_Goal__Sequence * array)
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
      multi_map_nav__action__NavigateToGoal_Goal__fini(&array->data[i]);
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

multi_map_nav__action__NavigateToGoal_Goal__Sequence *
multi_map_nav__action__NavigateToGoal_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_Goal__Sequence * array = (multi_map_nav__action__NavigateToGoal_Goal__Sequence *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multi_map_nav__action__NavigateToGoal_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multi_map_nav__action__NavigateToGoal_Goal__Sequence__destroy(multi_map_nav__action__NavigateToGoal_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multi_map_nav__action__NavigateToGoal_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multi_map_nav__action__NavigateToGoal_Goal__Sequence__are_equal(const multi_map_nav__action__NavigateToGoal_Goal__Sequence * lhs, const multi_map_nav__action__NavigateToGoal_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_map_nav__action__NavigateToGoal_Goal__Sequence__copy(
  const multi_map_nav__action__NavigateToGoal_Goal__Sequence * input,
  multi_map_nav__action__NavigateToGoal_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_map_nav__action__NavigateToGoal_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multi_map_nav__action__NavigateToGoal_Goal * data =
      (multi_map_nav__action__NavigateToGoal_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_map_nav__action__NavigateToGoal_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multi_map_nav__action__NavigateToGoal_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
multi_map_nav__action__NavigateToGoal_Result__init(multi_map_nav__action__NavigateToGoal_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    multi_map_nav__action__NavigateToGoal_Result__fini(msg);
    return false;
  }
  return true;
}

void
multi_map_nav__action__NavigateToGoal_Result__fini(multi_map_nav__action__NavigateToGoal_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
multi_map_nav__action__NavigateToGoal_Result__are_equal(const multi_map_nav__action__NavigateToGoal_Result * lhs, const multi_map_nav__action__NavigateToGoal_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
multi_map_nav__action__NavigateToGoal_Result__copy(
  const multi_map_nav__action__NavigateToGoal_Result * input,
  multi_map_nav__action__NavigateToGoal_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

multi_map_nav__action__NavigateToGoal_Result *
multi_map_nav__action__NavigateToGoal_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_Result * msg = (multi_map_nav__action__NavigateToGoal_Result *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_map_nav__action__NavigateToGoal_Result));
  bool success = multi_map_nav__action__NavigateToGoal_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multi_map_nav__action__NavigateToGoal_Result__destroy(multi_map_nav__action__NavigateToGoal_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multi_map_nav__action__NavigateToGoal_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multi_map_nav__action__NavigateToGoal_Result__Sequence__init(multi_map_nav__action__NavigateToGoal_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_Result * data = NULL;

  if (size) {
    data = (multi_map_nav__action__NavigateToGoal_Result *)allocator.zero_allocate(size, sizeof(multi_map_nav__action__NavigateToGoal_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_map_nav__action__NavigateToGoal_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_map_nav__action__NavigateToGoal_Result__fini(&data[i - 1]);
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
multi_map_nav__action__NavigateToGoal_Result__Sequence__fini(multi_map_nav__action__NavigateToGoal_Result__Sequence * array)
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
      multi_map_nav__action__NavigateToGoal_Result__fini(&array->data[i]);
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

multi_map_nav__action__NavigateToGoal_Result__Sequence *
multi_map_nav__action__NavigateToGoal_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_Result__Sequence * array = (multi_map_nav__action__NavigateToGoal_Result__Sequence *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multi_map_nav__action__NavigateToGoal_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multi_map_nav__action__NavigateToGoal_Result__Sequence__destroy(multi_map_nav__action__NavigateToGoal_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multi_map_nav__action__NavigateToGoal_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multi_map_nav__action__NavigateToGoal_Result__Sequence__are_equal(const multi_map_nav__action__NavigateToGoal_Result__Sequence * lhs, const multi_map_nav__action__NavigateToGoal_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_map_nav__action__NavigateToGoal_Result__Sequence__copy(
  const multi_map_nav__action__NavigateToGoal_Result__Sequence * input,
  multi_map_nav__action__NavigateToGoal_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_map_nav__action__NavigateToGoal_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multi_map_nav__action__NavigateToGoal_Result * data =
      (multi_map_nav__action__NavigateToGoal_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_map_nav__action__NavigateToGoal_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multi_map_nav__action__NavigateToGoal_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback_msg`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
multi_map_nav__action__NavigateToGoal_Feedback__init(multi_map_nav__action__NavigateToGoal_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback_msg
  if (!rosidl_runtime_c__String__init(&msg->feedback_msg)) {
    multi_map_nav__action__NavigateToGoal_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
multi_map_nav__action__NavigateToGoal_Feedback__fini(multi_map_nav__action__NavigateToGoal_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback_msg
  rosidl_runtime_c__String__fini(&msg->feedback_msg);
}

bool
multi_map_nav__action__NavigateToGoal_Feedback__are_equal(const multi_map_nav__action__NavigateToGoal_Feedback * lhs, const multi_map_nav__action__NavigateToGoal_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback_msg), &(rhs->feedback_msg)))
  {
    return false;
  }
  return true;
}

bool
multi_map_nav__action__NavigateToGoal_Feedback__copy(
  const multi_map_nav__action__NavigateToGoal_Feedback * input,
  multi_map_nav__action__NavigateToGoal_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback_msg), &(output->feedback_msg)))
  {
    return false;
  }
  return true;
}

multi_map_nav__action__NavigateToGoal_Feedback *
multi_map_nav__action__NavigateToGoal_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_Feedback * msg = (multi_map_nav__action__NavigateToGoal_Feedback *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_map_nav__action__NavigateToGoal_Feedback));
  bool success = multi_map_nav__action__NavigateToGoal_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multi_map_nav__action__NavigateToGoal_Feedback__destroy(multi_map_nav__action__NavigateToGoal_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multi_map_nav__action__NavigateToGoal_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multi_map_nav__action__NavigateToGoal_Feedback__Sequence__init(multi_map_nav__action__NavigateToGoal_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_Feedback * data = NULL;

  if (size) {
    data = (multi_map_nav__action__NavigateToGoal_Feedback *)allocator.zero_allocate(size, sizeof(multi_map_nav__action__NavigateToGoal_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_map_nav__action__NavigateToGoal_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_map_nav__action__NavigateToGoal_Feedback__fini(&data[i - 1]);
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
multi_map_nav__action__NavigateToGoal_Feedback__Sequence__fini(multi_map_nav__action__NavigateToGoal_Feedback__Sequence * array)
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
      multi_map_nav__action__NavigateToGoal_Feedback__fini(&array->data[i]);
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

multi_map_nav__action__NavigateToGoal_Feedback__Sequence *
multi_map_nav__action__NavigateToGoal_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_Feedback__Sequence * array = (multi_map_nav__action__NavigateToGoal_Feedback__Sequence *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multi_map_nav__action__NavigateToGoal_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multi_map_nav__action__NavigateToGoal_Feedback__Sequence__destroy(multi_map_nav__action__NavigateToGoal_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multi_map_nav__action__NavigateToGoal_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multi_map_nav__action__NavigateToGoal_Feedback__Sequence__are_equal(const multi_map_nav__action__NavigateToGoal_Feedback__Sequence * lhs, const multi_map_nav__action__NavigateToGoal_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_map_nav__action__NavigateToGoal_Feedback__Sequence__copy(
  const multi_map_nav__action__NavigateToGoal_Feedback__Sequence * input,
  multi_map_nav__action__NavigateToGoal_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_map_nav__action__NavigateToGoal_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multi_map_nav__action__NavigateToGoal_Feedback * data =
      (multi_map_nav__action__NavigateToGoal_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_map_nav__action__NavigateToGoal_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multi_map_nav__action__NavigateToGoal_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_Feedback__copy(
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
// #include "multi_map_nav/action/detail/navigate_to_goal__functions.h"

bool
multi_map_nav__action__NavigateToGoal_SendGoal_Request__init(multi_map_nav__action__NavigateToGoal_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    multi_map_nav__action__NavigateToGoal_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!multi_map_nav__action__NavigateToGoal_Goal__init(&msg->goal)) {
    multi_map_nav__action__NavigateToGoal_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
multi_map_nav__action__NavigateToGoal_SendGoal_Request__fini(multi_map_nav__action__NavigateToGoal_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  multi_map_nav__action__NavigateToGoal_Goal__fini(&msg->goal);
}

bool
multi_map_nav__action__NavigateToGoal_SendGoal_Request__are_equal(const multi_map_nav__action__NavigateToGoal_SendGoal_Request * lhs, const multi_map_nav__action__NavigateToGoal_SendGoal_Request * rhs)
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
  if (!multi_map_nav__action__NavigateToGoal_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
multi_map_nav__action__NavigateToGoal_SendGoal_Request__copy(
  const multi_map_nav__action__NavigateToGoal_SendGoal_Request * input,
  multi_map_nav__action__NavigateToGoal_SendGoal_Request * output)
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
  if (!multi_map_nav__action__NavigateToGoal_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

multi_map_nav__action__NavigateToGoal_SendGoal_Request *
multi_map_nav__action__NavigateToGoal_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_SendGoal_Request * msg = (multi_map_nav__action__NavigateToGoal_SendGoal_Request *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_map_nav__action__NavigateToGoal_SendGoal_Request));
  bool success = multi_map_nav__action__NavigateToGoal_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multi_map_nav__action__NavigateToGoal_SendGoal_Request__destroy(multi_map_nav__action__NavigateToGoal_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multi_map_nav__action__NavigateToGoal_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence__init(multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_SendGoal_Request * data = NULL;

  if (size) {
    data = (multi_map_nav__action__NavigateToGoal_SendGoal_Request *)allocator.zero_allocate(size, sizeof(multi_map_nav__action__NavigateToGoal_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_map_nav__action__NavigateToGoal_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_map_nav__action__NavigateToGoal_SendGoal_Request__fini(&data[i - 1]);
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
multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence__fini(multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence * array)
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
      multi_map_nav__action__NavigateToGoal_SendGoal_Request__fini(&array->data[i]);
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

multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence *
multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence * array = (multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence__destroy(multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence__are_equal(const multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence * lhs, const multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence__copy(
  const multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence * input,
  multi_map_nav__action__NavigateToGoal_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_map_nav__action__NavigateToGoal_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multi_map_nav__action__NavigateToGoal_SendGoal_Request * data =
      (multi_map_nav__action__NavigateToGoal_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_map_nav__action__NavigateToGoal_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multi_map_nav__action__NavigateToGoal_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_SendGoal_Request__copy(
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
multi_map_nav__action__NavigateToGoal_SendGoal_Response__init(multi_map_nav__action__NavigateToGoal_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    multi_map_nav__action__NavigateToGoal_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
multi_map_nav__action__NavigateToGoal_SendGoal_Response__fini(multi_map_nav__action__NavigateToGoal_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
multi_map_nav__action__NavigateToGoal_SendGoal_Response__are_equal(const multi_map_nav__action__NavigateToGoal_SendGoal_Response * lhs, const multi_map_nav__action__NavigateToGoal_SendGoal_Response * rhs)
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
multi_map_nav__action__NavigateToGoal_SendGoal_Response__copy(
  const multi_map_nav__action__NavigateToGoal_SendGoal_Response * input,
  multi_map_nav__action__NavigateToGoal_SendGoal_Response * output)
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

multi_map_nav__action__NavigateToGoal_SendGoal_Response *
multi_map_nav__action__NavigateToGoal_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_SendGoal_Response * msg = (multi_map_nav__action__NavigateToGoal_SendGoal_Response *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_map_nav__action__NavigateToGoal_SendGoal_Response));
  bool success = multi_map_nav__action__NavigateToGoal_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multi_map_nav__action__NavigateToGoal_SendGoal_Response__destroy(multi_map_nav__action__NavigateToGoal_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multi_map_nav__action__NavigateToGoal_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence__init(multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_SendGoal_Response * data = NULL;

  if (size) {
    data = (multi_map_nav__action__NavigateToGoal_SendGoal_Response *)allocator.zero_allocate(size, sizeof(multi_map_nav__action__NavigateToGoal_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_map_nav__action__NavigateToGoal_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_map_nav__action__NavigateToGoal_SendGoal_Response__fini(&data[i - 1]);
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
multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence__fini(multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence * array)
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
      multi_map_nav__action__NavigateToGoal_SendGoal_Response__fini(&array->data[i]);
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

multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence *
multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence * array = (multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence__destroy(multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence__are_equal(const multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence * lhs, const multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence__copy(
  const multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence * input,
  multi_map_nav__action__NavigateToGoal_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_map_nav__action__NavigateToGoal_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multi_map_nav__action__NavigateToGoal_SendGoal_Response * data =
      (multi_map_nav__action__NavigateToGoal_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_map_nav__action__NavigateToGoal_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multi_map_nav__action__NavigateToGoal_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_SendGoal_Response__copy(
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
multi_map_nav__action__NavigateToGoal_GetResult_Request__init(multi_map_nav__action__NavigateToGoal_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    multi_map_nav__action__NavigateToGoal_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
multi_map_nav__action__NavigateToGoal_GetResult_Request__fini(multi_map_nav__action__NavigateToGoal_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
multi_map_nav__action__NavigateToGoal_GetResult_Request__are_equal(const multi_map_nav__action__NavigateToGoal_GetResult_Request * lhs, const multi_map_nav__action__NavigateToGoal_GetResult_Request * rhs)
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
multi_map_nav__action__NavigateToGoal_GetResult_Request__copy(
  const multi_map_nav__action__NavigateToGoal_GetResult_Request * input,
  multi_map_nav__action__NavigateToGoal_GetResult_Request * output)
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

multi_map_nav__action__NavigateToGoal_GetResult_Request *
multi_map_nav__action__NavigateToGoal_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_GetResult_Request * msg = (multi_map_nav__action__NavigateToGoal_GetResult_Request *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_map_nav__action__NavigateToGoal_GetResult_Request));
  bool success = multi_map_nav__action__NavigateToGoal_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multi_map_nav__action__NavigateToGoal_GetResult_Request__destroy(multi_map_nav__action__NavigateToGoal_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multi_map_nav__action__NavigateToGoal_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence__init(multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_GetResult_Request * data = NULL;

  if (size) {
    data = (multi_map_nav__action__NavigateToGoal_GetResult_Request *)allocator.zero_allocate(size, sizeof(multi_map_nav__action__NavigateToGoal_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_map_nav__action__NavigateToGoal_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_map_nav__action__NavigateToGoal_GetResult_Request__fini(&data[i - 1]);
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
multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence__fini(multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence * array)
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
      multi_map_nav__action__NavigateToGoal_GetResult_Request__fini(&array->data[i]);
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

multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence *
multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence * array = (multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence__destroy(multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence__are_equal(const multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence * lhs, const multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence__copy(
  const multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence * input,
  multi_map_nav__action__NavigateToGoal_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_map_nav__action__NavigateToGoal_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multi_map_nav__action__NavigateToGoal_GetResult_Request * data =
      (multi_map_nav__action__NavigateToGoal_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_map_nav__action__NavigateToGoal_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multi_map_nav__action__NavigateToGoal_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_GetResult_Request__copy(
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
// #include "multi_map_nav/action/detail/navigate_to_goal__functions.h"

bool
multi_map_nav__action__NavigateToGoal_GetResult_Response__init(multi_map_nav__action__NavigateToGoal_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!multi_map_nav__action__NavigateToGoal_Result__init(&msg->result)) {
    multi_map_nav__action__NavigateToGoal_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
multi_map_nav__action__NavigateToGoal_GetResult_Response__fini(multi_map_nav__action__NavigateToGoal_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  multi_map_nav__action__NavigateToGoal_Result__fini(&msg->result);
}

bool
multi_map_nav__action__NavigateToGoal_GetResult_Response__are_equal(const multi_map_nav__action__NavigateToGoal_GetResult_Response * lhs, const multi_map_nav__action__NavigateToGoal_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!multi_map_nav__action__NavigateToGoal_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
multi_map_nav__action__NavigateToGoal_GetResult_Response__copy(
  const multi_map_nav__action__NavigateToGoal_GetResult_Response * input,
  multi_map_nav__action__NavigateToGoal_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!multi_map_nav__action__NavigateToGoal_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

multi_map_nav__action__NavigateToGoal_GetResult_Response *
multi_map_nav__action__NavigateToGoal_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_GetResult_Response * msg = (multi_map_nav__action__NavigateToGoal_GetResult_Response *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_map_nav__action__NavigateToGoal_GetResult_Response));
  bool success = multi_map_nav__action__NavigateToGoal_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multi_map_nav__action__NavigateToGoal_GetResult_Response__destroy(multi_map_nav__action__NavigateToGoal_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multi_map_nav__action__NavigateToGoal_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence__init(multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_GetResult_Response * data = NULL;

  if (size) {
    data = (multi_map_nav__action__NavigateToGoal_GetResult_Response *)allocator.zero_allocate(size, sizeof(multi_map_nav__action__NavigateToGoal_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_map_nav__action__NavigateToGoal_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_map_nav__action__NavigateToGoal_GetResult_Response__fini(&data[i - 1]);
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
multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence__fini(multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence * array)
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
      multi_map_nav__action__NavigateToGoal_GetResult_Response__fini(&array->data[i]);
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

multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence *
multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence * array = (multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence__destroy(multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence__are_equal(const multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence * lhs, const multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence__copy(
  const multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence * input,
  multi_map_nav__action__NavigateToGoal_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_map_nav__action__NavigateToGoal_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multi_map_nav__action__NavigateToGoal_GetResult_Response * data =
      (multi_map_nav__action__NavigateToGoal_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_map_nav__action__NavigateToGoal_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multi_map_nav__action__NavigateToGoal_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_GetResult_Response__copy(
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
// #include "multi_map_nav/action/detail/navigate_to_goal__functions.h"

bool
multi_map_nav__action__NavigateToGoal_FeedbackMessage__init(multi_map_nav__action__NavigateToGoal_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    multi_map_nav__action__NavigateToGoal_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!multi_map_nav__action__NavigateToGoal_Feedback__init(&msg->feedback)) {
    multi_map_nav__action__NavigateToGoal_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
multi_map_nav__action__NavigateToGoal_FeedbackMessage__fini(multi_map_nav__action__NavigateToGoal_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  multi_map_nav__action__NavigateToGoal_Feedback__fini(&msg->feedback);
}

bool
multi_map_nav__action__NavigateToGoal_FeedbackMessage__are_equal(const multi_map_nav__action__NavigateToGoal_FeedbackMessage * lhs, const multi_map_nav__action__NavigateToGoal_FeedbackMessage * rhs)
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
  if (!multi_map_nav__action__NavigateToGoal_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
multi_map_nav__action__NavigateToGoal_FeedbackMessage__copy(
  const multi_map_nav__action__NavigateToGoal_FeedbackMessage * input,
  multi_map_nav__action__NavigateToGoal_FeedbackMessage * output)
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
  if (!multi_map_nav__action__NavigateToGoal_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

multi_map_nav__action__NavigateToGoal_FeedbackMessage *
multi_map_nav__action__NavigateToGoal_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_FeedbackMessage * msg = (multi_map_nav__action__NavigateToGoal_FeedbackMessage *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(multi_map_nav__action__NavigateToGoal_FeedbackMessage));
  bool success = multi_map_nav__action__NavigateToGoal_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
multi_map_nav__action__NavigateToGoal_FeedbackMessage__destroy(multi_map_nav__action__NavigateToGoal_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    multi_map_nav__action__NavigateToGoal_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence__init(multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_FeedbackMessage * data = NULL;

  if (size) {
    data = (multi_map_nav__action__NavigateToGoal_FeedbackMessage *)allocator.zero_allocate(size, sizeof(multi_map_nav__action__NavigateToGoal_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = multi_map_nav__action__NavigateToGoal_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        multi_map_nav__action__NavigateToGoal_FeedbackMessage__fini(&data[i - 1]);
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
multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence__fini(multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence * array)
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
      multi_map_nav__action__NavigateToGoal_FeedbackMessage__fini(&array->data[i]);
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

multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence *
multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence * array = (multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence *)allocator.allocate(sizeof(multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence__destroy(multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence__are_equal(const multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence * lhs, const multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence__copy(
  const multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence * input,
  multi_map_nav__action__NavigateToGoal_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(multi_map_nav__action__NavigateToGoal_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    multi_map_nav__action__NavigateToGoal_FeedbackMessage * data =
      (multi_map_nav__action__NavigateToGoal_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!multi_map_nav__action__NavigateToGoal_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          multi_map_nav__action__NavigateToGoal_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!multi_map_nav__action__NavigateToGoal_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
