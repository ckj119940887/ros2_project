// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nodes_interfaces:srv/ResetCount.idl
// generated code does not contain a copyright notice
#include "nodes_interfaces/srv/detail/reset_count__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
nodes_interfaces__srv__ResetCount_Request__init(nodes_interfaces__srv__ResetCount_Request * msg)
{
  if (!msg) {
    return false;
  }
  // new_count
  return true;
}

void
nodes_interfaces__srv__ResetCount_Request__fini(nodes_interfaces__srv__ResetCount_Request * msg)
{
  if (!msg) {
    return;
  }
  // new_count
}

bool
nodes_interfaces__srv__ResetCount_Request__are_equal(const nodes_interfaces__srv__ResetCount_Request * lhs, const nodes_interfaces__srv__ResetCount_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // new_count
  if (lhs->new_count != rhs->new_count) {
    return false;
  }
  return true;
}

bool
nodes_interfaces__srv__ResetCount_Request__copy(
  const nodes_interfaces__srv__ResetCount_Request * input,
  nodes_interfaces__srv__ResetCount_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // new_count
  output->new_count = input->new_count;
  return true;
}

nodes_interfaces__srv__ResetCount_Request *
nodes_interfaces__srv__ResetCount_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nodes_interfaces__srv__ResetCount_Request * msg = (nodes_interfaces__srv__ResetCount_Request *)allocator.allocate(sizeof(nodes_interfaces__srv__ResetCount_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nodes_interfaces__srv__ResetCount_Request));
  bool success = nodes_interfaces__srv__ResetCount_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nodes_interfaces__srv__ResetCount_Request__destroy(nodes_interfaces__srv__ResetCount_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nodes_interfaces__srv__ResetCount_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nodes_interfaces__srv__ResetCount_Request__Sequence__init(nodes_interfaces__srv__ResetCount_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nodes_interfaces__srv__ResetCount_Request * data = NULL;

  if (size) {
    data = (nodes_interfaces__srv__ResetCount_Request *)allocator.zero_allocate(size, sizeof(nodes_interfaces__srv__ResetCount_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nodes_interfaces__srv__ResetCount_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nodes_interfaces__srv__ResetCount_Request__fini(&data[i - 1]);
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
nodes_interfaces__srv__ResetCount_Request__Sequence__fini(nodes_interfaces__srv__ResetCount_Request__Sequence * array)
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
      nodes_interfaces__srv__ResetCount_Request__fini(&array->data[i]);
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

nodes_interfaces__srv__ResetCount_Request__Sequence *
nodes_interfaces__srv__ResetCount_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nodes_interfaces__srv__ResetCount_Request__Sequence * array = (nodes_interfaces__srv__ResetCount_Request__Sequence *)allocator.allocate(sizeof(nodes_interfaces__srv__ResetCount_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nodes_interfaces__srv__ResetCount_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nodes_interfaces__srv__ResetCount_Request__Sequence__destroy(nodes_interfaces__srv__ResetCount_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nodes_interfaces__srv__ResetCount_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nodes_interfaces__srv__ResetCount_Request__Sequence__are_equal(const nodes_interfaces__srv__ResetCount_Request__Sequence * lhs, const nodes_interfaces__srv__ResetCount_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nodes_interfaces__srv__ResetCount_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nodes_interfaces__srv__ResetCount_Request__Sequence__copy(
  const nodes_interfaces__srv__ResetCount_Request__Sequence * input,
  nodes_interfaces__srv__ResetCount_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nodes_interfaces__srv__ResetCount_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nodes_interfaces__srv__ResetCount_Request * data =
      (nodes_interfaces__srv__ResetCount_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nodes_interfaces__srv__ResetCount_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nodes_interfaces__srv__ResetCount_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nodes_interfaces__srv__ResetCount_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
nodes_interfaces__srv__ResetCount_Response__init(nodes_interfaces__srv__ResetCount_Response * msg)
{
  if (!msg) {
    return false;
  }
  // old_count
  return true;
}

void
nodes_interfaces__srv__ResetCount_Response__fini(nodes_interfaces__srv__ResetCount_Response * msg)
{
  if (!msg) {
    return;
  }
  // old_count
}

bool
nodes_interfaces__srv__ResetCount_Response__are_equal(const nodes_interfaces__srv__ResetCount_Response * lhs, const nodes_interfaces__srv__ResetCount_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // old_count
  if (lhs->old_count != rhs->old_count) {
    return false;
  }
  return true;
}

bool
nodes_interfaces__srv__ResetCount_Response__copy(
  const nodes_interfaces__srv__ResetCount_Response * input,
  nodes_interfaces__srv__ResetCount_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // old_count
  output->old_count = input->old_count;
  return true;
}

nodes_interfaces__srv__ResetCount_Response *
nodes_interfaces__srv__ResetCount_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nodes_interfaces__srv__ResetCount_Response * msg = (nodes_interfaces__srv__ResetCount_Response *)allocator.allocate(sizeof(nodes_interfaces__srv__ResetCount_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nodes_interfaces__srv__ResetCount_Response));
  bool success = nodes_interfaces__srv__ResetCount_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nodes_interfaces__srv__ResetCount_Response__destroy(nodes_interfaces__srv__ResetCount_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nodes_interfaces__srv__ResetCount_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nodes_interfaces__srv__ResetCount_Response__Sequence__init(nodes_interfaces__srv__ResetCount_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nodes_interfaces__srv__ResetCount_Response * data = NULL;

  if (size) {
    data = (nodes_interfaces__srv__ResetCount_Response *)allocator.zero_allocate(size, sizeof(nodes_interfaces__srv__ResetCount_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nodes_interfaces__srv__ResetCount_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nodes_interfaces__srv__ResetCount_Response__fini(&data[i - 1]);
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
nodes_interfaces__srv__ResetCount_Response__Sequence__fini(nodes_interfaces__srv__ResetCount_Response__Sequence * array)
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
      nodes_interfaces__srv__ResetCount_Response__fini(&array->data[i]);
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

nodes_interfaces__srv__ResetCount_Response__Sequence *
nodes_interfaces__srv__ResetCount_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nodes_interfaces__srv__ResetCount_Response__Sequence * array = (nodes_interfaces__srv__ResetCount_Response__Sequence *)allocator.allocate(sizeof(nodes_interfaces__srv__ResetCount_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nodes_interfaces__srv__ResetCount_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nodes_interfaces__srv__ResetCount_Response__Sequence__destroy(nodes_interfaces__srv__ResetCount_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nodes_interfaces__srv__ResetCount_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nodes_interfaces__srv__ResetCount_Response__Sequence__are_equal(const nodes_interfaces__srv__ResetCount_Response__Sequence * lhs, const nodes_interfaces__srv__ResetCount_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nodes_interfaces__srv__ResetCount_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nodes_interfaces__srv__ResetCount_Response__Sequence__copy(
  const nodes_interfaces__srv__ResetCount_Response__Sequence * input,
  nodes_interfaces__srv__ResetCount_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nodes_interfaces__srv__ResetCount_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nodes_interfaces__srv__ResetCount_Response * data =
      (nodes_interfaces__srv__ResetCount_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nodes_interfaces__srv__ResetCount_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nodes_interfaces__srv__ResetCount_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nodes_interfaces__srv__ResetCount_Response__copy(
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
// #include "nodes_interfaces/srv/detail/reset_count__functions.h"

bool
nodes_interfaces__srv__ResetCount_Event__init(nodes_interfaces__srv__ResetCount_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    nodes_interfaces__srv__ResetCount_Event__fini(msg);
    return false;
  }
  // request
  if (!nodes_interfaces__srv__ResetCount_Request__Sequence__init(&msg->request, 0)) {
    nodes_interfaces__srv__ResetCount_Event__fini(msg);
    return false;
  }
  // response
  if (!nodes_interfaces__srv__ResetCount_Response__Sequence__init(&msg->response, 0)) {
    nodes_interfaces__srv__ResetCount_Event__fini(msg);
    return false;
  }
  return true;
}

void
nodes_interfaces__srv__ResetCount_Event__fini(nodes_interfaces__srv__ResetCount_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  nodes_interfaces__srv__ResetCount_Request__Sequence__fini(&msg->request);
  // response
  nodes_interfaces__srv__ResetCount_Response__Sequence__fini(&msg->response);
}

bool
nodes_interfaces__srv__ResetCount_Event__are_equal(const nodes_interfaces__srv__ResetCount_Event * lhs, const nodes_interfaces__srv__ResetCount_Event * rhs)
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
  if (!nodes_interfaces__srv__ResetCount_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!nodes_interfaces__srv__ResetCount_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
nodes_interfaces__srv__ResetCount_Event__copy(
  const nodes_interfaces__srv__ResetCount_Event * input,
  nodes_interfaces__srv__ResetCount_Event * output)
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
  if (!nodes_interfaces__srv__ResetCount_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!nodes_interfaces__srv__ResetCount_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

nodes_interfaces__srv__ResetCount_Event *
nodes_interfaces__srv__ResetCount_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nodes_interfaces__srv__ResetCount_Event * msg = (nodes_interfaces__srv__ResetCount_Event *)allocator.allocate(sizeof(nodes_interfaces__srv__ResetCount_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nodes_interfaces__srv__ResetCount_Event));
  bool success = nodes_interfaces__srv__ResetCount_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nodes_interfaces__srv__ResetCount_Event__destroy(nodes_interfaces__srv__ResetCount_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nodes_interfaces__srv__ResetCount_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nodes_interfaces__srv__ResetCount_Event__Sequence__init(nodes_interfaces__srv__ResetCount_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nodes_interfaces__srv__ResetCount_Event * data = NULL;

  if (size) {
    data = (nodes_interfaces__srv__ResetCount_Event *)allocator.zero_allocate(size, sizeof(nodes_interfaces__srv__ResetCount_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nodes_interfaces__srv__ResetCount_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nodes_interfaces__srv__ResetCount_Event__fini(&data[i - 1]);
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
nodes_interfaces__srv__ResetCount_Event__Sequence__fini(nodes_interfaces__srv__ResetCount_Event__Sequence * array)
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
      nodes_interfaces__srv__ResetCount_Event__fini(&array->data[i]);
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

nodes_interfaces__srv__ResetCount_Event__Sequence *
nodes_interfaces__srv__ResetCount_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nodes_interfaces__srv__ResetCount_Event__Sequence * array = (nodes_interfaces__srv__ResetCount_Event__Sequence *)allocator.allocate(sizeof(nodes_interfaces__srv__ResetCount_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nodes_interfaces__srv__ResetCount_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nodes_interfaces__srv__ResetCount_Event__Sequence__destroy(nodes_interfaces__srv__ResetCount_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nodes_interfaces__srv__ResetCount_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nodes_interfaces__srv__ResetCount_Event__Sequence__are_equal(const nodes_interfaces__srv__ResetCount_Event__Sequence * lhs, const nodes_interfaces__srv__ResetCount_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nodes_interfaces__srv__ResetCount_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nodes_interfaces__srv__ResetCount_Event__Sequence__copy(
  const nodes_interfaces__srv__ResetCount_Event__Sequence * input,
  nodes_interfaces__srv__ResetCount_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nodes_interfaces__srv__ResetCount_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nodes_interfaces__srv__ResetCount_Event * data =
      (nodes_interfaces__srv__ResetCount_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nodes_interfaces__srv__ResetCount_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nodes_interfaces__srv__ResetCount_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nodes_interfaces__srv__ResetCount_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
