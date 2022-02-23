// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from brick_feed_cmd:msg/BrickFeedMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "brick_feed_cmd/msg/detail/brick_feed_message__rosidl_typesupport_introspection_c.h"
#include "brick_feed_cmd/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "brick_feed_cmd/msg/detail/brick_feed_message__functions.h"
#include "brick_feed_cmd/msg/detail/brick_feed_message__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BrickFeedMessage__rosidl_typesupport_introspection_c__BrickFeedMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  brick_feed_cmd__msg__BrickFeedMessage__init(message_memory);
}

void BrickFeedMessage__rosidl_typesupport_introspection_c__BrickFeedMessage_fini_function(void * message_memory)
{
  brick_feed_cmd__msg__BrickFeedMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BrickFeedMessage__rosidl_typesupport_introspection_c__BrickFeedMessage_message_member_array[1] = {
  {
    "brickscounted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(brick_feed_cmd__msg__BrickFeedMessage, brickscounted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BrickFeedMessage__rosidl_typesupport_introspection_c__BrickFeedMessage_message_members = {
  "brick_feed_cmd__msg",  // message namespace
  "BrickFeedMessage",  // message name
  1,  // number of fields
  sizeof(brick_feed_cmd__msg__BrickFeedMessage),
  BrickFeedMessage__rosidl_typesupport_introspection_c__BrickFeedMessage_message_member_array,  // message members
  BrickFeedMessage__rosidl_typesupport_introspection_c__BrickFeedMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  BrickFeedMessage__rosidl_typesupport_introspection_c__BrickFeedMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BrickFeedMessage__rosidl_typesupport_introspection_c__BrickFeedMessage_message_type_support_handle = {
  0,
  &BrickFeedMessage__rosidl_typesupport_introspection_c__BrickFeedMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_brick_feed_cmd
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, brick_feed_cmd, msg, BrickFeedMessage)() {
  if (!BrickFeedMessage__rosidl_typesupport_introspection_c__BrickFeedMessage_message_type_support_handle.typesupport_identifier) {
    BrickFeedMessage__rosidl_typesupport_introspection_c__BrickFeedMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BrickFeedMessage__rosidl_typesupport_introspection_c__BrickFeedMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
