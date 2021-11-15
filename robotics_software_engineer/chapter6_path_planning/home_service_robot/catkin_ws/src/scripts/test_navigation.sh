#!/bin/sh

# launch world.launch to deploy environment
xterm -e "cd $(pwd)/../..;
source devel/setup.bash; 
roslaunch my_robot world.launch" &

sleep 5

# amcl_demo.launch to localize the robot
xterm -e "cd $(pwd)/../..;
source devel/setup.bash;
roslaunch my_robot amcl_demo.launch" &

sleep 5

# launch view_navigation for rviz
xterm -e "cd $(pwd)/../..;
source devel/setup.bash;
roslaunch my_robot view_navigation.launch"
