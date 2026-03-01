// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from base_interfaces_demo:msg/Num.idl
// generated code does not contain a copyright notice

#include "base_interfaces_demo/msg/detail/num__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_base_interfaces_demo
const rosidl_type_hash_t *
base_interfaces_demo__msg__Num__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x89, 0x87, 0x25, 0x2e, 0x8e, 0xb0, 0x75, 0x2b,
      0x00, 0xdc, 0x9d, 0x40, 0x13, 0x49, 0x8f, 0xaf,
      0x03, 0xd4, 0xba, 0x6a, 0x5a, 0x0c, 0xde, 0x2e,
      0xc1, 0x02, 0x9c, 0x91, 0x17, 0xa2, 0x51, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char base_interfaces_demo__msg__Num__TYPE_NAME[] = "base_interfaces_demo/msg/Num";

// Define type names, field names, and default values
static char base_interfaces_demo__msg__Num__FIELD_NAME__num1[] = "num1";
static char base_interfaces_demo__msg__Num__FIELD_NAME__num2[] = "num2";

static rosidl_runtime_c__type_description__Field base_interfaces_demo__msg__Num__FIELDS[] = {
  {
    {base_interfaces_demo__msg__Num__FIELD_NAME__num1, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {base_interfaces_demo__msg__Num__FIELD_NAME__num2, 4, 4},
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
base_interfaces_demo__msg__Num__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {base_interfaces_demo__msg__Num__TYPE_NAME, 28, 28},
      {base_interfaces_demo__msg__Num__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 num1\n"
  "int32 num2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
base_interfaces_demo__msg__Num__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {base_interfaces_demo__msg__Num__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 22, 22},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
base_interfaces_demo__msg__Num__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *base_interfaces_demo__msg__Num__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
