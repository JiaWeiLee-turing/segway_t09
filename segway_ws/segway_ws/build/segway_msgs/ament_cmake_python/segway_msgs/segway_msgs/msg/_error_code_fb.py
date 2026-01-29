# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:msg/ErrorCodeFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ErrorCodeFb(type):
    """Metaclass of message 'ErrorCodeFb'."""

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
                'segway_msgs.msg.ErrorCodeFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__error_code_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__error_code_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__error_code_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__error_code_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__error_code_fb

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ErrorCodeFb(metaclass=Metaclass_ErrorCodeFb):
    """Message class 'ErrorCodeFb'."""

    __slots__ = [
        '_host_error',
        '_central_error',
        '_front_left_motor_error',
        '_front_right_motor_error',
        '_rear_left_motor_error',
        '_rear_right_motor_error',
        '_bms_error',
        '_brake_error',
    ]

    _fields_and_field_types = {
        'host_error': 'uint32',
        'central_error': 'uint32',
        'front_left_motor_error': 'uint32',
        'front_right_motor_error': 'uint32',
        'rear_left_motor_error': 'uint32',
        'rear_right_motor_error': 'uint32',
        'bms_error': 'uint32',
        'brake_error': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.host_error = kwargs.get('host_error', int())
        self.central_error = kwargs.get('central_error', int())
        self.front_left_motor_error = kwargs.get('front_left_motor_error', int())
        self.front_right_motor_error = kwargs.get('front_right_motor_error', int())
        self.rear_left_motor_error = kwargs.get('rear_left_motor_error', int())
        self.rear_right_motor_error = kwargs.get('rear_right_motor_error', int())
        self.bms_error = kwargs.get('bms_error', int())
        self.brake_error = kwargs.get('brake_error', int())

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
        if self.host_error != other.host_error:
            return False
        if self.central_error != other.central_error:
            return False
        if self.front_left_motor_error != other.front_left_motor_error:
            return False
        if self.front_right_motor_error != other.front_right_motor_error:
            return False
        if self.rear_left_motor_error != other.rear_left_motor_error:
            return False
        if self.rear_right_motor_error != other.rear_right_motor_error:
            return False
        if self.bms_error != other.bms_error:
            return False
        if self.brake_error != other.brake_error:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def host_error(self):
        """Message field 'host_error'."""
        return self._host_error

    @host_error.setter
    def host_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'host_error' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'host_error' field must be an unsigned integer in [0, 4294967295]"
        self._host_error = value

    @builtins.property
    def central_error(self):
        """Message field 'central_error'."""
        return self._central_error

    @central_error.setter
    def central_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'central_error' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'central_error' field must be an unsigned integer in [0, 4294967295]"
        self._central_error = value

    @builtins.property
    def front_left_motor_error(self):
        """Message field 'front_left_motor_error'."""
        return self._front_left_motor_error

    @front_left_motor_error.setter
    def front_left_motor_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_left_motor_error' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'front_left_motor_error' field must be an unsigned integer in [0, 4294967295]"
        self._front_left_motor_error = value

    @builtins.property
    def front_right_motor_error(self):
        """Message field 'front_right_motor_error'."""
        return self._front_right_motor_error

    @front_right_motor_error.setter
    def front_right_motor_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_right_motor_error' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'front_right_motor_error' field must be an unsigned integer in [0, 4294967295]"
        self._front_right_motor_error = value

    @builtins.property
    def rear_left_motor_error(self):
        """Message field 'rear_left_motor_error'."""
        return self._rear_left_motor_error

    @rear_left_motor_error.setter
    def rear_left_motor_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rear_left_motor_error' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rear_left_motor_error' field must be an unsigned integer in [0, 4294967295]"
        self._rear_left_motor_error = value

    @builtins.property
    def rear_right_motor_error(self):
        """Message field 'rear_right_motor_error'."""
        return self._rear_right_motor_error

    @rear_right_motor_error.setter
    def rear_right_motor_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rear_right_motor_error' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rear_right_motor_error' field must be an unsigned integer in [0, 4294967295]"
        self._rear_right_motor_error = value

    @builtins.property
    def bms_error(self):
        """Message field 'bms_error'."""
        return self._bms_error

    @bms_error.setter
    def bms_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bms_error' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'bms_error' field must be an unsigned integer in [0, 4294967295]"
        self._bms_error = value

    @builtins.property
    def brake_error(self):
        """Message field 'brake_error'."""
        return self._brake_error

    @brake_error.setter
    def brake_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brake_error' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'brake_error' field must be an unsigned integer in [0, 4294967295]"
        self._brake_error = value
