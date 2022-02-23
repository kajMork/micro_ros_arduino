// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from brick_feed_cmd:srv/BrickFeedService.idl
// generated code does not contain a copyright notice
#include "brick_feed_cmd/srv/detail/brick_feed_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
brick_feed_cmd__srv__BrickFeedService_Request__init(brick_feed_cmd__srv__BrickFeedService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // brick_count
  // new_goal
  return true;
}

void
brick_feed_cmd__srv__BrickFeedService_Request__fini(brick_feed_cmd__srv__BrickFeedService_Request * msg)
{
  if (!msg) {
    return;
  }
  // brick_count
  // new_goal
}

brick_feed_cmd__srv__BrickFeedService_Request *
brick_feed_cmd__srv__BrickFeedService_Request__create()
{
  brick_feed_cmd__srv__BrickFeedService_Request * msg = (brick_feed_cmd__srv__BrickFeedService_Request *)malloc(sizeof(brick_feed_cmd__srv__BrickFeedService_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(brick_feed_cmd__srv__BrickFeedService_Request));
  bool success = brick_feed_cmd__srv__BrickFeedService_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
brick_feed_cmd__srv__BrickFeedService_Request__destroy(brick_feed_cmd__srv__BrickFeedService_Request * msg)
{
  if (msg) {
    brick_feed_cmd__srv__BrickFeedService_Request__fini(msg);
  }
  free(msg);
}


bool
brick_feed_cmd__srv__BrickFeedService_Request__Sequence__init(brick_feed_cmd__srv__BrickFeedService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  brick_feed_cmd__srv__BrickFeedService_Request * data = NULL;
  if (size) {
    data = (brick_feed_cmd__srv__BrickFeedService_Request *)calloc(size, sizeof(brick_feed_cmd__srv__BrickFeedService_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = brick_feed_cmd__srv__BrickFeedService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        brick_feed_cmd__srv__BrickFeedService_Request__fini(&data[i - 1]);
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
brick_feed_cmd__srv__BrickFeedService_Request__Sequence__fini(brick_feed_cmd__srv__BrickFeedService_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      brick_feed_cmd__srv__BrickFeedService_Request__fini(&array->data[i]);
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

brick_feed_cmd__srv__BrickFeedService_Request__Sequence *
brick_feed_cmd__srv__BrickFeedService_Request__Sequence__create(size_t size)
{
  brick_feed_cmd__srv__BrickFeedService_Request__Sequence * array = (brick_feed_cmd__srv__BrickFeedService_Request__Sequence *)malloc(sizeof(brick_feed_cmd__srv__BrickFeedService_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = brick_feed_cmd__srv__BrickFeedService_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
brick_feed_cmd__srv__BrickFeedService_Request__Sequence__destroy(brick_feed_cmd__srv__BrickFeedService_Request__Sequence * array)
{
  if (array) {
    brick_feed_cmd__srv__BrickFeedService_Request__Sequence__fini(array);
  }
  free(array);
}


bool
brick_feed_cmd__srv__BrickFeedService_Response__init(brick_feed_cmd__srv__BrickFeedService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // finished_goal
  return true;
}

void
brick_feed_cmd__srv__BrickFeedService_Response__fini(brick_feed_cmd__srv__BrickFeedService_Response * msg)
{
  if (!msg) {
    return;
  }
  // finished_goal
}

brick_feed_cmd__srv__BrickFeedService_Response *
brick_feed_cmd__srv__BrickFeedService_Response__create()
{
  brick_feed_cmd__srv__BrickFeedService_Response * msg = (brick_feed_cmd__srv__BrickFeedService_Response *)malloc(sizeof(brick_feed_cmd__srv__BrickFeedService_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(brick_feed_cmd__srv__BrickFeedService_Response));
  bool success = brick_feed_cmd__srv__BrickFeedService_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
brick_feed_cmd__srv__BrickFeedService_Response__destroy(brick_feed_cmd__srv__BrickFeedService_Response * msg)
{
  if (msg) {
    brick_feed_cmd__srv__BrickFeedService_Response__fini(msg);
  }
  free(msg);
}


bool
brick_feed_cmd__srv__BrickFeedService_Response__Sequence__init(brick_feed_cmd__srv__BrickFeedService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  brick_feed_cmd__srv__BrickFeedService_Response * data = NULL;
  if (size) {
    data = (brick_feed_cmd__srv__BrickFeedService_Response *)calloc(size, sizeof(brick_feed_cmd__srv__BrickFeedService_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = brick_feed_cmd__srv__BrickFeedService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        brick_feed_cmd__srv__BrickFeedService_Response__fini(&data[i - 1]);
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
brick_feed_cmd__srv__BrickFeedService_Response__Sequence__fini(brick_feed_cmd__srv__BrickFeedService_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      brick_feed_cmd__srv__BrickFeedService_Response__fini(&array->data[i]);
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

brick_feed_cmd__srv__BrickFeedService_Response__Sequence *
brick_feed_cmd__srv__BrickFeedService_Response__Sequence__create(size_t size)
{
  brick_feed_cmd__srv__BrickFeedService_Response__Sequence * array = (brick_feed_cmd__srv__BrickFeedService_Response__Sequence *)malloc(sizeof(brick_feed_cmd__srv__BrickFeedService_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = brick_feed_cmd__srv__BrickFeedService_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
brick_feed_cmd__srv__BrickFeedService_Response__Sequence__destroy(brick_feed_cmd__srv__BrickFeedService_Response__Sequence * array)
{
  if (array) {
    brick_feed_cmd__srv__BrickFeedService_Response__Sequence__fini(array);
  }
  free(array);
}
