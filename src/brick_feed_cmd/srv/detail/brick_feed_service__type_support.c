// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from brick_feed_cmd:srv/BrickFeedService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "brick_feed_cmd/srv/detail/brick_feed_service__rosidl_typesupport_introspection_c.h"
#include "brick_feed_cmd/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "brick_feed_cmd/srv/detail/brick_feed_service__functions.h"
#include "brick_feed_cmd/srv/detail/brick_feed_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BrickFeedService_Request__rosidl_typesupport_introspection_c__BrickFeedService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  brick_feed_cmd__srv__BrickFeedService_Request__init(message_memory);
}

void BrickFeedService_Request__rosidl_typesupport_introspection_c__BrickFeedService_Request_fini_function(void * message_memory)
{
  brick_feed_cmd__srv__BrickFeedService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BrickFeedService_Request__rosidl_typesupport_introspection_c__BrickFeedService_Request_message_member_array[2] = {
  {
    "brick_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(brick_feed_cmd__srv__BrickFeedService_Request, brick_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "new_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(brick_feed_cmd__srv__BrickFeedService_Request, new_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BrickFeedService_Request__rosidl_typesupport_introspection_c__BrickFeedService_Request_message_members = {
  "brick_feed_cmd__srv",  // message namespace
  "BrickFeedService_Request",  // message name
  2,  // number of fields
  sizeof(brick_feed_cmd__srv__BrickFeedService_Request),
  BrickFeedService_Request__rosidl_typesupport_introspection_c__BrickFeedService_Request_message_member_array,  // message members
  BrickFeedService_Request__rosidl_typesupport_introspection_c__BrickFeedService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  BrickFeedService_Request__rosidl_typesupport_introspection_c__BrickFeedService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BrickFeedService_Request__rosidl_typesupport_introspection_c__BrickFeedService_Request_message_type_support_handle = {
  0,
  &BrickFeedService_Request__rosidl_typesupport_introspection_c__BrickFeedService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_brick_feed_cmd
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, brick_feed_cmd, srv, BrickFeedService_Request)() {
  if (!BrickFeedService_Request__rosidl_typesupport_introspection_c__BrickFeedService_Request_message_type_support_handle.typesupport_identifier) {
    BrickFeedService_Request__rosidl_typesupport_introspection_c__BrickFeedService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BrickFeedService_Request__rosidl_typesupport_introspection_c__BrickFeedService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "brick_feed_cmd/srv/detail/brick_feed_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "brick_feed_cmd/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "brick_feed_cmd/srv/detail/brick_feed_service__functions.h"
// already included above
// #include "brick_feed_cmd/srv/detail/brick_feed_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void BrickFeedService_Response__rosidl_typesupport_introspection_c__BrickFeedService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  brick_feed_cmd__srv__BrickFeedService_Response__init(message_memory);
}

void BrickFeedService_Response__rosidl_typesupport_introspection_c__BrickFeedService_Response_fini_function(void * message_memory)
{
  brick_feed_cmd__srv__BrickFeedService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember BrickFeedService_Response__rosidl_typesupport_introspection_c__BrickFeedService_Response_message_member_array[1] = {
  {
    "finished_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(brick_feed_cmd__srv__BrickFeedService_Response, finished_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers BrickFeedService_Response__rosidl_typesupport_introspection_c__BrickFeedService_Response_message_members = {
  "brick_feed_cmd__srv",  // message namespace
  "BrickFeedService_Response",  // message name
  1,  // number of fields
  sizeof(brick_feed_cmd__srv__BrickFeedService_Response),
  BrickFeedService_Response__rosidl_typesupport_introspection_c__BrickFeedService_Response_message_member_array,  // message members
  BrickFeedService_Response__rosidl_typesupport_introspection_c__BrickFeedService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  BrickFeedService_Response__rosidl_typesupport_introspection_c__BrickFeedService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t BrickFeedService_Response__rosidl_typesupport_introspection_c__BrickFeedService_Response_message_type_support_handle = {
  0,
  &BrickFeedService_Response__rosidl_typesupport_introspection_c__BrickFeedService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_brick_feed_cmd
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, brick_feed_cmd, srv, BrickFeedService_Response)() {
  if (!BrickFeedService_Response__rosidl_typesupport_introspection_c__BrickFeedService_Response_message_type_support_handle.typesupport_identifier) {
    BrickFeedService_Response__rosidl_typesupport_introspection_c__BrickFeedService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &BrickFeedService_Response__rosidl_typesupport_introspection_c__BrickFeedService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "brick_feed_cmd/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "brick_feed_cmd/srv/detail/brick_feed_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers brick_feed_cmd__srv__detail__brick_feed_service__rosidl_typesupport_introspection_c__BrickFeedService_service_members = {
  "brick_feed_cmd__srv",  // service namespace
  "BrickFeedService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // brick_feed_cmd__srv__detail__brick_feed_service__rosidl_typesupport_introspection_c__BrickFeedService_Request_message_type_support_handle,
  NULL  // response message
  // brick_feed_cmd__srv__detail__brick_feed_service__rosidl_typesupport_introspection_c__BrickFeedService_Response_message_type_support_handle
};

static rosidl_service_type_support_t brick_feed_cmd__srv__detail__brick_feed_service__rosidl_typesupport_introspection_c__BrickFeedService_service_type_support_handle = {
  0,
  &brick_feed_cmd__srv__detail__brick_feed_service__rosidl_typesupport_introspection_c__BrickFeedService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, brick_feed_cmd, srv, BrickFeedService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, brick_feed_cmd, srv, BrickFeedService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_brick_feed_cmd
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, brick_feed_cmd, srv, BrickFeedService)() {
  if (!brick_feed_cmd__srv__detail__brick_feed_service__rosidl_typesupport_introspection_c__BrickFeedService_service_type_support_handle.typesupport_identifier) {
    brick_feed_cmd__srv__detail__brick_feed_service__rosidl_typesupport_introspection_c__BrickFeedService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)brick_feed_cmd__srv__detail__brick_feed_service__rosidl_typesupport_introspection_c__BrickFeedService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, brick_feed_cmd, srv, BrickFeedService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, brick_feed_cmd, srv, BrickFeedService_Response)()->data;
  }

  return &brick_feed_cmd__srv__detail__brick_feed_service__rosidl_typesupport_introspection_c__BrickFeedService_service_type_support_handle;
}
