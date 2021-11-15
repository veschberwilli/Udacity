#include <ros/ros.h>
#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>

// Define a client for to send goal requests to the move_base server through a SimpleActionClient
typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;

int main(int argc, char** argv){
  // Initialize the pick_objects node
  ros::init(argc, argv, "pick_objects");

  //tell the action client that we want to spin a thread by default
  MoveBaseClient ac("move_base", true);

  // Wait 5 sec for move_base action server to come up
  while(!ac.waitForServer(ros::Duration(5.0))){
    ROS_INFO("Waiting for the move_base action server to come up");
  }

  move_base_msgs::MoveBaseGoal goal;

  // set up the frame parameters
  goal.target_pose.header.frame_id = "map";
  goal.target_pose.header.stamp = ros::Time::now();

  // Define a position and orientation for the robot to reach
  ros::NodeHandle n; // node-handle for parameters

  // Define a position and orientation for the robot to reach
  n.getParam("/pick_up/tx", goal.target_pose.pose.position.x);
  n.getParam("/pick_up/ty", goal.target_pose.pose.position.y);
  n.getParam("/pick_up/tz", goal.target_pose.pose.position.z);
  n.getParam("/pick_up/qx", goal.target_pose.pose.orientation.x);
  n.getParam("/pick_up/qy", goal.target_pose.pose.orientation.y);
  n.getParam("/pick_up/qz", goal.target_pose.pose.orientation.z);
  n.getParam("/pick_up/qw", goal.target_pose.pose.orientation.w);

   // Send the goal position and orientation for the robot to reach
  ROS_INFO("Sending PickUp Goal Position.");
  ac.sendGoal(goal);

  // Wait an infinite time for the results
  ac.waitForResult();

  // Check if the robot reached its goal
  if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED){
    ROS_INFO("Hooray, the robot reached the PickUp Position.");
    // Time for picking up
    ros::Duration(5.0).sleep();
  }
  else
    ROS_INFO("The base failed to move to PickUp Position for some reason");


  // Define a position and orientation for the robot to reach
  n.getParam("/drop_zone/tx", goal.target_pose.pose.position.x);
  n.getParam("/drop_zone/ty", goal.target_pose.pose.position.y);
  n.getParam("/drop_zone/tz", goal.target_pose.pose.position.z);
  n.getParam("/drop_zone/qx", goal.target_pose.pose.orientation.x);
  n.getParam("/drop_zone/qy", goal.target_pose.pose.orientation.y);
  n.getParam("/drop_zone/qz", goal.target_pose.pose.orientation.z);
  n.getParam("/drop_zone/qw", goal.target_pose.pose.orientation.w);

   // Send the goal position and orientation for the robot to reach
  ROS_INFO("Sending DropZone Position.");
  ac.sendGoal(goal);

  // Wait an infinite time for the results
  ac.waitForResult();

  // Check if the robot reached its goal
  if(ac.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
    ROS_INFO("Hooray, the robot reached the DropZone Position.");
  else
    ROS_INFO("The base failed to move to DropZone Position for some reason.");

  return 0;
}