# generated from rosidl_generator_py/resource/_idl.py.em
# with input from nav2_msgs:action/ComputePathThroughPoses.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ComputePathThroughPoses_Goal(type):
    """Metaclass of message 'ComputePathThroughPoses_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.ComputePathThroughPoses_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_through_poses__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_through_poses__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_through_poses__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_through_poses__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_through_poses__goal

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePathThroughPoses_Goal(metaclass=Metaclass_ComputePathThroughPoses_Goal):
    """Message class 'ComputePathThroughPoses_Goal'."""

    __slots__ = [
        '_goals',
        '_start',
        '_planner_id',
        '_use_start',
    ]

    _fields_and_field_types = {
        'goals': 'sequence<geometry_msgs/PoseStamped>',
        'start': 'geometry_msgs/PoseStamped',
        'planner_id': 'string',
        'use_start': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.goals = kwargs.get('goals', [])
        from geometry_msgs.msg import PoseStamped
        self.start = kwargs.get('start', PoseStamped())
        self.planner_id = kwargs.get('planner_id', str())
        self.use_start = kwargs.get('use_start', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goals != other.goals:
            return False
        if self.start != other.start:
            return False
        if self.planner_id != other.planner_id:
            return False
        if self.use_start != other.use_start:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goals(self):
        """Message field 'goals'."""
        return self._goals

    @goals.setter
    def goals(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, PoseStamped) for v in value) and
                 True), \
                "The 'goals' field must be a set or sequence and each value of type 'PoseStamped'"
        self._goals = value

    @builtins.property
    def start(self):
        """Message field 'start'."""
        return self._start

    @start.setter
    def start(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'start' field must be a sub message of type 'PoseStamped'"
        self._start = value

    @builtins.property
    def planner_id(self):
        """Message field 'planner_id'."""
        return self._planner_id

    @planner_id.setter
    def planner_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'planner_id' field must be of type 'str'"
        self._planner_id = value

    @builtins.property
    def use_start(self):
        """Message field 'use_start'."""
        return self._use_start

    @use_start.setter
    def use_start(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_start' field must be of type 'bool'"
        self._use_start = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePathThroughPoses_Result(type):
    """Metaclass of message 'ComputePathThroughPoses_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NONE': 0,
        'UNKNOWN': 300,
        'INVALID_PLANNER': 301,
        'TF_ERROR': 302,
        'START_OUTSIDE_MAP': 303,
        'GOAL_OUTSIDE_MAP': 304,
        'START_OCCUPIED': 305,
        'GOAL_OCCUPIED': 306,
        'TIMEOUT': 307,
        'NO_VALID_PATH': 308,
        'NO_VIAPOINTS_GIVEN': 309,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.ComputePathThroughPoses_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_through_poses__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_through_poses__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_through_poses__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_through_poses__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_through_poses__result

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from nav_msgs.msg import Path
            if Path.__class__._TYPE_SUPPORT is None:
                Path.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NONE': cls.__constants['NONE'],
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'INVALID_PLANNER': cls.__constants['INVALID_PLANNER'],
            'TF_ERROR': cls.__constants['TF_ERROR'],
            'START_OUTSIDE_MAP': cls.__constants['START_OUTSIDE_MAP'],
            'GOAL_OUTSIDE_MAP': cls.__constants['GOAL_OUTSIDE_MAP'],
            'START_OCCUPIED': cls.__constants['START_OCCUPIED'],
            'GOAL_OCCUPIED': cls.__constants['GOAL_OCCUPIED'],
            'TIMEOUT': cls.__constants['TIMEOUT'],
            'NO_VALID_PATH': cls.__constants['NO_VALID_PATH'],
            'NO_VIAPOINTS_GIVEN': cls.__constants['NO_VIAPOINTS_GIVEN'],
        }

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_ComputePathThroughPoses_Result.__constants['NONE']

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_ComputePathThroughPoses_Result.__constants['UNKNOWN']

    @property
    def INVALID_PLANNER(self):
        """Message constant 'INVALID_PLANNER'."""
        return Metaclass_ComputePathThroughPoses_Result.__constants['INVALID_PLANNER']

    @property
    def TF_ERROR(self):
        """Message constant 'TF_ERROR'."""
        return Metaclass_ComputePathThroughPoses_Result.__constants['TF_ERROR']

    @property
    def START_OUTSIDE_MAP(self):
        """Message constant 'START_OUTSIDE_MAP'."""
        return Metaclass_ComputePathThroughPoses_Result.__constants['START_OUTSIDE_MAP']

    @property
    def GOAL_OUTSIDE_MAP(self):
        """Message constant 'GOAL_OUTSIDE_MAP'."""
        return Metaclass_ComputePathThroughPoses_Result.__constants['GOAL_OUTSIDE_MAP']

    @property
    def START_OCCUPIED(self):
        """Message constant 'START_OCCUPIED'."""
        return Metaclass_ComputePathThroughPoses_Result.__constants['START_OCCUPIED']

    @property
    def GOAL_OCCUPIED(self):
        """Message constant 'GOAL_OCCUPIED'."""
        return Metaclass_ComputePathThroughPoses_Result.__constants['GOAL_OCCUPIED']

    @property
    def TIMEOUT(self):
        """Message constant 'TIMEOUT'."""
        return Metaclass_ComputePathThroughPoses_Result.__constants['TIMEOUT']

    @property
    def NO_VALID_PATH(self):
        """Message constant 'NO_VALID_PATH'."""
        return Metaclass_ComputePathThroughPoses_Result.__constants['NO_VALID_PATH']

    @property
    def NO_VIAPOINTS_GIVEN(self):
        """Message constant 'NO_VIAPOINTS_GIVEN'."""
        return Metaclass_ComputePathThroughPoses_Result.__constants['NO_VIAPOINTS_GIVEN']


class ComputePathThroughPoses_Result(metaclass=Metaclass_ComputePathThroughPoses_Result):
    """
    Message class 'ComputePathThroughPoses_Result'.

    Constants:
      NONE
      UNKNOWN
      INVALID_PLANNER
      TF_ERROR
      START_OUTSIDE_MAP
      GOAL_OUTSIDE_MAP
      START_OCCUPIED
      GOAL_OCCUPIED
      TIMEOUT
      NO_VALID_PATH
      NO_VIAPOINTS_GIVEN
    """

    __slots__ = [
        '_path',
        '_planning_time',
        '_error_code',
        '_error_msg',
    ]

    _fields_and_field_types = {
        'path': 'nav_msgs/Path',
        'planning_time': 'builtin_interfaces/Duration',
        'error_code': 'uint16',
        'error_msg': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['nav_msgs', 'msg'], 'Path'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from nav_msgs.msg import Path
        self.path = kwargs.get('path', Path())
        from builtin_interfaces.msg import Duration
        self.planning_time = kwargs.get('planning_time', Duration())
        self.error_code = kwargs.get('error_code', int())
        self.error_msg = kwargs.get('error_msg', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.path != other.path:
            return False
        if self.planning_time != other.planning_time:
            return False
        if self.error_code != other.error_code:
            return False
        if self.error_msg != other.error_msg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            from nav_msgs.msg import Path
            assert \
                isinstance(value, Path), \
                "The 'path' field must be a sub message of type 'Path'"
        self._path = value

    @builtins.property
    def planning_time(self):
        """Message field 'planning_time'."""
        return self._planning_time

    @planning_time.setter
    def planning_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'planning_time' field must be a sub message of type 'Duration'"
        self._planning_time = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'error_code' field must be an unsigned integer in [0, 65535]"
        self._error_code = value

    @builtins.property
    def error_msg(self):
        """Message field 'error_msg'."""
        return self._error_msg

    @error_msg.setter
    def error_msg(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_msg' field must be of type 'str'"
        self._error_msg = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePathThroughPoses_Feedback(type):
    """Metaclass of message 'ComputePathThroughPoses_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.ComputePathThroughPoses_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_through_poses__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_through_poses__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_through_poses__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_through_poses__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_through_poses__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePathThroughPoses_Feedback(metaclass=Metaclass_ComputePathThroughPoses_Feedback):
    """Message class 'ComputePathThroughPoses_Feedback'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePathThroughPoses_SendGoal_Request(type):
    """Metaclass of message 'ComputePathThroughPoses_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.ComputePathThroughPoses_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_through_poses__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_through_poses__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_through_poses__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_through_poses__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_through_poses__send_goal__request

            from nav2_msgs.action import ComputePathThroughPoses
            if ComputePathThroughPoses.Goal.__class__._TYPE_SUPPORT is None:
                ComputePathThroughPoses.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePathThroughPoses_SendGoal_Request(metaclass=Metaclass_ComputePathThroughPoses_SendGoal_Request):
    """Message class 'ComputePathThroughPoses_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'nav2_msgs/ComputePathThroughPoses_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav2_msgs', 'action'], 'ComputePathThroughPoses_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_Goal
        self.goal = kwargs.get('goal', ComputePathThroughPoses_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_Goal
            assert \
                isinstance(value, ComputePathThroughPoses_Goal), \
                "The 'goal' field must be a sub message of type 'ComputePathThroughPoses_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePathThroughPoses_SendGoal_Response(type):
    """Metaclass of message 'ComputePathThroughPoses_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.ComputePathThroughPoses_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_through_poses__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_through_poses__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_through_poses__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_through_poses__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_through_poses__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePathThroughPoses_SendGoal_Response(metaclass=Metaclass_ComputePathThroughPoses_SendGoal_Response):
    """Message class 'ComputePathThroughPoses_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_ComputePathThroughPoses_SendGoal(type):
    """Metaclass of service 'ComputePathThroughPoses_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.ComputePathThroughPoses_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__compute_path_through_poses__send_goal

            from nav2_msgs.action import _compute_path_through_poses
            if _compute_path_through_poses.Metaclass_ComputePathThroughPoses_SendGoal_Request._TYPE_SUPPORT is None:
                _compute_path_through_poses.Metaclass_ComputePathThroughPoses_SendGoal_Request.__import_type_support__()
            if _compute_path_through_poses.Metaclass_ComputePathThroughPoses_SendGoal_Response._TYPE_SUPPORT is None:
                _compute_path_through_poses.Metaclass_ComputePathThroughPoses_SendGoal_Response.__import_type_support__()


class ComputePathThroughPoses_SendGoal(metaclass=Metaclass_ComputePathThroughPoses_SendGoal):
    from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_SendGoal_Request as Request
    from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePathThroughPoses_GetResult_Request(type):
    """Metaclass of message 'ComputePathThroughPoses_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.ComputePathThroughPoses_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_through_poses__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_through_poses__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_through_poses__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_through_poses__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_through_poses__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePathThroughPoses_GetResult_Request(metaclass=Metaclass_ComputePathThroughPoses_GetResult_Request):
    """Message class 'ComputePathThroughPoses_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePathThroughPoses_GetResult_Response(type):
    """Metaclass of message 'ComputePathThroughPoses_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.ComputePathThroughPoses_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_through_poses__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_through_poses__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_through_poses__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_through_poses__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_through_poses__get_result__response

            from nav2_msgs.action import ComputePathThroughPoses
            if ComputePathThroughPoses.Result.__class__._TYPE_SUPPORT is None:
                ComputePathThroughPoses.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePathThroughPoses_GetResult_Response(metaclass=Metaclass_ComputePathThroughPoses_GetResult_Response):
    """Message class 'ComputePathThroughPoses_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'nav2_msgs/ComputePathThroughPoses_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav2_msgs', 'action'], 'ComputePathThroughPoses_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_Result
        self.result = kwargs.get('result', ComputePathThroughPoses_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_Result
            assert \
                isinstance(value, ComputePathThroughPoses_Result), \
                "The 'result' field must be a sub message of type 'ComputePathThroughPoses_Result'"
        self._result = value


class Metaclass_ComputePathThroughPoses_GetResult(type):
    """Metaclass of service 'ComputePathThroughPoses_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.ComputePathThroughPoses_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__compute_path_through_poses__get_result

            from nav2_msgs.action import _compute_path_through_poses
            if _compute_path_through_poses.Metaclass_ComputePathThroughPoses_GetResult_Request._TYPE_SUPPORT is None:
                _compute_path_through_poses.Metaclass_ComputePathThroughPoses_GetResult_Request.__import_type_support__()
            if _compute_path_through_poses.Metaclass_ComputePathThroughPoses_GetResult_Response._TYPE_SUPPORT is None:
                _compute_path_through_poses.Metaclass_ComputePathThroughPoses_GetResult_Response.__import_type_support__()


class ComputePathThroughPoses_GetResult(metaclass=Metaclass_ComputePathThroughPoses_GetResult):
    from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_GetResult_Request as Request
    from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ComputePathThroughPoses_FeedbackMessage(type):
    """Metaclass of message 'ComputePathThroughPoses_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.ComputePathThroughPoses_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__compute_path_through_poses__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__compute_path_through_poses__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__compute_path_through_poses__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__compute_path_through_poses__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__compute_path_through_poses__feedback_message

            from nav2_msgs.action import ComputePathThroughPoses
            if ComputePathThroughPoses.Feedback.__class__._TYPE_SUPPORT is None:
                ComputePathThroughPoses.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ComputePathThroughPoses_FeedbackMessage(metaclass=Metaclass_ComputePathThroughPoses_FeedbackMessage):
    """Message class 'ComputePathThroughPoses_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'nav2_msgs/ComputePathThroughPoses_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['nav2_msgs', 'action'], 'ComputePathThroughPoses_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_Feedback
        self.feedback = kwargs.get('feedback', ComputePathThroughPoses_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_Feedback
            assert \
                isinstance(value, ComputePathThroughPoses_Feedback), \
                "The 'feedback' field must be a sub message of type 'ComputePathThroughPoses_Feedback'"
        self._feedback = value


class Metaclass_ComputePathThroughPoses(type):
    """Metaclass of action 'ComputePathThroughPoses'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('nav2_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'nav2_msgs.action.ComputePathThroughPoses')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__compute_path_through_poses

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from nav2_msgs.action import _compute_path_through_poses
            if _compute_path_through_poses.Metaclass_ComputePathThroughPoses_SendGoal._TYPE_SUPPORT is None:
                _compute_path_through_poses.Metaclass_ComputePathThroughPoses_SendGoal.__import_type_support__()
            if _compute_path_through_poses.Metaclass_ComputePathThroughPoses_GetResult._TYPE_SUPPORT is None:
                _compute_path_through_poses.Metaclass_ComputePathThroughPoses_GetResult.__import_type_support__()
            if _compute_path_through_poses.Metaclass_ComputePathThroughPoses_FeedbackMessage._TYPE_SUPPORT is None:
                _compute_path_through_poses.Metaclass_ComputePathThroughPoses_FeedbackMessage.__import_type_support__()


class ComputePathThroughPoses(metaclass=Metaclass_ComputePathThroughPoses):

    # The goal message defined in the action definition.
    from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_Goal as Goal
    # The result message defined in the action definition.
    from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_Result as Result
    # The feedback message defined in the action definition.
    from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from nav2_msgs.action._compute_path_through_poses import ComputePathThroughPoses_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
