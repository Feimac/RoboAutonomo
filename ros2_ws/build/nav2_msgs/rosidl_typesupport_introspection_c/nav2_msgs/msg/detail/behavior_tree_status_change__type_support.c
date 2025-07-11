// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav2_msgs:msg/BehaviorTreeStatusChange.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav2_msgs/msg/detail/behavior_tree_status_change__rosidl_typesupport_introspection_c.h"
#include "nav2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav2_msgs/msg/detail/behavior_tree_status_change__functions.h"
#include "nav2_msgs/msg/detail/behavior_tree_status_change__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `node_name`
// Member `previous_status`
// Member `current_status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void nav2_msgs__msg__BehaviorTreeStatusChange__rosidl_typesupport_introspection_c__BehaviorTreeStatusChange_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav2_msgs__msg__BehaviorTreeStatusChange__init(message_memory);
}

void nav2_msgs__msg__BehaviorTreeStatusChange__rosidl_typesupport_introspection_c__BehaviorTreeStatusChange_fini_function(void * message_memory)
{
  nav2_msgs__msg__BehaviorTreeStatusChange__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember nav2_msgs__msg__BehaviorTreeStatusChange__rosidl_typesupport_introspection_c__BehaviorTreeStatusChange_message_member_array[5] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__BehaviorTreeStatusChange, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__BehaviorTreeStatusChange, node_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__BehaviorTreeStatusChange, uid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "previous_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__BehaviorTreeStatusChange, previous_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav2_msgs__msg__BehaviorTreeStatusChange, current_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers nav2_msgs__msg__BehaviorTreeStatusChange__rosidl_typesupport_introspection_c__BehaviorTreeStatusChange_message_members = {
  "nav2_msgs__msg",  // message namespace
  "BehaviorTreeStatusChange",  // message name
  5,  // number of fields
  sizeof(nav2_msgs__msg__BehaviorTreeStatusChange),
  nav2_msgs__msg__BehaviorTreeStatusChange__rosidl_typesupport_introspection_c__BehaviorTreeStatusChange_message_member_array,  // message members
  nav2_msgs__msg__BehaviorTreeStatusChange__rosidl_typesupport_introspection_c__BehaviorTreeStatusChange_init_function,  // function to initialize message memory (memory has to be allocated)
  nav2_msgs__msg__BehaviorTreeStatusChange__rosidl_typesupport_introspection_c__BehaviorTreeStatusChange_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t nav2_msgs__msg__BehaviorTreeStatusChange__rosidl_typesupport_introspection_c__BehaviorTreeStatusChange_message_type_support_handle = {
  0,
  &nav2_msgs__msg__BehaviorTreeStatusChange__rosidl_typesupport_introspection_c__BehaviorTreeStatusChange_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav2_msgs, msg, BehaviorTreeStatusChange)() {
  nav2_msgs__msg__BehaviorTreeStatusChange__rosidl_typesupport_introspection_c__BehaviorTreeStatusChange_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!nav2_msgs__msg__BehaviorTreeStatusChange__rosidl_typesupport_introspection_c__BehaviorTreeStatusChange_message_type_support_handle.typesupport_identifier) {
    nav2_msgs__msg__BehaviorTreeStatusChange__rosidl_typesupport_introspection_c__BehaviorTreeStatusChange_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &nav2_msgs__msg__BehaviorTreeStatusChange__rosidl_typesupport_introspection_c__BehaviorTreeStatusChange_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
