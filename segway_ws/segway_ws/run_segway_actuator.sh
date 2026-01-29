#!/bin/bash
source install/setup.bash

./401ChassisInit.sh

ros2 run segway_ros2 drive_sample

