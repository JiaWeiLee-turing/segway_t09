# hot to use?
# $ python3 send_control_cmd.py

# press W to increase target velocity
# press S to decrease target velocity
# press A to turn left
# press D to turn right
# press T to increase steering rate
# press g to decrease steering rate

# press O to gear R
# press I to gear N
# press U to gear D

# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
from xml.etree.ElementTree import PI
from pynput import keyboard
import threading
import os
import time
import sys
import subprocess
import math

import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from tier4_vehicle_msgs.msg import ActuationCommandStamped
from autoware_auto_vehicle_msgs.msg import GearCommand

died = True
TargetSpeedKph = 0.0
SpeedStep = 10.0
TargetSteeringDeg = 0.0
SteeringStep = 5.0
TargetSteeringRate = 150.0
SteeringRateStep = 50.0
TargetAcceleration = 0.0
AccelerationStep = 1.0
Hz = 10
Gear = 1          # gear N

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('publish_fake_vehicle_command')
        # self.publisher_ = self.create_publisher(String, 'topic', 10)
        self.publisher_ = self.create_publisher(ActuationCommandStamped, 'control/command/actuation_cmd', 1)
        self.publisher_gear_ = self.create_publisher(GearCommand, 'control/command/gear_cmd', 1)
        timer_period = 1/Hz  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def deg2rad(self, deg):
        return deg * math.pi / 180.0
    
    def kph2mps(self, kph):
        return kph * 0.277778

    def timer_callback(self):
        # msg = String()
        msg = ActuationCommandStamped()
        msg.actuation.steer_cmd = self.deg2rad(TargetSteeringDeg)
        msg.actuation.brake_cmd = 0.0 
        msg.actuation.accel_cmd = TargetSpeedKph
        self.publisher_.publish(msg)

        msg1 = GearCommand()
        msg1.stamp = self.get_clock().now().to_msg()
        msg1.command = Gear
        self.publisher_gear_.publish(msg1)



def main(args=None):
    rclpy.init(args=args)
    minimal_publisher = MinimalPublisher()
    rclpy.spin(minimal_publisher)
    minimal_publisher.destroy_node()
    rclpy.shutdown()



def emergency_stop():
	global died
	died = False
	os.system('exit')
	return False

def key_press(c):
    global TargetSpeedKph
    global TargetSteeringDeg
    global TargetAcceleration
    global Gear
    if (c == 'w'):
        if ( TargetSpeedKph < 100.0):
            TargetSpeedKph += SpeedStep
            TargetAcceleration = 0.0
        else:
            TargetSpeedKph = 100.0
    elif (c == 's'):
        if (TargetSpeedKph > 0.0):
            TargetSpeedKph -= SpeedStep
        else:
            TargetSpeedKph = 0.0
            TargetAcceleration -= AccelerationStep
    elif (c == 'a'):
        if ( TargetSteeringDeg < 30.0 ):
            TargetSteeringDeg += SteeringStep
        else:
            TargetSteeringDeg = 30.0
    elif ( c == 'd' ):
        if ( TargetSteeringDeg > -30.0 ):
            TargetSteeringDeg -= SteeringStep
        else: 
            TargetSteeringDeg = -30.0
    # elif ( c == 't'):
    #      if ( TargetSteeringRate < 250.0):
    #         TargetSteeringRate += SteeringRateStep
    #      else:
    #         TargetSteeringRate = 250.0
    # elif ( c == 'g'):
    #     if ( TargetSteeringRate > 50.0):
    #         TargetSteeringRate -= SteeringRateStep
    #     else:
    #         TargetSteeringRate = 50.0
    elif ( c == 'o' ):
        Gear = 20
    elif ( c == 'i' ):
        Gear = 1
    elif ( c == 'u' ):
        Gear = 2
    else :
        return True

def on_press(key):
	try:
		if key_press(key.char) == False:
			# emergency_stop()
			return False
	except AttributeError:
		pass
        # print('special key {0} pressed'.format(
        #     key))

def on_release(key):
	if key == keyboard.Key.esc:
		# Stop listener
		# emergency_stop()
		return False

def send_action(delay):
    while died :
        print("throttle (+W <--> S-) : ", TargetSpeedKph, " %")
        # print("Acceleration (+W <--> S-) : ", TargetAcceleration, " m/s^2")
        print("steering ( +L <--> R- ): ", TargetSteeringDeg, " deg")
        # print("steering_rate (+T <--> G-)", TargetSteeringRate, " deg")
        print("Gear :", Gear, " ==>  N = 1, D = 2, R = 20 ")
        # os.system('clear')
        print("\033c", end="")
        time.sleep(delay)


# keyboard event thread
listener = keyboard.Listener(on_press = on_press,
			on_release = on_release)
listener.start()

# send CAN thread
class myThread (threading.Thread):
    def __init__(self, threadID, name, delay):
        threading.Thread.__init__(self)
        self.threadID = threadID
        self.name = name
        self.delay = delay
    def run(self):
        print ("start sending thread : " + self.name)
        send_action(self.delay)
        rclpy.shutdown()
        print ("End of sending thread : " + self.name)

thread1 = myThread(1, "Thread-1", 1/Hz)
thread1.daemon = True
thread1.start()

# ROS2 publish thread
th2 = threading.Thread(target = main())
th2.daemon = True
th2.start()
th2.join()


