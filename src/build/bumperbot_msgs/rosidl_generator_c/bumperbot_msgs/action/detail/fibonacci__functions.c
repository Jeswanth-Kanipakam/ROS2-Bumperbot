// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bumperbot_msgs:action/Fibonacci.idl
// generated code does not contain a copyright notice
#include "bumperbot_msgs/action/detail/fibonacci__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bumperbot_msgs__action__Fibonacci_Goal__init(bumperbot_msgs__action__Fibonacci_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // order
  return true;
}

void
bumperbot_msgs__action__Fibonacci_Goal__fini(bumperbot_msgs__action__Fibonacci_Goal * msg)
{
  if (!msg) {
    return;
  }
  // order
}

bool
bumperbot_msgs__action__Fibonacci_Goal__are_equal(const bumperbot_msgs__action__Fibonacci_Goal * lhs, const bumperbot_msgs__action__Fibonacci_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order
  if (lhs->order != rhs->order) {
    return false;
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_Goal__copy(
  const bumperbot_msgs__action__Fibonacci_Goal * input,
  bumperbot_msgs__action__Fibonacci_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // order
  output->order = input->order;
  return true;
}

bumperbot_msgs__action__Fibonacci_Goal *
bumperbot_msgs__action__Fibonacci_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_Goal * msg = (bumperbot_msgs__action__Fibonacci_Goal *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bumperbot_msgs__action__Fibonacci_Goal));
  bool success = bumperbot_msgs__action__Fibonacci_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bumperbot_msgs__action__Fibonacci_Goal__destroy(bumperbot_msgs__action__Fibonacci_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bumperbot_msgs__action__Fibonacci_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bumperbot_msgs__action__Fibonacci_Goal__Sequence__init(bumperbot_msgs__action__Fibonacci_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_Goal * data = NULL;

  if (size) {
    data = (bumperbot_msgs__action__Fibonacci_Goal *)allocator.zero_allocate(size, sizeof(bumperbot_msgs__action__Fibonacci_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bumperbot_msgs__action__Fibonacci_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bumperbot_msgs__action__Fibonacci_Goal__fini(&data[i - 1]);
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
bumperbot_msgs__action__Fibonacci_Goal__Sequence__fini(bumperbot_msgs__action__Fibonacci_Goal__Sequence * array)
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
      bumperbot_msgs__action__Fibonacci_Goal__fini(&array->data[i]);
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

bumperbot_msgs__action__Fibonacci_Goal__Sequence *
bumperbot_msgs__action__Fibonacci_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_Goal__Sequence * array = (bumperbot_msgs__action__Fibonacci_Goal__Sequence *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bumperbot_msgs__action__Fibonacci_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bumperbot_msgs__action__Fibonacci_Goal__Sequence__destroy(bumperbot_msgs__action__Fibonacci_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bumperbot_msgs__action__Fibonacci_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bumperbot_msgs__action__Fibonacci_Goal__Sequence__are_equal(const bumperbot_msgs__action__Fibonacci_Goal__Sequence * lhs, const bumperbot_msgs__action__Fibonacci_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_Goal__Sequence__copy(
  const bumperbot_msgs__action__Fibonacci_Goal__Sequence * input,
  bumperbot_msgs__action__Fibonacci_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bumperbot_msgs__action__Fibonacci_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bumperbot_msgs__action__Fibonacci_Goal * data =
      (bumperbot_msgs__action__Fibonacci_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bumperbot_msgs__action__Fibonacci_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bumperbot_msgs__action__Fibonacci_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
bumperbot_msgs__action__Fibonacci_Result__init(bumperbot_msgs__action__Fibonacci_Result * msg)
{
  if (!msg) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->sequence, 0)) {
    bumperbot_msgs__action__Fibonacci_Result__fini(msg);
    return false;
  }
  return true;
}

void
bumperbot_msgs__action__Fibonacci_Result__fini(bumperbot_msgs__action__Fibonacci_Result * msg)
{
  if (!msg) {
    return;
  }
  // sequence
  rosidl_runtime_c__int32__Sequence__fini(&msg->sequence);
}

bool
bumperbot_msgs__action__Fibonacci_Result__are_equal(const bumperbot_msgs__action__Fibonacci_Result * lhs, const bumperbot_msgs__action__Fibonacci_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->sequence), &(rhs->sequence)))
  {
    return false;
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_Result__copy(
  const bumperbot_msgs__action__Fibonacci_Result * input,
  bumperbot_msgs__action__Fibonacci_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->sequence), &(output->sequence)))
  {
    return false;
  }
  return true;
}

bumperbot_msgs__action__Fibonacci_Result *
bumperbot_msgs__action__Fibonacci_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_Result * msg = (bumperbot_msgs__action__Fibonacci_Result *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bumperbot_msgs__action__Fibonacci_Result));
  bool success = bumperbot_msgs__action__Fibonacci_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bumperbot_msgs__action__Fibonacci_Result__destroy(bumperbot_msgs__action__Fibonacci_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bumperbot_msgs__action__Fibonacci_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bumperbot_msgs__action__Fibonacci_Result__Sequence__init(bumperbot_msgs__action__Fibonacci_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_Result * data = NULL;

  if (size) {
    data = (bumperbot_msgs__action__Fibonacci_Result *)allocator.zero_allocate(size, sizeof(bumperbot_msgs__action__Fibonacci_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bumperbot_msgs__action__Fibonacci_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bumperbot_msgs__action__Fibonacci_Result__fini(&data[i - 1]);
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
bumperbot_msgs__action__Fibonacci_Result__Sequence__fini(bumperbot_msgs__action__Fibonacci_Result__Sequence * array)
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
      bumperbot_msgs__action__Fibonacci_Result__fini(&array->data[i]);
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

bumperbot_msgs__action__Fibonacci_Result__Sequence *
bumperbot_msgs__action__Fibonacci_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_Result__Sequence * array = (bumperbot_msgs__action__Fibonacci_Result__Sequence *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bumperbot_msgs__action__Fibonacci_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bumperbot_msgs__action__Fibonacci_Result__Sequence__destroy(bumperbot_msgs__action__Fibonacci_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bumperbot_msgs__action__Fibonacci_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bumperbot_msgs__action__Fibonacci_Result__Sequence__are_equal(const bumperbot_msgs__action__Fibonacci_Result__Sequence * lhs, const bumperbot_msgs__action__Fibonacci_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_Result__Sequence__copy(
  const bumperbot_msgs__action__Fibonacci_Result__Sequence * input,
  bumperbot_msgs__action__Fibonacci_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bumperbot_msgs__action__Fibonacci_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bumperbot_msgs__action__Fibonacci_Result * data =
      (bumperbot_msgs__action__Fibonacci_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bumperbot_msgs__action__Fibonacci_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bumperbot_msgs__action__Fibonacci_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `partial_sequence`
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
bumperbot_msgs__action__Fibonacci_Feedback__init(bumperbot_msgs__action__Fibonacci_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // partial_sequence
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->partial_sequence, 0)) {
    bumperbot_msgs__action__Fibonacci_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
bumperbot_msgs__action__Fibonacci_Feedback__fini(bumperbot_msgs__action__Fibonacci_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // partial_sequence
  rosidl_runtime_c__int32__Sequence__fini(&msg->partial_sequence);
}

bool
bumperbot_msgs__action__Fibonacci_Feedback__are_equal(const bumperbot_msgs__action__Fibonacci_Feedback * lhs, const bumperbot_msgs__action__Fibonacci_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // partial_sequence
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->partial_sequence), &(rhs->partial_sequence)))
  {
    return false;
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_Feedback__copy(
  const bumperbot_msgs__action__Fibonacci_Feedback * input,
  bumperbot_msgs__action__Fibonacci_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // partial_sequence
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->partial_sequence), &(output->partial_sequence)))
  {
    return false;
  }
  return true;
}

bumperbot_msgs__action__Fibonacci_Feedback *
bumperbot_msgs__action__Fibonacci_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_Feedback * msg = (bumperbot_msgs__action__Fibonacci_Feedback *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bumperbot_msgs__action__Fibonacci_Feedback));
  bool success = bumperbot_msgs__action__Fibonacci_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bumperbot_msgs__action__Fibonacci_Feedback__destroy(bumperbot_msgs__action__Fibonacci_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bumperbot_msgs__action__Fibonacci_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bumperbot_msgs__action__Fibonacci_Feedback__Sequence__init(bumperbot_msgs__action__Fibonacci_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_Feedback * data = NULL;

  if (size) {
    data = (bumperbot_msgs__action__Fibonacci_Feedback *)allocator.zero_allocate(size, sizeof(bumperbot_msgs__action__Fibonacci_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bumperbot_msgs__action__Fibonacci_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bumperbot_msgs__action__Fibonacci_Feedback__fini(&data[i - 1]);
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
bumperbot_msgs__action__Fibonacci_Feedback__Sequence__fini(bumperbot_msgs__action__Fibonacci_Feedback__Sequence * array)
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
      bumperbot_msgs__action__Fibonacci_Feedback__fini(&array->data[i]);
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

bumperbot_msgs__action__Fibonacci_Feedback__Sequence *
bumperbot_msgs__action__Fibonacci_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_Feedback__Sequence * array = (bumperbot_msgs__action__Fibonacci_Feedback__Sequence *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bumperbot_msgs__action__Fibonacci_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bumperbot_msgs__action__Fibonacci_Feedback__Sequence__destroy(bumperbot_msgs__action__Fibonacci_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bumperbot_msgs__action__Fibonacci_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bumperbot_msgs__action__Fibonacci_Feedback__Sequence__are_equal(const bumperbot_msgs__action__Fibonacci_Feedback__Sequence * lhs, const bumperbot_msgs__action__Fibonacci_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_Feedback__Sequence__copy(
  const bumperbot_msgs__action__Fibonacci_Feedback__Sequence * input,
  bumperbot_msgs__action__Fibonacci_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bumperbot_msgs__action__Fibonacci_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bumperbot_msgs__action__Fibonacci_Feedback * data =
      (bumperbot_msgs__action__Fibonacci_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bumperbot_msgs__action__Fibonacci_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bumperbot_msgs__action__Fibonacci_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_Feedback__copy(
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
// #include "bumperbot_msgs/action/detail/fibonacci__functions.h"

bool
bumperbot_msgs__action__Fibonacci_SendGoal_Request__init(bumperbot_msgs__action__Fibonacci_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    bumperbot_msgs__action__Fibonacci_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!bumperbot_msgs__action__Fibonacci_Goal__init(&msg->goal)) {
    bumperbot_msgs__action__Fibonacci_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
bumperbot_msgs__action__Fibonacci_SendGoal_Request__fini(bumperbot_msgs__action__Fibonacci_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  bumperbot_msgs__action__Fibonacci_Goal__fini(&msg->goal);
}

bool
bumperbot_msgs__action__Fibonacci_SendGoal_Request__are_equal(const bumperbot_msgs__action__Fibonacci_SendGoal_Request * lhs, const bumperbot_msgs__action__Fibonacci_SendGoal_Request * rhs)
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
  if (!bumperbot_msgs__action__Fibonacci_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_SendGoal_Request__copy(
  const bumperbot_msgs__action__Fibonacci_SendGoal_Request * input,
  bumperbot_msgs__action__Fibonacci_SendGoal_Request * output)
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
  if (!bumperbot_msgs__action__Fibonacci_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

bumperbot_msgs__action__Fibonacci_SendGoal_Request *
bumperbot_msgs__action__Fibonacci_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_SendGoal_Request * msg = (bumperbot_msgs__action__Fibonacci_SendGoal_Request *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Request));
  bool success = bumperbot_msgs__action__Fibonacci_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bumperbot_msgs__action__Fibonacci_SendGoal_Request__destroy(bumperbot_msgs__action__Fibonacci_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bumperbot_msgs__action__Fibonacci_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__init(bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_SendGoal_Request * data = NULL;

  if (size) {
    data = (bumperbot_msgs__action__Fibonacci_SendGoal_Request *)allocator.zero_allocate(size, sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bumperbot_msgs__action__Fibonacci_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bumperbot_msgs__action__Fibonacci_SendGoal_Request__fini(&data[i - 1]);
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
bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__fini(bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * array)
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
      bumperbot_msgs__action__Fibonacci_SendGoal_Request__fini(&array->data[i]);
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

bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence *
bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * array = (bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__destroy(bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__are_equal(const bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * lhs, const bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__copy(
  const bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * input,
  bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bumperbot_msgs__action__Fibonacci_SendGoal_Request * data =
      (bumperbot_msgs__action__Fibonacci_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bumperbot_msgs__action__Fibonacci_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bumperbot_msgs__action__Fibonacci_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_SendGoal_Request__copy(
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
bumperbot_msgs__action__Fibonacci_SendGoal_Response__init(bumperbot_msgs__action__Fibonacci_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    bumperbot_msgs__action__Fibonacci_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
bumperbot_msgs__action__Fibonacci_SendGoal_Response__fini(bumperbot_msgs__action__Fibonacci_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
bumperbot_msgs__action__Fibonacci_SendGoal_Response__are_equal(const bumperbot_msgs__action__Fibonacci_SendGoal_Response * lhs, const bumperbot_msgs__action__Fibonacci_SendGoal_Response * rhs)
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
bumperbot_msgs__action__Fibonacci_SendGoal_Response__copy(
  const bumperbot_msgs__action__Fibonacci_SendGoal_Response * input,
  bumperbot_msgs__action__Fibonacci_SendGoal_Response * output)
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

bumperbot_msgs__action__Fibonacci_SendGoal_Response *
bumperbot_msgs__action__Fibonacci_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_SendGoal_Response * msg = (bumperbot_msgs__action__Fibonacci_SendGoal_Response *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Response));
  bool success = bumperbot_msgs__action__Fibonacci_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bumperbot_msgs__action__Fibonacci_SendGoal_Response__destroy(bumperbot_msgs__action__Fibonacci_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bumperbot_msgs__action__Fibonacci_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__init(bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_SendGoal_Response * data = NULL;

  if (size) {
    data = (bumperbot_msgs__action__Fibonacci_SendGoal_Response *)allocator.zero_allocate(size, sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bumperbot_msgs__action__Fibonacci_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bumperbot_msgs__action__Fibonacci_SendGoal_Response__fini(&data[i - 1]);
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
bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__fini(bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * array)
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
      bumperbot_msgs__action__Fibonacci_SendGoal_Response__fini(&array->data[i]);
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

bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence *
bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * array = (bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__destroy(bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__are_equal(const bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * lhs, const bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__copy(
  const bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * input,
  bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bumperbot_msgs__action__Fibonacci_SendGoal_Response * data =
      (bumperbot_msgs__action__Fibonacci_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bumperbot_msgs__action__Fibonacci_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bumperbot_msgs__action__Fibonacci_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__functions.h"

bool
bumperbot_msgs__action__Fibonacci_SendGoal_Event__init(bumperbot_msgs__action__Fibonacci_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    bumperbot_msgs__action__Fibonacci_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    bumperbot_msgs__action__Fibonacci_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    bumperbot_msgs__action__Fibonacci_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
bumperbot_msgs__action__Fibonacci_SendGoal_Event__fini(bumperbot_msgs__action__Fibonacci_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
bumperbot_msgs__action__Fibonacci_SendGoal_Event__are_equal(const bumperbot_msgs__action__Fibonacci_SendGoal_Event * lhs, const bumperbot_msgs__action__Fibonacci_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_SendGoal_Event__copy(
  const bumperbot_msgs__action__Fibonacci_SendGoal_Event * input,
  bumperbot_msgs__action__Fibonacci_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!bumperbot_msgs__action__Fibonacci_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!bumperbot_msgs__action__Fibonacci_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

bumperbot_msgs__action__Fibonacci_SendGoal_Event *
bumperbot_msgs__action__Fibonacci_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_SendGoal_Event * msg = (bumperbot_msgs__action__Fibonacci_SendGoal_Event *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Event));
  bool success = bumperbot_msgs__action__Fibonacci_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bumperbot_msgs__action__Fibonacci_SendGoal_Event__destroy(bumperbot_msgs__action__Fibonacci_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bumperbot_msgs__action__Fibonacci_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence__init(bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_SendGoal_Event * data = NULL;

  if (size) {
    data = (bumperbot_msgs__action__Fibonacci_SendGoal_Event *)allocator.zero_allocate(size, sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bumperbot_msgs__action__Fibonacci_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bumperbot_msgs__action__Fibonacci_SendGoal_Event__fini(&data[i - 1]);
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
bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence__fini(bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence * array)
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
      bumperbot_msgs__action__Fibonacci_SendGoal_Event__fini(&array->data[i]);
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

bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence *
bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence * array = (bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence__destroy(bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence__are_equal(const bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence * lhs, const bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence__copy(
  const bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence * input,
  bumperbot_msgs__action__Fibonacci_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bumperbot_msgs__action__Fibonacci_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bumperbot_msgs__action__Fibonacci_SendGoal_Event * data =
      (bumperbot_msgs__action__Fibonacci_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bumperbot_msgs__action__Fibonacci_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bumperbot_msgs__action__Fibonacci_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_SendGoal_Event__copy(
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
bumperbot_msgs__action__Fibonacci_GetResult_Request__init(bumperbot_msgs__action__Fibonacci_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    bumperbot_msgs__action__Fibonacci_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
bumperbot_msgs__action__Fibonacci_GetResult_Request__fini(bumperbot_msgs__action__Fibonacci_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
bumperbot_msgs__action__Fibonacci_GetResult_Request__are_equal(const bumperbot_msgs__action__Fibonacci_GetResult_Request * lhs, const bumperbot_msgs__action__Fibonacci_GetResult_Request * rhs)
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
bumperbot_msgs__action__Fibonacci_GetResult_Request__copy(
  const bumperbot_msgs__action__Fibonacci_GetResult_Request * input,
  bumperbot_msgs__action__Fibonacci_GetResult_Request * output)
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

bumperbot_msgs__action__Fibonacci_GetResult_Request *
bumperbot_msgs__action__Fibonacci_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_GetResult_Request * msg = (bumperbot_msgs__action__Fibonacci_GetResult_Request *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Request));
  bool success = bumperbot_msgs__action__Fibonacci_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bumperbot_msgs__action__Fibonacci_GetResult_Request__destroy(bumperbot_msgs__action__Fibonacci_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bumperbot_msgs__action__Fibonacci_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence__init(bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_GetResult_Request * data = NULL;

  if (size) {
    data = (bumperbot_msgs__action__Fibonacci_GetResult_Request *)allocator.zero_allocate(size, sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bumperbot_msgs__action__Fibonacci_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bumperbot_msgs__action__Fibonacci_GetResult_Request__fini(&data[i - 1]);
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
bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence__fini(bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence * array)
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
      bumperbot_msgs__action__Fibonacci_GetResult_Request__fini(&array->data[i]);
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

bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence *
bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence * array = (bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence__destroy(bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence__are_equal(const bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence * lhs, const bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence__copy(
  const bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence * input,
  bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bumperbot_msgs__action__Fibonacci_GetResult_Request * data =
      (bumperbot_msgs__action__Fibonacci_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bumperbot_msgs__action__Fibonacci_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bumperbot_msgs__action__Fibonacci_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_GetResult_Request__copy(
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
// #include "bumperbot_msgs/action/detail/fibonacci__functions.h"

bool
bumperbot_msgs__action__Fibonacci_GetResult_Response__init(bumperbot_msgs__action__Fibonacci_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!bumperbot_msgs__action__Fibonacci_Result__init(&msg->result)) {
    bumperbot_msgs__action__Fibonacci_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
bumperbot_msgs__action__Fibonacci_GetResult_Response__fini(bumperbot_msgs__action__Fibonacci_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  bumperbot_msgs__action__Fibonacci_Result__fini(&msg->result);
}

bool
bumperbot_msgs__action__Fibonacci_GetResult_Response__are_equal(const bumperbot_msgs__action__Fibonacci_GetResult_Response * lhs, const bumperbot_msgs__action__Fibonacci_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!bumperbot_msgs__action__Fibonacci_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_GetResult_Response__copy(
  const bumperbot_msgs__action__Fibonacci_GetResult_Response * input,
  bumperbot_msgs__action__Fibonacci_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!bumperbot_msgs__action__Fibonacci_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

bumperbot_msgs__action__Fibonacci_GetResult_Response *
bumperbot_msgs__action__Fibonacci_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_GetResult_Response * msg = (bumperbot_msgs__action__Fibonacci_GetResult_Response *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Response));
  bool success = bumperbot_msgs__action__Fibonacci_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bumperbot_msgs__action__Fibonacci_GetResult_Response__destroy(bumperbot_msgs__action__Fibonacci_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bumperbot_msgs__action__Fibonacci_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence__init(bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_GetResult_Response * data = NULL;

  if (size) {
    data = (bumperbot_msgs__action__Fibonacci_GetResult_Response *)allocator.zero_allocate(size, sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bumperbot_msgs__action__Fibonacci_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bumperbot_msgs__action__Fibonacci_GetResult_Response__fini(&data[i - 1]);
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
bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence__fini(bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence * array)
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
      bumperbot_msgs__action__Fibonacci_GetResult_Response__fini(&array->data[i]);
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

bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence *
bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence * array = (bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence__destroy(bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence__are_equal(const bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence * lhs, const bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence__copy(
  const bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence * input,
  bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bumperbot_msgs__action__Fibonacci_GetResult_Response * data =
      (bumperbot_msgs__action__Fibonacci_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bumperbot_msgs__action__Fibonacci_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bumperbot_msgs__action__Fibonacci_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "bumperbot_msgs/action/detail/fibonacci__functions.h"

bool
bumperbot_msgs__action__Fibonacci_GetResult_Event__init(bumperbot_msgs__action__Fibonacci_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    bumperbot_msgs__action__Fibonacci_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence__init(&msg->request, 0)) {
    bumperbot_msgs__action__Fibonacci_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence__init(&msg->response, 0)) {
    bumperbot_msgs__action__Fibonacci_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
bumperbot_msgs__action__Fibonacci_GetResult_Event__fini(bumperbot_msgs__action__Fibonacci_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence__fini(&msg->request);
  // response
  bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence__fini(&msg->response);
}

bool
bumperbot_msgs__action__Fibonacci_GetResult_Event__are_equal(const bumperbot_msgs__action__Fibonacci_GetResult_Event * lhs, const bumperbot_msgs__action__Fibonacci_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_GetResult_Event__copy(
  const bumperbot_msgs__action__Fibonacci_GetResult_Event * input,
  bumperbot_msgs__action__Fibonacci_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!bumperbot_msgs__action__Fibonacci_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!bumperbot_msgs__action__Fibonacci_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

bumperbot_msgs__action__Fibonacci_GetResult_Event *
bumperbot_msgs__action__Fibonacci_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_GetResult_Event * msg = (bumperbot_msgs__action__Fibonacci_GetResult_Event *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Event));
  bool success = bumperbot_msgs__action__Fibonacci_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bumperbot_msgs__action__Fibonacci_GetResult_Event__destroy(bumperbot_msgs__action__Fibonacci_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bumperbot_msgs__action__Fibonacci_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence__init(bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_GetResult_Event * data = NULL;

  if (size) {
    data = (bumperbot_msgs__action__Fibonacci_GetResult_Event *)allocator.zero_allocate(size, sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bumperbot_msgs__action__Fibonacci_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bumperbot_msgs__action__Fibonacci_GetResult_Event__fini(&data[i - 1]);
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
bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence__fini(bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence * array)
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
      bumperbot_msgs__action__Fibonacci_GetResult_Event__fini(&array->data[i]);
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

bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence *
bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence * array = (bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence__destroy(bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence__are_equal(const bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence * lhs, const bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence__copy(
  const bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence * input,
  bumperbot_msgs__action__Fibonacci_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bumperbot_msgs__action__Fibonacci_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bumperbot_msgs__action__Fibonacci_GetResult_Event * data =
      (bumperbot_msgs__action__Fibonacci_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bumperbot_msgs__action__Fibonacci_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bumperbot_msgs__action__Fibonacci_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_GetResult_Event__copy(
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
// #include "bumperbot_msgs/action/detail/fibonacci__functions.h"

bool
bumperbot_msgs__action__Fibonacci_FeedbackMessage__init(bumperbot_msgs__action__Fibonacci_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    bumperbot_msgs__action__Fibonacci_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!bumperbot_msgs__action__Fibonacci_Feedback__init(&msg->feedback)) {
    bumperbot_msgs__action__Fibonacci_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
bumperbot_msgs__action__Fibonacci_FeedbackMessage__fini(bumperbot_msgs__action__Fibonacci_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  bumperbot_msgs__action__Fibonacci_Feedback__fini(&msg->feedback);
}

bool
bumperbot_msgs__action__Fibonacci_FeedbackMessage__are_equal(const bumperbot_msgs__action__Fibonacci_FeedbackMessage * lhs, const bumperbot_msgs__action__Fibonacci_FeedbackMessage * rhs)
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
  if (!bumperbot_msgs__action__Fibonacci_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_FeedbackMessage__copy(
  const bumperbot_msgs__action__Fibonacci_FeedbackMessage * input,
  bumperbot_msgs__action__Fibonacci_FeedbackMessage * output)
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
  if (!bumperbot_msgs__action__Fibonacci_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

bumperbot_msgs__action__Fibonacci_FeedbackMessage *
bumperbot_msgs__action__Fibonacci_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_FeedbackMessage * msg = (bumperbot_msgs__action__Fibonacci_FeedbackMessage *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bumperbot_msgs__action__Fibonacci_FeedbackMessage));
  bool success = bumperbot_msgs__action__Fibonacci_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bumperbot_msgs__action__Fibonacci_FeedbackMessage__destroy(bumperbot_msgs__action__Fibonacci_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bumperbot_msgs__action__Fibonacci_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__init(bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_FeedbackMessage * data = NULL;

  if (size) {
    data = (bumperbot_msgs__action__Fibonacci_FeedbackMessage *)allocator.zero_allocate(size, sizeof(bumperbot_msgs__action__Fibonacci_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bumperbot_msgs__action__Fibonacci_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bumperbot_msgs__action__Fibonacci_FeedbackMessage__fini(&data[i - 1]);
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
bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__fini(bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * array)
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
      bumperbot_msgs__action__Fibonacci_FeedbackMessage__fini(&array->data[i]);
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

bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence *
bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * array = (bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence *)allocator.allocate(sizeof(bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__destroy(bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__are_equal(const bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * lhs, const bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence__copy(
  const bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * input,
  bumperbot_msgs__action__Fibonacci_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bumperbot_msgs__action__Fibonacci_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bumperbot_msgs__action__Fibonacci_FeedbackMessage * data =
      (bumperbot_msgs__action__Fibonacci_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bumperbot_msgs__action__Fibonacci_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bumperbot_msgs__action__Fibonacci_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bumperbot_msgs__action__Fibonacci_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
