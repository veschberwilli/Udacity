#!/bin/sh

# launch world.launch to deploy environment
xterm -e "cd $(pwd)/../..;
source devel/setup.bash; 
roslaunch my_robot world.launch" &

sleep 5

# launch gmapping_demo.launch to perform slam_gmapping
xterm -e "cd $(pwd)/../..;
source devel/setup.bash;
roslaunch my_robot gmapping_demo.launch" &

sleep 5

# launch view_navigation for rviz
xterm -e "cd $(pwd)/../..;
source devel/setup.bash;
roslaunch my_robot view_navigation.launch" &

sleep 5

# launch teleop_keyboard for manual control
xterm -e "cd $(pwd)/../..;
source devel/setup.bash;
roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch" &