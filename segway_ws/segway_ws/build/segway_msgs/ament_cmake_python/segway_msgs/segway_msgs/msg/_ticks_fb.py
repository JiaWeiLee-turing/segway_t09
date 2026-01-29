# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:msg/TicksFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TicksFb(type):
    """Metaclass of message 'TicksFb'."""

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
                'segway_msgs.msg.TicksFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ticks_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ticks_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ticks_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ticks_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ticks_fb

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TicksFb(metaclass=Metaclass_TicksFb):
    """Message class 'TicksFb'."""

    __slots__ = [
        '_fl_ticks',
        '_fr_ticks',
        '_rl_ticks',
        '_rr_ticks',
        '_ticks_timestamp',
    ]

    _fields_and_field_types = {
        'fl_ticks': 'int32',
        'fr_ticks': 'int32',
        'rl_ticks': 'int32',
        'rr_ticks': 'int32',
        'ticks_timestamp': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fl_ticks = kwargs.get('fl_ticks', int())
        self.fr_ticks = kwargs.get('fr_ticks', int())
        self.rl_ticks = kwargs.get('rl_ticks', int())
        self.rr_ticks = kwargs.get('rr_ticks', int())
        self.ticks_timestamp = kwargs.get('ticks_timestamp', int())

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
        if self.fl_ticks != other.fl_ticks:
            return False
        if self.fr_ticks != other.fr_ticks:
            return False
        if self.rl_ticks != other.rl_ticks:
            return False
        if self.rr_ticks != other.rr_ticks:
            return False
        if self.ticks_timestamp != other.ticks_timestamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fl_ticks(self):
        """Message field 'fl_ticks'."""
        return self._fl_ticks

    @fl_ticks.setter
    def fl_ticks(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fl_ticks' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fl_ticks' field must be an integer in [-2147483648, 2147483647]"
        self._fl_ticks = value

    @builtins.property
    def fr_ticks(self):
        """Message field 'fr_ticks'."""
        return self._fr_ticks

    @fr_ticks.setter
    def fr_ticks(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fr_ticks' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'fr_ticks' field must be an integer in [-2147483648, 2147483647]"
        self._fr_ticks = value

    @builtins.property
    def rl_ticks(self):
        """Message field 'rl_ticks'."""
        return self._rl_ticks

    @rl_ticks.setter
    def rl_ticks(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rl_ticks' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rl_ticks' field must be an integer in [-2147483648, 2147483647]"
        self._rl_ticks = value

    @builtins.property
    def rr_ticks(self):
        """Message field 'rr_ticks'."""
        return self._rr_ticks

    @rr_ticks.setter
    def rr_ticks(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rr_ticks' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rr_ticks' field must be an integer in [-2147483648, 2147483647]"
        self._rr_ticks = value

    @builtins.property
    def ticks_timestamp(self):
        """Message field 'ticks_timestamp'."""
        return self._ticks_timestamp

    @ticks_timestamp.setter
    def ticks_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ticks_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'ticks_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._ticks_timestamp = value
