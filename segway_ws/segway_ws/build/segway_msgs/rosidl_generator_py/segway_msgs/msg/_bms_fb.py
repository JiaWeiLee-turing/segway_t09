# generated from rosidl_generator_py/resource/_idl.py.em
# with input from segway_msgs:msg/BmsFb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BmsFb(type):
    """Metaclass of message 'BmsFb'."""

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
                'segway_msgs.msg.BmsFb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bms_fb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bms_fb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bms_fb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bms_fb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bms_fb

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BmsFb(metaclass=Metaclass_BmsFb):
    """Message class 'BmsFb'."""

    __slots__ = [
        '_bat_soc',
        '_bat_charging',
        '_bat_vol',
        '_bat_current',
        '_bat_temp',
    ]

    _fields_and_field_types = {
        'bat_soc': 'int16',
        'bat_charging': 'int16',
        'bat_vol': 'int32',
        'bat_current': 'int32',
        'bat_temp': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.bat_soc = kwargs.get('bat_soc', int())
        self.bat_charging = kwargs.get('bat_charging', int())
        self.bat_vol = kwargs.get('bat_vol', int())
        self.bat_current = kwargs.get('bat_current', int())
        self.bat_temp = kwargs.get('bat_temp', int())

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
        if self.bat_soc != other.bat_soc:
            return False
        if self.bat_charging != other.bat_charging:
            return False
        if self.bat_vol != other.bat_vol:
            return False
        if self.bat_current != other.bat_current:
            return False
        if self.bat_temp != other.bat_temp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def bat_soc(self):
        """Message field 'bat_soc'."""
        return self._bat_soc

    @bat_soc.setter
    def bat_soc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bat_soc' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'bat_soc' field must be an integer in [-32768, 32767]"
        self._bat_soc = value

    @builtins.property
    def bat_charging(self):
        """Message field 'bat_charging'."""
        return self._bat_charging

    @bat_charging.setter
    def bat_charging(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bat_charging' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'bat_charging' field must be an integer in [-32768, 32767]"
        self._bat_charging = value

    @builtins.property
    def bat_vol(self):
        """Message field 'bat_vol'."""
        return self._bat_vol

    @bat_vol.setter
    def bat_vol(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bat_vol' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bat_vol' field must be an integer in [-2147483648, 2147483647]"
        self._bat_vol = value

    @builtins.property
    def bat_current(self):
        """Message field 'bat_current'."""
        return self._bat_current

    @bat_current.setter
    def bat_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bat_current' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'bat_current' field must be an integer in [-2147483648, 2147483647]"
        self._bat_current = value

    @builtins.property
    def bat_temp(self):
        """Message field 'bat_temp'."""
        return self._bat_temp

    @bat_temp.setter
    def bat_temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bat_temp' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'bat_temp' field must be an integer in [-32768, 32767]"
        self._bat_temp = value
