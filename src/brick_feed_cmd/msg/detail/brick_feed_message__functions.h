// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from brick_feed_cmd:msg/BrickFeedMessage.idl
// generated code does not contain a copyright notice

#ifndef BRICK_FEED_CMD__MSG__DETAIL__BRICK_FEED_MESSAGE__FUNCTIONS_H_
#define BRICK_FEED_CMD__MSG__DETAIL__BRICK_FEED_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "brick_feed_cmd/msg/rosidl_generator_c__visibility_control.h"

#include "brick_feed_cmd/msg/detail/brick_feed_message__struct.h"

/// Initialize msg/BrickFeedMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * brick_feed_cmd__msg__BrickFeedMessage
 * )) before or use
 * brick_feed_cmd__msg__BrickFeedMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
bool
brick_feed_cmd__msg__BrickFeedMessage__init(brick_feed_cmd__msg__BrickFeedMessage * msg);

/// Finalize msg/BrickFeedMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
void
brick_feed_cmd__msg__BrickFeedMessage__fini(brick_feed_cmd__msg__BrickFeedMessage * msg);

/// Create msg/BrickFeedMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * brick_feed_cmd__msg__BrickFeedMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
brick_feed_cmd__msg__BrickFeedMessage *
brick_feed_cmd__msg__BrickFeedMessage__create();

/// Destroy msg/BrickFeedMessage message.
/**
 * It calls
 * brick_feed_cmd__msg__BrickFeedMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
void
brick_feed_cmd__msg__BrickFeedMessage__destroy(brick_feed_cmd__msg__BrickFeedMessage * msg);


/// Initialize array of msg/BrickFeedMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * brick_feed_cmd__msg__BrickFeedMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
bool
brick_feed_cmd__msg__BrickFeedMessage__Sequence__init(brick_feed_cmd__msg__BrickFeedMessage__Sequence * array, size_t size);

/// Finalize array of msg/BrickFeedMessage messages.
/**
 * It calls
 * brick_feed_cmd__msg__BrickFeedMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
void
brick_feed_cmd__msg__BrickFeedMessage__Sequence__fini(brick_feed_cmd__msg__BrickFeedMessage__Sequence * array);

/// Create array of msg/BrickFeedMessage messages.
/**
 * It allocates the memory for the array and calls
 * brick_feed_cmd__msg__BrickFeedMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
brick_feed_cmd__msg__BrickFeedMessage__Sequence *
brick_feed_cmd__msg__BrickFeedMessage__Sequence__create(size_t size);

/// Destroy array of msg/BrickFeedMessage messages.
/**
 * It calls
 * brick_feed_cmd__msg__BrickFeedMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
void
brick_feed_cmd__msg__BrickFeedMessage__Sequence__destroy(brick_feed_cmd__msg__BrickFeedMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // BRICK_FEED_CMD__MSG__DETAIL__BRICK_FEED_MESSAGE__FUNCTIONS_H_
