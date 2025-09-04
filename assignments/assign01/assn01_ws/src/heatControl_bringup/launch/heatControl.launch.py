from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
  ld = LaunchDescription()
  tempSensor_node = Node(
      package="heatControl_py",
      executable="tempSensor", # match executable name in your setup.py (or CMake)
  )
  thermostat_node = Node(
      package="heatControl_py",
      executable="thermostat"
  )
  heater_node = Node(
      package="heatControl_py",
      executable="heater"
  )
  ld.add_action(tempSensor_node)
  ld.add_action(thermostat_node)
  ld.add_action(heater_node)
  return ld