// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from nodes_interfaces:msg/CountDelta.idl
// generated code does not contain a copyright notice
#include "nodes_interfaces/msg/detail/count_delta__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
nodes_interfaces__msg__CountDelta__init(nodes_interfaces__msg__CountDelta * msg)
{
  if (!msg) {
    return false;
  }
  // count
  // delta
  return true;
}

void
nodes_interfaces__msg__CountDelta__fini(nodes_interfaces__msg__CountDelta * msg)
{
  if (!msg) {
    return;
  }
  // count
  // delta
}

bool
nodes_interfaces__msg__CountDelta__are_equal(const nodes_interfaces__msg__CountDelta * lhs, const nodes_interfaces__msg__CountDelta * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  // delta
  if (lhs->delta != rhs->delta) {
    return false;
  }
  return true;
}

bool
nodes_interfaces__msg__CountDelta__copy(
  const nodes_interfaces__msg__CountDelta * input,
  nodes_interfaces__msg__CountDelta * output)
{
  if (!input || !output) {
    return false;
  }
  // count
  output->count = input->count;
  // delta
  output->delta = input->delta;
  return true;
}

nodes_interfaces__msg__CountDelta *
nodes_interfaces__msg__CountDelta__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nodes_interfaces__msg__CountDelta * msg = (nodes_interfaces__msg__CountDelta *)allocator.allocate(sizeof(nodes_interfaces__msg__CountDelta), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(nodes_interfaces__msg__CountDelta));
  bool success = nodes_interfaces__msg__CountDelta__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
nodes_interfaces__msg__CountDelta__destroy(nodes_interfaces__msg__CountDelta * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    nodes_interfaces__msg__CountDelta__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
nodes_interfaces__msg__CountDelta__Sequence__init(nodes_interfaces__msg__CountDelta__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nodes_interfaces__msg__CountDelta * data = NULL;

  if (size) {
    data = (nodes_interfaces__msg__CountDelta *)allocator.zero_allocate(size, sizeof(nodes_interfaces__msg__CountDelta), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = nodes_interfaces__msg__CountDelta__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        nodes_interfaces__msg__CountDelta__fini(&data[i - 1]);
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
nodes_interfaces__msg__CountDelta__Sequence__fini(nodes_interfaces__msg__CountDelta__Sequence * array)
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
      nodes_interfaces__msg__CountDelta__fini(&array->data[i]);
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

nodes_interfaces__msg__CountDelta__Sequence *
nodes_interfaces__msg__CountDelta__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  nodes_interfaces__msg__CountDelta__Sequence * array = (nodes_interfaces__msg__CountDelta__Sequence *)allocator.allocate(sizeof(nodes_interfaces__msg__CountDelta__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = nodes_interfaces__msg__CountDelta__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
nodes_interfaces__msg__CountDelta__Sequence__destroy(nodes_interfaces__msg__CountDelta__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    nodes_interfaces__msg__CountDelta__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
nodes_interfaces__msg__CountDelta__Sequence__are_equal(const nodes_interfaces__msg__CountDelta__Sequence * lhs, const nodes_interfaces__msg__CountDelta__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!nodes_interfaces__msg__CountDelta__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
nodes_interfaces__msg__CountDelta__Sequence__copy(
  const nodes_interfaces__msg__CountDelta__Sequence * input,
  nodes_interfaces__msg__CountDelta__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(nodes_interfaces__msg__CountDelta);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    nodes_interfaces__msg__CountDelta * data =
      (nodes_interfaces__msg__CountDelta *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!nodes_interfaces__msg__CountDelta__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          nodes_interfaces__msg__CountDelta__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!nodes_interfaces__msg__CountDelta__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
