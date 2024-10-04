// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from agbot_full_msgs:action/AgbotFullArmTask.idl
// generated code does not contain a copyright notice
#include "agbot_full_msgs/action/detail/agbot_full_arm_task__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
agbot_full_msgs__action__AgbotFullArmTask_Goal__init(agbot_full_msgs__action__AgbotFullArmTask_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // task_number
  return true;
}

void
agbot_full_msgs__action__AgbotFullArmTask_Goal__fini(agbot_full_msgs__action__AgbotFullArmTask_Goal * msg)
{
  if (!msg) {
    return;
  }
  // task_number
}

bool
agbot_full_msgs__action__AgbotFullArmTask_Goal__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_Goal * lhs, const agbot_full_msgs__action__AgbotFullArmTask_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_number
  if (lhs->task_number != rhs->task_number) {
    return false;
  }
  return true;
}

bool
agbot_full_msgs__action__AgbotFullArmTask_Goal__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_Goal * input,
  agbot_full_msgs__action__AgbotFullArmTask_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // task_number
  output->task_number = input->task_number;
  return true;
}

agbot_full_msgs__action__AgbotFullArmTask_Goal *
agbot_full_msgs__action__AgbotFullArmTask_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_Goal * msg = (agbot_full_msgs__action__AgbotFullArmTask_Goal *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agbot_full_msgs__action__AgbotFullArmTask_Goal));
  bool success = agbot_full_msgs__action__AgbotFullArmTask_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agbot_full_msgs__action__AgbotFullArmTask_Goal__destroy(agbot_full_msgs__action__AgbotFullArmTask_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agbot_full_msgs__action__AgbotFullArmTask_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_Goal * data = NULL;

  if (size) {
    data = (agbot_full_msgs__action__AgbotFullArmTask_Goal *)allocator.zero_allocate(size, sizeof(agbot_full_msgs__action__AgbotFullArmTask_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agbot_full_msgs__action__AgbotFullArmTask_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agbot_full_msgs__action__AgbotFullArmTask_Goal__fini(&data[i - 1]);
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
agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * array)
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
      agbot_full_msgs__action__AgbotFullArmTask_Goal__fini(&array->data[i]);
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

agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * array = (agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(agbot_full_msgs__action__AgbotFullArmTask_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agbot_full_msgs__action__AgbotFullArmTask_Goal * data =
      (agbot_full_msgs__action__AgbotFullArmTask_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agbot_full_msgs__action__AgbotFullArmTask_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agbot_full_msgs__action__AgbotFullArmTask_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
agbot_full_msgs__action__AgbotFullArmTask_Result__init(agbot_full_msgs__action__AgbotFullArmTask_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
agbot_full_msgs__action__AgbotFullArmTask_Result__fini(agbot_full_msgs__action__AgbotFullArmTask_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
agbot_full_msgs__action__AgbotFullArmTask_Result__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_Result * lhs, const agbot_full_msgs__action__AgbotFullArmTask_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
agbot_full_msgs__action__AgbotFullArmTask_Result__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_Result * input,
  agbot_full_msgs__action__AgbotFullArmTask_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

agbot_full_msgs__action__AgbotFullArmTask_Result *
agbot_full_msgs__action__AgbotFullArmTask_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_Result * msg = (agbot_full_msgs__action__AgbotFullArmTask_Result *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agbot_full_msgs__action__AgbotFullArmTask_Result));
  bool success = agbot_full_msgs__action__AgbotFullArmTask_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agbot_full_msgs__action__AgbotFullArmTask_Result__destroy(agbot_full_msgs__action__AgbotFullArmTask_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agbot_full_msgs__action__AgbotFullArmTask_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_Result * data = NULL;

  if (size) {
    data = (agbot_full_msgs__action__AgbotFullArmTask_Result *)allocator.zero_allocate(size, sizeof(agbot_full_msgs__action__AgbotFullArmTask_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agbot_full_msgs__action__AgbotFullArmTask_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agbot_full_msgs__action__AgbotFullArmTask_Result__fini(&data[i - 1]);
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
agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * array)
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
      agbot_full_msgs__action__AgbotFullArmTask_Result__fini(&array->data[i]);
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

agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * array = (agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(agbot_full_msgs__action__AgbotFullArmTask_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agbot_full_msgs__action__AgbotFullArmTask_Result * data =
      (agbot_full_msgs__action__AgbotFullArmTask_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agbot_full_msgs__action__AgbotFullArmTask_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agbot_full_msgs__action__AgbotFullArmTask_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
agbot_full_msgs__action__AgbotFullArmTask_Feedback__init(agbot_full_msgs__action__AgbotFullArmTask_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // percentage
  return true;
}

void
agbot_full_msgs__action__AgbotFullArmTask_Feedback__fini(agbot_full_msgs__action__AgbotFullArmTask_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // percentage
}

bool
agbot_full_msgs__action__AgbotFullArmTask_Feedback__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_Feedback * lhs, const agbot_full_msgs__action__AgbotFullArmTask_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // percentage
  if (lhs->percentage != rhs->percentage) {
    return false;
  }
  return true;
}

bool
agbot_full_msgs__action__AgbotFullArmTask_Feedback__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_Feedback * input,
  agbot_full_msgs__action__AgbotFullArmTask_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // percentage
  output->percentage = input->percentage;
  return true;
}

agbot_full_msgs__action__AgbotFullArmTask_Feedback *
agbot_full_msgs__action__AgbotFullArmTask_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_Feedback * msg = (agbot_full_msgs__action__AgbotFullArmTask_Feedback *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agbot_full_msgs__action__AgbotFullArmTask_Feedback));
  bool success = agbot_full_msgs__action__AgbotFullArmTask_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agbot_full_msgs__action__AgbotFullArmTask_Feedback__destroy(agbot_full_msgs__action__AgbotFullArmTask_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agbot_full_msgs__action__AgbotFullArmTask_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_Feedback * data = NULL;

  if (size) {
    data = (agbot_full_msgs__action__AgbotFullArmTask_Feedback *)allocator.zero_allocate(size, sizeof(agbot_full_msgs__action__AgbotFullArmTask_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agbot_full_msgs__action__AgbotFullArmTask_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agbot_full_msgs__action__AgbotFullArmTask_Feedback__fini(&data[i - 1]);
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
agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * array)
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
      agbot_full_msgs__action__AgbotFullArmTask_Feedback__fini(&array->data[i]);
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

agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * array = (agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(agbot_full_msgs__action__AgbotFullArmTask_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agbot_full_msgs__action__AgbotFullArmTask_Feedback * data =
      (agbot_full_msgs__action__AgbotFullArmTask_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agbot_full_msgs__action__AgbotFullArmTask_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agbot_full_msgs__action__AgbotFullArmTask_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_Feedback__copy(
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
// #include "agbot_full_msgs/action/detail/agbot_full_arm_task__functions.h"

bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__init(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!agbot_full_msgs__action__AgbotFullArmTask_Goal__init(&msg->goal)) {
    agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__fini(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  agbot_full_msgs__action__AgbotFullArmTask_Goal__fini(&msg->goal);
}

bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * lhs, const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * rhs)
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
  if (!agbot_full_msgs__action__AgbotFullArmTask_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * input,
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * output)
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
  if (!agbot_full_msgs__action__AgbotFullArmTask_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request *
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * msg = (agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request));
  bool success = agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__destroy(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * data = NULL;

  if (size) {
    data = (agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request *)allocator.zero_allocate(size, sizeof(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__fini(&data[i - 1]);
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
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * array)
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
      agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__fini(&array->data[i]);
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

agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * array = (agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * data =
      (agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__copy(
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
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__init(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__fini(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * lhs, const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * rhs)
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
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * input,
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * output)
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

agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response *
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * msg = (agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response));
  bool success = agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__destroy(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * data = NULL;

  if (size) {
    data = (agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response *)allocator.zero_allocate(size, sizeof(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__fini(&data[i - 1]);
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
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * array)
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
      agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__fini(&array->data[i]);
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

agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * array = (agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * data =
      (agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__copy(
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
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__init(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__fini(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * lhs, const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * rhs)
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
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * input,
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * output)
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

agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request *
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * msg = (agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request));
  bool success = agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__destroy(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * data = NULL;

  if (size) {
    data = (agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request *)allocator.zero_allocate(size, sizeof(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__fini(&data[i - 1]);
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
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * array)
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
      agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__fini(&array->data[i]);
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

agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * array = (agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * data =
      (agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__copy(
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
// #include "agbot_full_msgs/action/detail/agbot_full_arm_task__functions.h"

bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__init(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!agbot_full_msgs__action__AgbotFullArmTask_Result__init(&msg->result)) {
    agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__fini(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  agbot_full_msgs__action__AgbotFullArmTask_Result__fini(&msg->result);
}

bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * lhs, const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!agbot_full_msgs__action__AgbotFullArmTask_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * input,
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!agbot_full_msgs__action__AgbotFullArmTask_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response *
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * msg = (agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response));
  bool success = agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__destroy(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * data = NULL;

  if (size) {
    data = (agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response *)allocator.zero_allocate(size, sizeof(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__fini(&data[i - 1]);
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
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * array)
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
      agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__fini(&array->data[i]);
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

agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * array = (agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * data =
      (agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__copy(
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
// #include "agbot_full_msgs/action/detail/agbot_full_arm_task__functions.h"

bool
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__init(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!agbot_full_msgs__action__AgbotFullArmTask_Feedback__init(&msg->feedback)) {
    agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__fini(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  agbot_full_msgs__action__AgbotFullArmTask_Feedback__fini(&msg->feedback);
}

bool
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * lhs, const agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * rhs)
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
  if (!agbot_full_msgs__action__AgbotFullArmTask_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * input,
  agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * output)
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
  if (!agbot_full_msgs__action__AgbotFullArmTask_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage *
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * msg = (agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage));
  bool success = agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__destroy(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__init(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * data = NULL;

  if (size) {
    data = (agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage *)allocator.zero_allocate(size, sizeof(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__fini(&data[i - 1]);
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
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__fini(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * array)
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
      agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__fini(&array->data[i]);
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

agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence *
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * array = (agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence *)allocator.allocate(sizeof(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__destroy(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__are_equal(const agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * lhs, const agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence__copy(
  const agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * input,
  agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * data =
      (agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
