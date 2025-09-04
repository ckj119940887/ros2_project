// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from nodes_interfaces:msg/CountDelta.idl
// generated code does not contain a copyright notice

#include "nodes_interfaces/msg/detail/count_delta__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_nodes_interfaces
const rosidl_type_hash_t *
nodes_interfaces__msg__CountDelta__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0xa5, 0xa7, 0x4b, 0x3c, 0x70, 0xad, 0x37,
      0xb3, 0x49, 0x68, 0x69, 0x79, 0x27, 0x0a, 0xe0,
      0xf9, 0xcc, 0xf1, 0x3e, 0x53, 0x87, 0xea, 0xb8,
      0xda, 0xb6, 0x64, 0x5c, 0xde, 0x32, 0xfd, 0xfa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char nodes_interfaces__msg__CountDelta__TYPE_NAME[] = "nodes_interfaces/msg/CountDelta";

// Define type names, field names, and default values
static char nodes_interfaces__msg__CountDelta__FIELD_NAME__count[] = "count";
static char nodes_interfaces__msg__CountDelta__FIELD_NAME__delta[] = "delta";

static rosidl_runtime_c__type_description__Field nodes_interfaces__msg__CountDelta__FIELDS[] = {
  {
    {nodes_interfaces__msg__CountDelta__FIELD_NAME__count, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {nodes_interfaces__msg__CountDelta__FIELD_NAME__delta, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
nodes_interfaces__msg__CountDelta__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {nodes_interfaces__msg__CountDelta__TYPE_NAME, 31, 31},
      {nodes_interfaces__msg__CountDelta__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Message to hold current count and increment value\n"
  "\n"
  "# current count\n"
  "int32 count\n"
  "\n"
  "# increment value\n"
  "int32 delta";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
nodes_interfaces__msg__CountDelta__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {nodes_interfaces__msg__CountDelta__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 111, 111},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
nodes_interfaces__msg__CountDelta__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *nodes_interfaces__msg__CountDelta__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
