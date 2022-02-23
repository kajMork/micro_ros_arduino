// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from brick_feed_cmd:msg/BrickFeedMessage.idl
// generated code does not contain a copyright notice

#ifndef BRICK_FEED_CMD__MSG__DETAIL__BRICK_FEED_MESSAGE__STRUCT_H_
#define BRICK_FEED_CMD__MSG__DETAIL__BRICK_FEED_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/BrickFeedMessage in the package brick_feed_cmd.
typedef struct brick_feed_cmd__msg__BrickFeedMessage
{
  int64_t brickscounted;
} brick_feed_cmd__msg__BrickFeedMessage;

// Struct for a sequence of brick_feed_cmd__msg__BrickFeedMessage.
typedef struct brick_feed_cmd__msg__BrickFeedMessage__Sequence
{
  brick_feed_cmd__msg__BrickFeedMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} brick_feed_cmd__msg__BrickFeedMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BRICK_FEED_CMD__MSG__DETAIL__BRICK_FEED_MESSAGE__STRUCT_H_
