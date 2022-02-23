// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from brick_feed_cmd:srv/BrickFeedService.idl
// generated code does not contain a copyright notice

#ifndef BRICK_FEED_CMD__SRV__DETAIL__BRICK_FEED_SERVICE__FUNCTIONS_H_
#define BRICK_FEED_CMD__SRV__DETAIL__BRICK_FEED_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "brick_feed_cmd/msg/rosidl_generator_c__visibility_control.h"

#include "brick_feed_cmd/srv/detail/brick_feed_service__struct.h"

/// Initialize srv/BrickFeedService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * brick_feed_cmd__srv__BrickFeedService_Request
 * )) before or use
 * brick_feed_cmd__srv__BrickFeedService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
bool
brick_feed_cmd__srv__BrickFeedService_Request__init(brick_feed_cmd__srv__BrickFeedService_Request * msg);

/// Finalize srv/BrickFeedService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
void
brick_feed_cmd__srv__BrickFeedService_Request__fini(brick_feed_cmd__srv__BrickFeedService_Request * msg);

/// Create srv/BrickFeedService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * brick_feed_cmd__srv__BrickFeedService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
brick_feed_cmd__srv__BrickFeedService_Request *
brick_feed_cmd__srv__BrickFeedService_Request__create();

/// Destroy srv/BrickFeedService message.
/**
 * It calls
 * brick_feed_cmd__srv__BrickFeedService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
void
brick_feed_cmd__srv__BrickFeedService_Request__destroy(brick_feed_cmd__srv__BrickFeedService_Request * msg);


/// Initialize array of srv/BrickFeedService messages.
/**
 * It allocates the memory for the number of elements and calls
 * brick_feed_cmd__srv__BrickFeedService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
bool
brick_feed_cmd__srv__BrickFeedService_Request__Sequence__init(brick_feed_cmd__srv__BrickFeedService_Request__Sequence * array, size_t size);

/// Finalize array of srv/BrickFeedService messages.
/**
 * It calls
 * brick_feed_cmd__srv__BrickFeedService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
void
brick_feed_cmd__srv__BrickFeedService_Request__Sequence__fini(brick_feed_cmd__srv__BrickFeedService_Request__Sequence * array);

/// Create array of srv/BrickFeedService messages.
/**
 * It allocates the memory for the array and calls
 * brick_feed_cmd__srv__BrickFeedService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
brick_feed_cmd__srv__BrickFeedService_Request__Sequence *
brick_feed_cmd__srv__BrickFeedService_Request__Sequence__create(size_t size);

/// Destroy array of srv/BrickFeedService messages.
/**
 * It calls
 * brick_feed_cmd__srv__BrickFeedService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
void
brick_feed_cmd__srv__BrickFeedService_Request__Sequence__destroy(brick_feed_cmd__srv__BrickFeedService_Request__Sequence * array);

/// Initialize srv/BrickFeedService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * brick_feed_cmd__srv__BrickFeedService_Response
 * )) before or use
 * brick_feed_cmd__srv__BrickFeedService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
bool
brick_feed_cmd__srv__BrickFeedService_Response__init(brick_feed_cmd__srv__BrickFeedService_Response * msg);

/// Finalize srv/BrickFeedService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
void
brick_feed_cmd__srv__BrickFeedService_Response__fini(brick_feed_cmd__srv__BrickFeedService_Response * msg);

/// Create srv/BrickFeedService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * brick_feed_cmd__srv__BrickFeedService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
brick_feed_cmd__srv__BrickFeedService_Response *
brick_feed_cmd__srv__BrickFeedService_Response__create();

/// Destroy srv/BrickFeedService message.
/**
 * It calls
 * brick_feed_cmd__srv__BrickFeedService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
void
brick_feed_cmd__srv__BrickFeedService_Response__destroy(brick_feed_cmd__srv__BrickFeedService_Response * msg);


/// Initialize array of srv/BrickFeedService messages.
/**
 * It allocates the memory for the number of elements and calls
 * brick_feed_cmd__srv__BrickFeedService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
bool
brick_feed_cmd__srv__BrickFeedService_Response__Sequence__init(brick_feed_cmd__srv__BrickFeedService_Response__Sequence * array, size_t size);

/// Finalize array of srv/BrickFeedService messages.
/**
 * It calls
 * brick_feed_cmd__srv__BrickFeedService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
void
brick_feed_cmd__srv__BrickFeedService_Response__Sequence__fini(brick_feed_cmd__srv__BrickFeedService_Response__Sequence * array);

/// Create array of srv/BrickFeedService messages.
/**
 * It allocates the memory for the array and calls
 * brick_feed_cmd__srv__BrickFeedService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
brick_feed_cmd__srv__BrickFeedService_Response__Sequence *
brick_feed_cmd__srv__BrickFeedService_Response__Sequence__create(size_t size);

/// Destroy array of srv/BrickFeedService messages.
/**
 * It calls
 * brick_feed_cmd__srv__BrickFeedService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_brick_feed_cmd
void
brick_feed_cmd__srv__BrickFeedService_Response__Sequence__destroy(brick_feed_cmd__srv__BrickFeedService_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // BRICK_FEED_CMD__SRV__DETAIL__BRICK_FEED_SERVICE__FUNCTIONS_H_
