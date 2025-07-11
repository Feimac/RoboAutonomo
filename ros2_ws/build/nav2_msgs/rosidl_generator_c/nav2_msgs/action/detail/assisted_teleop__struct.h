// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:action/AssistedTeleop.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DETAIL__ASSISTED_TELEOP__STRUCT_H_
#define NAV2_MSGS__ACTION__DETAIL__ASSISTED_TELEOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time_allowance'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/AssistedTeleop in the package nav2_msgs.
typedef struct nav2_msgs__action__AssistedTeleop_Goal
{
  builtin_interfaces__msg__Duration time_allowance;
} nav2_msgs__action__AssistedTeleop_Goal;

// Struct for a sequence of nav2_msgs__action__AssistedTeleop_Goal.
typedef struct nav2_msgs__action__AssistedTeleop_Goal__Sequence
{
  nav2_msgs__action__AssistedTeleop_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__AssistedTeleop_Goal__Sequence;


// Constants defined in the message

/// Constant 'NONE'.
/**
  * Error codes
  * Note: The expected priority order of the error should match the message order
 */
enum
{
  nav2_msgs__action__AssistedTeleop_Result__NONE = 0
};

/// Constant 'UNKNOWN'.
enum
{
  nav2_msgs__action__AssistedTeleop_Result__UNKNOWN = 730
};

/// Constant 'TIMEOUT'.
enum
{
  nav2_msgs__action__AssistedTeleop_Result__TIMEOUT = 731
};

/// Constant 'TF_ERROR'.
enum
{
  nav2_msgs__action__AssistedTeleop_Result__TF_ERROR = 732
};

// Include directives for member types
// Member 'total_elapsed_time'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'error_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/AssistedTeleop in the package nav2_msgs.
typedef struct nav2_msgs__action__AssistedTeleop_Result
{
  builtin_interfaces__msg__Duration total_elapsed_time;
  uint16_t error_code;
  rosidl_runtime_c__String error_msg;
} nav2_msgs__action__AssistedTeleop_Result;

// Struct for a sequence of nav2_msgs__action__AssistedTeleop_Result.
typedef struct nav2_msgs__action__AssistedTeleop_Result__Sequence
{
  nav2_msgs__action__AssistedTeleop_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__AssistedTeleop_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_teleop_duration'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/AssistedTeleop in the package nav2_msgs.
typedef struct nav2_msgs__action__AssistedTeleop_Feedback
{
  builtin_interfaces__msg__Duration current_teleop_duration;
} nav2_msgs__action__AssistedTeleop_Feedback;

// Struct for a sequence of nav2_msgs__action__AssistedTeleop_Feedback.
typedef struct nav2_msgs__action__AssistedTeleop_Feedback__Sequence
{
  nav2_msgs__action__AssistedTeleop_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__AssistedTeleop_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "nav2_msgs/action/detail/assisted_teleop__struct.h"

/// Struct defined in action/AssistedTeleop in the package nav2_msgs.
typedef struct nav2_msgs__action__AssistedTeleop_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__AssistedTeleop_Goal goal;
} nav2_msgs__action__AssistedTeleop_SendGoal_Request;

// Struct for a sequence of nav2_msgs__action__AssistedTeleop_SendGoal_Request.
typedef struct nav2_msgs__action__AssistedTeleop_SendGoal_Request__Sequence
{
  nav2_msgs__action__AssistedTeleop_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__AssistedTeleop_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AssistedTeleop in the package nav2_msgs.
typedef struct nav2_msgs__action__AssistedTeleop_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nav2_msgs__action__AssistedTeleop_SendGoal_Response;

// Struct for a sequence of nav2_msgs__action__AssistedTeleop_SendGoal_Response.
typedef struct nav2_msgs__action__AssistedTeleop_SendGoal_Response__Sequence
{
  nav2_msgs__action__AssistedTeleop_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__AssistedTeleop_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AssistedTeleop in the package nav2_msgs.
typedef struct nav2_msgs__action__AssistedTeleop_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nav2_msgs__action__AssistedTeleop_GetResult_Request;

// Struct for a sequence of nav2_msgs__action__AssistedTeleop_GetResult_Request.
typedef struct nav2_msgs__action__AssistedTeleop_GetResult_Request__Sequence
{
  nav2_msgs__action__AssistedTeleop_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__AssistedTeleop_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/assisted_teleop__struct.h"

/// Struct defined in action/AssistedTeleop in the package nav2_msgs.
typedef struct nav2_msgs__action__AssistedTeleop_GetResult_Response
{
  int8_t status;
  nav2_msgs__action__AssistedTeleop_Result result;
} nav2_msgs__action__AssistedTeleop_GetResult_Response;

// Struct for a sequence of nav2_msgs__action__AssistedTeleop_GetResult_Response.
typedef struct nav2_msgs__action__AssistedTeleop_GetResult_Response__Sequence
{
  nav2_msgs__action__AssistedTeleop_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__AssistedTeleop_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/assisted_teleop__struct.h"

/// Struct defined in action/AssistedTeleop in the package nav2_msgs.
typedef struct nav2_msgs__action__AssistedTeleop_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__AssistedTeleop_Feedback feedback;
} nav2_msgs__action__AssistedTeleop_FeedbackMessage;

// Struct for a sequence of nav2_msgs__action__AssistedTeleop_FeedbackMessage.
typedef struct nav2_msgs__action__AssistedTeleop_FeedbackMessage__Sequence
{
  nav2_msgs__action__AssistedTeleop_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__AssistedTeleop_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__ACTION__DETAIL__ASSISTED_TELEOP__STRUCT_H_
