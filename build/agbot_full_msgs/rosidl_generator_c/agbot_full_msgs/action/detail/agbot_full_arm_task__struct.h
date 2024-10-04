// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from agbot_full_msgs:action/AgbotFullArmTask.idl
// generated code does not contain a copyright notice

#ifndef AGBOT_FULL_MSGS__ACTION__DETAIL__AGBOT_FULL_ARM_TASK__STRUCT_H_
#define AGBOT_FULL_MSGS__ACTION__DETAIL__AGBOT_FULL_ARM_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/AgbotFullArmTask in the package agbot_full_msgs.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_Goal
{
  int32_t task_number;
} agbot_full_msgs__action__AgbotFullArmTask_Goal;

// Struct for a sequence of agbot_full_msgs__action__AgbotFullArmTask_Goal.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence
{
  agbot_full_msgs__action__AgbotFullArmTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_full_msgs__action__AgbotFullArmTask_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/AgbotFullArmTask in the package agbot_full_msgs.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_Result
{
  bool success;
} agbot_full_msgs__action__AgbotFullArmTask_Result;

// Struct for a sequence of agbot_full_msgs__action__AgbotFullArmTask_Result.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence
{
  agbot_full_msgs__action__AgbotFullArmTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_full_msgs__action__AgbotFullArmTask_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/AgbotFullArmTask in the package agbot_full_msgs.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_Feedback
{
  int32_t percentage;
} agbot_full_msgs__action__AgbotFullArmTask_Feedback;

// Struct for a sequence of agbot_full_msgs__action__AgbotFullArmTask_Feedback.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence
{
  agbot_full_msgs__action__AgbotFullArmTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_full_msgs__action__AgbotFullArmTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "agbot_full_msgs/action/detail/agbot_full_arm_task__struct.h"

/// Struct defined in action/AgbotFullArmTask in the package agbot_full_msgs.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  agbot_full_msgs__action__AgbotFullArmTask_Goal goal;
} agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request;

// Struct for a sequence of agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence
{
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AgbotFullArmTask in the package agbot_full_msgs.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response;

// Struct for a sequence of agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence
{
  agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_full_msgs__action__AgbotFullArmTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AgbotFullArmTask in the package agbot_full_msgs.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request;

// Struct for a sequence of agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence
{
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_full_msgs__action__AgbotFullArmTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "agbot_full_msgs/action/detail/agbot_full_arm_task__struct.h"

/// Struct defined in action/AgbotFullArmTask in the package agbot_full_msgs.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response
{
  int8_t status;
  agbot_full_msgs__action__AgbotFullArmTask_Result result;
} agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response;

// Struct for a sequence of agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence
{
  agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_full_msgs__action__AgbotFullArmTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "agbot_full_msgs/action/detail/agbot_full_arm_task__struct.h"

/// Struct defined in action/AgbotFullArmTask in the package agbot_full_msgs.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  agbot_full_msgs__action__AgbotFullArmTask_Feedback feedback;
} agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage;

// Struct for a sequence of agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage.
typedef struct agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence
{
  agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agbot_full_msgs__action__AgbotFullArmTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AGBOT_FULL_MSGS__ACTION__DETAIL__AGBOT_FULL_ARM_TASK__STRUCT_H_
