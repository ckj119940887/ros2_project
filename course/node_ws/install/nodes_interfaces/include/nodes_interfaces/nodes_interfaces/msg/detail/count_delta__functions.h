// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from nodes_interfaces:msg/CountDelta.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "nodes_interfaces/msg/count_delta.h"


#ifndef NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__FUNCTIONS_H_
#define NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "nodes_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "nodes_interfaces/msg/detail/count_delta__struct.h"

/// Initialize msg/CountDelta message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * nodes_interfaces__msg__CountDelta
 * )) before or use
 * nodes_interfaces__msg__CountDelta__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
bool
nodes_interfaces__msg__CountDelta__init(nodes_interfaces__msg__CountDelta * msg);

/// Finalize msg/CountDelta message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
void
nodes_interfaces__msg__CountDelta__fini(nodes_interfaces__msg__CountDelta * msg);

/// Create msg/CountDelta message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * nodes_interfaces__msg__CountDelta__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
nodes_interfaces__msg__CountDelta *
nodes_interfaces__msg__CountDelta__create(void);

/// Destroy msg/CountDelta message.
/**
 * It calls
 * nodes_interfaces__msg__CountDelta__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
void
nodes_interfaces__msg__CountDelta__destroy(nodes_interfaces__msg__CountDelta * msg);

/// Check for msg/CountDelta message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
bool
nodes_interfaces__msg__CountDelta__are_equal(const nodes_interfaces__msg__CountDelta * lhs, const nodes_interfaces__msg__CountDelta * rhs);

/// Copy a msg/CountDelta message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
bool
nodes_interfaces__msg__CountDelta__copy(
  const nodes_interfaces__msg__CountDelta * input,
  nodes_interfaces__msg__CountDelta * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
const rosidl_type_hash_t *
nodes_interfaces__msg__CountDelta__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
nodes_interfaces__msg__CountDelta__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
const rosidl_runtime_c__type_description__TypeSource *
nodes_interfaces__msg__CountDelta__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
nodes_interfaces__msg__CountDelta__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/CountDelta messages.
/**
 * It allocates the memory for the number of elements and calls
 * nodes_interfaces__msg__CountDelta__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
bool
nodes_interfaces__msg__CountDelta__Sequence__init(nodes_interfaces__msg__CountDelta__Sequence * array, size_t size);

/// Finalize array of msg/CountDelta messages.
/**
 * It calls
 * nodes_interfaces__msg__CountDelta__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
void
nodes_interfaces__msg__CountDelta__Sequence__fini(nodes_interfaces__msg__CountDelta__Sequence * array);

/// Create array of msg/CountDelta messages.
/**
 * It allocates the memory for the array and calls
 * nodes_interfaces__msg__CountDelta__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
nodes_interfaces__msg__CountDelta__Sequence *
nodes_interfaces__msg__CountDelta__Sequence__create(size_t size);

/// Destroy array of msg/CountDelta messages.
/**
 * It calls
 * nodes_interfaces__msg__CountDelta__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
void
nodes_interfaces__msg__CountDelta__Sequence__destroy(nodes_interfaces__msg__CountDelta__Sequence * array);

/// Check for msg/CountDelta message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
bool
nodes_interfaces__msg__CountDelta__Sequence__are_equal(const nodes_interfaces__msg__CountDelta__Sequence * lhs, const nodes_interfaces__msg__CountDelta__Sequence * rhs);

/// Copy an array of msg/CountDelta messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
bool
nodes_interfaces__msg__CountDelta__Sequence__copy(
  const nodes_interfaces__msg__CountDelta__Sequence * input,
  nodes_interfaces__msg__CountDelta__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NODES_INTERFACES__MSG__DETAIL__COUNT_DELTA__FUNCTIONS_H_
