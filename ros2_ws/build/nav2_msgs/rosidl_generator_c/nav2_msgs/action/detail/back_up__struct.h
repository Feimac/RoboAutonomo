// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from nav2_msgs:action/BackUp.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__ACTION__DETAIL__BACK_UP__STRUCT_H_
#define NAV2_MSGS__ACTION__DETAIL__BACK_UP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'time_allowance'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/BackUp in the package nav2_msgs.
typedef struct nav2_msgs__action__BackUp_Goal
{
  /// goal definition
  geometry_msgs__msg__Point target;
  float speed;
  builtin_interfaces__msg__Duration time_allowance;
  bool disable_collision_checks;
} nav2_msgs__action__BackUp_Goal;

// Struct for a sequence of nav2_msgs__action__BackUp_Goal.
typedef struct nav2_msgs__action__BackUp_Goal__Sequence
{
  nav2_msgs__action__BackUp_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__BackUp_Goal__Sequence;


// Constants defined in the message

/// Constant 'NONE'.
/**
  * Error codes
  * Note: The expected priority order of the error should match the message order
 */
enum
{
  nav2_msgs__action__BackUp_Result__NONE = 0
};

/// Constant 'UNKNOWN'.
enum
{
  nav2_msgs__action__BackUp_Result__UNKNOWN = 710
};

/// Constant 'TIMEOUT'.
enum
{
  nav2_msgs__action__BackUp_Result__TIMEOUT = 711
};

/// Constant 'TF_ERROR'.
enum
{
  nav2_msgs__action__BackUp_Result__TF_ERROR = 712
};

/// Constant 'INVALID_INPUT'.
enum
{
  nav2_msgs__action__BackUp_Result__INVALID_INPUT = 713
};

/// Constant 'COLLISION_AHEAD'.
enum
{
  nav2_msgs__action__BackUp_Result__COLLISION_AHEAD = 714
};

// Include directives for member types
// Member 'total_elapsed_time'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"
// Member 'error_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/BackUp in the package nav2_msgs.
typedef struct nav2_msgs__action__BackUp_Result
{
  builtin_interfaces__msg__Duration total_elapsed_time;
  uint16_t error_code;
  rosidl_runtime_c__String error_msg;
} nav2_msgs__action__BackUp_Result;

// Struct for a sequence of nav2_msgs__action__BackUp_Result.
typedef struct nav2_msgs__action__BackUp_Result__Sequence
{
  nav2_msgs__action__BackUp_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__BackUp_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/BackUp in the package nav2_msgs.
typedef struct nav2_msgs__action__BackUp_Feedback
{
  float distance_traveled;
} nav2_msgs__action__BackUp_Feedback;

// Struct for a sequence of nav2_msgs__action__BackUp_Feedback.
typedef struct nav2_msgs__action__BackUp_Feedback__Sequence
{
  nav2_msgs__action__BackUp_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__BackUp_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "nav2_msgs/action/detail/back_up__struct.h"

/// Struct defined in action/BackUp in the package nav2_msgs.
typedef struct nav2_msgs__action__BackUp_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__BackUp_Goal goal;
} nav2_msgs__action__BackUp_SendGoal_Request;

// Struct for a sequence of nav2_msgs__action__BackUp_SendGoal_Request.
typedef struct nav2_msgs__action__BackUp_SendGoal_Request__Sequence
{
  nav2_msgs__action__BackUp_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__BackUp_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/BackUp in the package nav2_msgs.
typedef struct nav2_msgs__action__BackUp_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} nav2_msgs__action__BackUp_SendGoal_Response;

// Struct for a sequence of nav2_msgs__action__BackUp_SendGoal_Response.
typedef struct nav2_msgs__action__BackUp_SendGoal_Response__Sequence
{
  nav2_msgs__action__BackUp_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__BackUp_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/BackUp in the package nav2_msgs.
typedef struct nav2_msgs__action__BackUp_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} nav2_msgs__action__BackUp_GetResult_Request;

// Struct for a sequence of nav2_msgs__action__BackUp_GetResult_Request.
typedef struct nav2_msgs__action__BackUp_GetResult_Request__Sequence
{
  nav2_msgs__action__BackUp_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__BackUp_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "nav2_msgs/action/detail/back_up__struct.h"

/// Struct defined in action/BackUp in the package nav2_msgs.
typedef struct nav2_msgs__action__BackUp_GetResult_Response
{
  int8_t status;
  nav2_msgs__action__BackUp_Result result;
} nav2_msgs__action__BackUp_GetResult_Response;

// Struct for a sequence of nav2_msgs__action__BackUp_GetResult_Response.
typedef struct nav2_msgs__action__BackUp_GetResult_Response__Sequence
{
  nav2_msgs__action__BackUp_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__BackUp_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "nav2_msgs/action/detail/back_up__struct.h"

/// Struct defined in action/BackUp in the package nav2_msgs.
typedef struct nav2_msgs__action__BackUp_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  nav2_msgs__action__BackUp_Feedback feedback;
} nav2_msgs__action__BackUp_FeedbackMessage;

// Struct for a sequence of nav2_msgs__action__BackUp_FeedbackMessage.
typedef struct nav2_msgs__action__BackUp_FeedbackMessage__Sequence
{
  nav2_msgs__action__BackUp_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} nav2_msgs__action__BackUp_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAV2_MSGS__ACTION__DETAIL__BACK_UP__STRUCT_H_
