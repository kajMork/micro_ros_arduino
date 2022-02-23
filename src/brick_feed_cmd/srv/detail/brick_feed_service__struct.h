// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from brick_feed_cmd:srv/BrickFeedService.idl
// generated code does not contain a copyright notice

#ifndef BRICK_FEED_CMD__SRV__DETAIL__BRICK_FEED_SERVICE__STRUCT_H_
#define BRICK_FEED_CMD__SRV__DETAIL__BRICK_FEED_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/BrickFeedService in the package brick_feed_cmd.
typedef struct brick_feed_cmd__srv__BrickFeedService_Request
{
  int64_t brick_count;
  bool new_goal;
} brick_feed_cmd__srv__BrickFeedService_Request;

// Struct for a sequence of brick_feed_cmd__srv__BrickFeedService_Request.
typedef struct brick_feed_cmd__srv__BrickFeedService_Request__Sequence
{
  brick_feed_cmd__srv__BrickFeedService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} brick_feed_cmd__srv__BrickFeedService_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/BrickFeedService in the package brick_feed_cmd.
typedef struct brick_feed_cmd__srv__BrickFeedService_Response
{
  bool finished_goal;
} brick_feed_cmd__srv__BrickFeedService_Response;

// Struct for a sequence of brick_feed_cmd__srv__BrickFeedService_Response.
typedef struct brick_feed_cmd__srv__BrickFeedService_Response__Sequence
{
  brick_feed_cmd__srv__BrickFeedService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} brick_feed_cmd__srv__BrickFeedService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BRICK_FEED_CMD__SRV__DETAIL__BRICK_FEED_SERVICE__STRUCT_H_
