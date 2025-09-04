// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nodes_interfaces:msg/CountDelta.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nodes_interfaces/msg/count_delta.h"


#ifndef NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__STRUCT_H_
#define NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/CountDelta in the package nodes_interfaces.
/**
  * Message to hold current count and increment value
 */
typedef struct nodes_interfaces__msg__CountDelta
{
  /// current count
  int32_t count;
  /// increment value
  int32_t delta;
} nodes_interfaces__msg__CountDelta;

// Struct for a sequence of nodes_interfaces__msg__CountDelta.
typedef struct nodes_interfaces__msg__CountDelta__Sequence
{
  nodes_interfaces__msg__CountDelta * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nodes_interfaces__msg__CountDelta__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__STRUCT_H_
