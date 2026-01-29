# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:msg/SpeedFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpeedFb(type):
    """Metaclass of message 'SpeedFb'."""

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
                'segway_msgs.msg.SpeedFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__speed_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__speed_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__speed_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__speed_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__speed_fb

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SpeedFb(metaclass=Metaclass_SpeedFb):
    """Message class 'SpeedFb'."""

    __slots__ = [
        '_car_speed',
        '_turn_speed',
        '_fl_speed',
        '_fr_speed',
        '_rl_speed',
        '_rr_speed',
        '_speed_timestamp',
    ]

    _fields_and_field_types = {
        'car_speed': 'float',
        'turn_speed': 'float',
        'fl_speed': 'float',
        'fr_speed': 'float',
        'rl_speed': 'float',
        'rr_speed': 'float',
        'speed_timestamp': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.car_speed = kwargs.get('car_speed', float())
        self.turn_speed = kwargs.get('turn_speed', float())
        self.fl_speed = kwargs.get('fl_speed', float())
        self.fr_speed = kwargs.get('fr_speed', float())
        self.rl_speed = kwargs.get('rl_speed', float())
        self.rr_speed = kwargs.get('rr_speed', float())
        self.speed_timestamp = kwargs.get('speed_timestamp', int())

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
        if self.car_speed != other.car_speed:
            return False
        if self.turn_speed != other.turn_speed:
            return False
        if self.fl_speed != other.fl_speed:
            return False
        if self.fr_speed != other.fr_speed:
            return False
        if self.rl_speed != other.rl_speed:
            return False
        if self.rr_speed != other.rr_speed:
            return False
        if self.speed_timestamp != other.speed_timestamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def car_speed(self):
        """Message field 'car_speed'."""
        return self._car_speed

    @car_speed.setter
    def car_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'car_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'car_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._car_speed = value

    @builtins.property
    def turn_speed(self):
        """Message field 'turn_speed'."""
        return self._turn_speed

    @turn_speed.setter
    def turn_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'turn_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'turn_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._turn_speed = value

    @builtins.property
    def fl_speed(self):
        """Message field 'fl_speed'."""
        return self._fl_speed

    @fl_speed.setter
    def fl_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fl_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fl_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fl_speed = value

    @builtins.property
    def fr_speed(self):
        """Message field 'fr_speed'."""
        return self._fr_speed

    @fr_speed.setter
    def fr_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fr_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fr_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fr_speed = value

    @builtins.property
    def rl_speed(self):
        """Message field 'rl_speed'."""
        return self._rl_speed

    @rl_speed.setter
    def rl_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rl_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rl_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rl_speed = value

    @builtins.property
    def rr_speed(self):
        """Message field 'rr_speed'."""
        return self._rr_speed

    @rr_speed.setter
    def rr_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rr_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rr_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rr_speed = value

    @builtins.property
    def speed_timestamp(self):
        """Message field 'speed_timestamp'."""
        return self._speed_timestamp

    @speed_timestamp.setter
    def speed_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'speed_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._speed_timestamp = value
