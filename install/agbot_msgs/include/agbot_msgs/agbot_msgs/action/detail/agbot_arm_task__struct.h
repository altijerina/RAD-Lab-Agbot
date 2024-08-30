// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from agbot_msgs:action/AgbotArmTask.idl
// generated code does not contain a copyright notice

#ifndef AGBOT_MSGS__ACTION__DETAIL__AGBOT_ARM_TASK__STRUCT_H_
#define AGBOT_MSGS__ACTION__DETAIL__AGBOT_ARM_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/AgbotArmTask in the package agbot_msgs.
typedef struct agbot_msgs__action__AgbotArmTask_Goal
{
  int32_t task_number;
} agbot_msgs__action__AgbotArmTask_Goal;

// Struct for a sequence of agbot_msgs__action__AgbotArmTask_Goal.
typedef struct agbot_msgs__action__AgbotArmTask_Goal__Sequence
{
  agbot_msgs__action__AgbotArmTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_msgs__action__AgbotArmTask_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/AgbotArmTask in the package agbot_msgs.
typedef struct agbot_msgs__action__AgbotArmTask_Result
{
  bool success;
} agbot_msgs__action__AgbotArmTask_Result;

// Struct for a sequence of agbot_msgs__action__AgbotArmTask_Result.
typedef struct agbot_msgs__action__AgbotArmTask_Result__Sequence
{
  agbot_msgs__action__AgbotArmTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_msgs__action__AgbotArmTask_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/AgbotArmTask in the package agbot_msgs.
typedef struct agbot_msgs__action__AgbotArmTask_Feedback
{
  int32_t percentage;
} agbot_msgs__action__AgbotArmTask_Feedback;

// Struct for a sequence of agbot_msgs__action__AgbotArmTask_Feedback.
typedef struct agbot_msgs__action__AgbotArmTask_Feedback__Sequence
{
  agbot_msgs__action__AgbotArmTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_msgs__action__AgbotArmTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "agbot_msgs/action/detail/agbot_arm_task__struct.h"

/// Struct defined in action/AgbotArmTask in the package agbot_msgs.
typedef struct agbot_msgs__action__AgbotArmTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  agbot_msgs__action__AgbotArmTask_Goal goal;
} agbot_msgs__action__AgbotArmTask_SendGoal_Request;

// Struct for a sequence of agbot_msgs__action__AgbotArmTask_SendGoal_Request.
typedef struct agbot_msgs__action__AgbotArmTask_SendGoal_Request__Sequence
{
  agbot_msgs__action__AgbotArmTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_msgs__action__AgbotArmTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AgbotArmTask in the package agbot_msgs.
typedef struct agbot_msgs__action__AgbotArmTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} agbot_msgs__action__AgbotArmTask_SendGoal_Response;

// Struct for a sequence of agbot_msgs__action__AgbotArmTask_SendGoal_Response.
typedef struct agbot_msgs__action__AgbotArmTask_SendGoal_Response__Sequence
{
  agbot_msgs__action__AgbotArmTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_msgs__action__AgbotArmTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AgbotArmTask in the package agbot_msgs.
typedef struct agbot_msgs__action__AgbotArmTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} agbot_msgs__action__AgbotArmTask_GetResult_Request;

// Struct for a sequence of agbot_msgs__action__AgbotArmTask_GetResult_Request.
typedef struct agbot_msgs__action__AgbotArmTask_GetResult_Request__Sequence
{
  agbot_msgs__action__AgbotArmTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_msgs__action__AgbotArmTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "agbot_msgs/action/detail/agbot_arm_task__struct.h"

/// Struct defined in action/AgbotArmTask in the package agbot_msgs.
typedef struct agbot_msgs__action__AgbotArmTask_GetResult_Response
{
  int8_t status;
  agbot_msgs__action__AgbotArmTask_Result result;
} agbot_msgs__action__AgbotArmTask_GetResult_Response;

// Struct for a sequence of agbot_msgs__action__AgbotArmTask_GetResult_Response.
typedef struct agbot_msgs__action__AgbotArmTask_GetResult_Response__Sequence
{
  agbot_msgs__action__AgbotArmTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_msgs__action__AgbotArmTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "agbot_msgs/action/detail/agbot_arm_task__struct.h"

/// Struct defined in action/AgbotArmTask in the package agbot_msgs.
typedef struct agbot_msgs__action__AgbotArmTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  agbot_msgs__action__AgbotArmTask_Feedback feedback;
} agbot_msgs__action__AgbotArmTask_FeedbackMessage;

// Struct for a sequence of agbot_msgs__action__AgbotArmTask_FeedbackMessage.
typedef struct agbot_msgs__action__AgbotArmTask_FeedbackMessage__Sequence
{
  agbot_msgs__action__AgbotArmTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_msgs__action__AgbotArmTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AGBOT_MSGS__ACTION__DETAIL__AGBOT_ARM_TASK__STRUCT_H_
