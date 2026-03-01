// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from base_interfaces_demo:msg/Num.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "base_interfaces_demo/msg/num.h"


#ifndef BASE_INTERFACES_DEMO__MSG__DETAIL__NUM__STRUCT_H_
#define BASE_INTERFACES_DEMO__MSG__DETAIL__NUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Num in the package base_interfaces_demo.
typedef struct base_interfaces_demo__msg__Num
{
  int32_t num1;
  int32_t num2;
} base_interfaces_demo__msg__Num;

// Struct for a sequence of base_interfaces_demo__msg__Num.
typedef struct base_interfaces_demo__msg__Num__Sequence
{
  base_interfaces_demo__msg__Num * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} base_interfaces_demo__msg__Num__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BASE_INTERFACES_DEMO__MSG__DETAIL__NUM__STRUCT_H_
