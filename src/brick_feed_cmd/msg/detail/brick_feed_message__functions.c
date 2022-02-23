// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from brick_feed_cmd:msg/BrickFeedMessage.idl
// generated code does not contain a copyright notice
#include "brick_feed_cmd/msg/detail/brick_feed_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
brick_feed_cmd__msg__BrickFeedMessage__init(brick_feed_cmd__msg__BrickFeedMessage * msg)
{
  if (!msg) {
    return false;
  }
  // brickscounted
  return true;
}

void
brick_feed_cmd__msg__BrickFeedMessage__fini(brick_feed_cmd__msg__BrickFeedMessage * msg)
{
  if (!msg) {
    return;
  }
  // brickscounted
}

brick_feed_cmd__msg__BrickFeedMessage *
brick_feed_cmd__msg__BrickFeedMessage__create()
{
  brick_feed_cmd__msg__BrickFeedMessage * msg = (brick_feed_cmd__msg__BrickFeedMessage *)malloc(sizeof(brick_feed_cmd__msg__BrickFeedMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(brick_feed_cmd__msg__BrickFeedMessage));
  bool success = brick_feed_cmd__msg__BrickFeedMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
brick_feed_cmd__msg__BrickFeedMessage__destroy(brick_feed_cmd__msg__BrickFeedMessage * msg)
{
  if (msg) {
    brick_feed_cmd__msg__BrickFeedMessage__fini(msg);
  }
  free(msg);
}


bool
brick_feed_cmd__msg__BrickFeedMessage__Sequence__init(brick_feed_cmd__msg__BrickFeedMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  brick_feed_cmd__msg__BrickFeedMessage * data = NULL;
  if (size) {
    data = (brick_feed_cmd__msg__BrickFeedMessage *)calloc(size, sizeof(brick_feed_cmd__msg__BrickFeedMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = brick_feed_cmd__msg__BrickFeedMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        brick_feed_cmd__msg__BrickFeedMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
brick_feed_cmd__msg__BrickFeedMessage__Sequence__fini(brick_feed_cmd__msg__BrickFeedMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      brick_feed_cmd__msg__BrickFeedMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

brick_feed_cmd__msg__BrickFeedMessage__Sequence *
brick_feed_cmd__msg__BrickFeedMessage__Sequence__create(size_t size)
{
  brick_feed_cmd__msg__BrickFeedMessage__Sequence * array = (brick_feed_cmd__msg__BrickFeedMessage__Sequence *)malloc(sizeof(brick_feed_cmd__msg__BrickFeedMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = brick_feed_cmd__msg__BrickFeedMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
brick_feed_cmd__msg__BrickFeedMessage__Sequence__destroy(brick_feed_cmd__msg__BrickFeedMessage__Sequence * array)
{
  if (array) {
    brick_feed_cmd__msg__BrickFeedMessage__Sequence__fini(array);
  }
  free(array);
}
