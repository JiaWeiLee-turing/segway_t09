# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:srv/RosGetVelMaxFeedbackCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RosGetVelMaxFeedbackCmd_Request(type):
    """Metaclass of message 'RosGetVelMaxFeedbackCmd_Request'."""

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
            module = import_type_support('segway_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'segway_msgs.srv.RosGetVelMaxFeedbackCmd_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ros_get_vel_max_feedback_cmd__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ros_get_vel_max_feedback_cmd__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ros_get_vel_max_feedback_cmd__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ros_get_vel_max_feedback_cmd__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ros_get_vel_max_feedback_cmd__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RosGetVelMaxFeedbackCmd_Request(metaclass=Metaclass_RosGetVelMaxFeedbackCmd_Request):
    """Message class 'RosGetVelMaxFeedbackCmd_Request'."""

    __slots__ = [
        '_ros_get_vel_max_fb_cmd',
    ]

    _fields_and_field_types = {
        'ros_get_vel_max_fb_cmd': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ros_get_vel_max_fb_cmd = kwargs.get('ros_get_vel_max_fb_cmd', bool())

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
        if self.ros_get_vel_max_fb_cmd != other.ros_get_vel_max_fb_cmd:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ros_get_vel_max_fb_cmd(self):
        """Message field 'ros_get_vel_max_fb_cmd'."""
        return self._ros_get_vel_max_fb_cmd

    @ros_get_vel_max_fb_cmd.setter
    def ros_get_vel_max_fb_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ros_get_vel_max_fb_cmd' field must be of type 'bool'"
        self._ros_get_vel_max_fb_cmd = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RosGetVelMaxFeedbackCmd_Response(type):
    """Metaclass of message 'RosGetVelMaxFeedbackCmd_Response'."""

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
            module = import_type_support('segway_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'segway_msgs.srv.RosGetVelMaxFeedbackCmd_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ros_get_vel_max_feedback_cmd__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ros_get_vel_max_feedback_cmd__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ros_get_vel_max_feedback_cmd__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ros_get_vel_max_feedback_cmd__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ros_get_vel_max_feedback_cmd__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RosGetVelMaxFeedbackCmd_Response(metaclass=Metaclass_RosGetVelMaxFeedbackCmd_Response):
    """Message class 'RosGetVelMaxFeedbackCmd_Response'."""

    __slots__ = [
        '_forward_max_vel_fb',
        '_backward_max_vel_fb',
        '_angular_max_vel_fb',
    ]

    _fields_and_field_types = {
        'forward_max_vel_fb': 'uint16',
        'backward_max_vel_fb': 'uint16',
        'angular_max_vel_fb': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.forward_max_vel_fb = kwargs.get('forward_max_vel_fb', int())
        self.backward_max_vel_fb = kwargs.get('backward_max_vel_fb', int())
        self.angular_max_vel_fb = kwargs.get('angular_max_vel_fb', int())

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
        if self.forward_max_vel_fb != other.forward_max_vel_fb:
            return False
        if self.backward_max_vel_fb != other.backward_max_vel_fb:
            return False
        if self.angular_max_vel_fb != other.angular_max_vel_fb:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def forward_max_vel_fb(self):
        """Message field 'forward_max_vel_fb'."""
        return self._forward_max_vel_fb

    @forward_max_vel_fb.setter
    def forward_max_vel_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'forward_max_vel_fb' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'forward_max_vel_fb' field must be an unsigned integer in [0, 65535]"
        self._forward_max_vel_fb = value

    @builtins.property
    def backward_max_vel_fb(self):
        """Message field 'backward_max_vel_fb'."""
        return self._backward_max_vel_fb

    @backward_max_vel_fb.setter
    def backward_max_vel_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'backward_max_vel_fb' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'backward_max_vel_fb' field must be an unsigned integer in [0, 65535]"
        self._backward_max_vel_fb = value

    @builtins.property
    def angular_max_vel_fb(self):
        """Message field 'angular_max_vel_fb'."""
        return self._angular_max_vel_fb

    @angular_max_vel_fb.setter
    def angular_max_vel_fb(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'angular_max_vel_fb' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'angular_max_vel_fb' field must be an unsigned integer in [0, 65535]"
        self._angular_max_vel_fb = value


class Metaclass_RosGetVelMaxFeedbackCmd(type):
    """Metaclass of service 'RosGetVelMaxFeedbackCmd'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('segway_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'segway_msgs.srv.RosGetVelMaxFeedbackCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ros_get_vel_max_feedback_cmd

            from segway_msgs.srv import _ros_get_vel_max_feedback_cmd
            if _ros_get_vel_max_feedback_cmd.Metaclass_RosGetVelMaxFeedbackCmd_Request._TYPE_SUPPORT is None:
                _ros_get_vel_max_feedback_cmd.Metaclass_RosGetVelMaxFeedbackCmd_Request.__import_type_support__()
            if _ros_get_vel_max_feedback_cmd.Metaclass_RosGetVelMaxFeedbackCmd_Response._TYPE_SUPPORT is None:
                _ros_get_vel_max_feedback_cmd.Metaclass_RosGetVelMaxFeedbackCmd_Response.__import_type_support__()


class RosGetVelMaxFeedbackCmd(metaclass=Metaclass_RosGetVelMaxFeedbackCmd):
    from segway_msgs.srv._ros_get_vel_max_feedback_cmd import RosGetVelMaxFeedbackCmd_Request as Request
    from segway_msgs.srv._ros_get_vel_max_feedback_cmd import RosGetVelMaxFeedbackCmd_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
