/*
 * Copyright (c) 2010, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Willow Garage, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived from
 *       this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <ros/ros.h>
#include <visualization_msgs/Marker.h>
#include "nav_msgs/Odometry.h"
#include <math.h>

// positions in robot_footprint frame
// start position
double pose_x;// = -1;
double pose_y;// = 0;
// pick up location
double pick_up_pos_x = 2;
double pick_up_pos_y = -1;
// pick up location
double drop_off_pos_x = 2;
double drop_off_pos_y = -2;
// position tolerance
double position_tol = 0.2;

// retrieve pose from odom topic
void get_pose(const nav_msgs::Odometry::ConstPtr& msg){
  pose_x = msg->pose.pose.position.x;
  pose_y = msg->pose.pose.position.y;
  std::cout << "Pose x: " << pose_x << "    Pose y: " << pose_y << std::endl;
}

// calculate dist of pose towards a goal
double distance_position_to_pose(double x, double y){
  return sqrt(pow((pose_x-x), 2) + pow((pose_y-y), 2));
}

int main( int argc, char** argv )
{
  ros::init(argc, argv, "add_markers");
  ros::NodeHandle n;
  ros::Rate r(1);
  ros::Publisher marker_pub = n.advertise<visualization_msgs::Marker>("visualization_marker", 1);
  ros::Subscriber odom_sub = n.subscribe("/odom", 1, get_pose);

  // Set our initial shape type to be a cube
  uint32_t shape = visualization_msgs::Marker::CUBE;

  // Define some states
  enum State {
    PICK,
    CARRY,
    DROP,
  } state = PICK;

  while (ros::ok())
  {

    visualization_msgs::Marker marker;
    // Set the frame ID and timestamp.  See the TF tutorials for information on these.
    marker.header.frame_id = "map";
    marker.header.stamp = ros::Time::now();

    // Set the namespace and id for this marker.  This serves to create a unique ID
    // Any marker sent with the same namespace and id will overwrite the old one
    marker.ns = "basic_shapes";
    marker.id = 0;

    // Set the marker type.  Initially this is CUBE, and cycles between that and SPHERE, ARROW, and CYLINDER
    marker.type = shape;    

    // Set the scale of the marker -- 1x1x1 here means 1m on a side
    marker.scale.x = 0.2;
    marker.scale.y = 0.2;
    marker.scale.z = 0.2;

    // Set the color -- be sure to set alpha to something non-zero!
    marker.color.r = 0.0f;
    marker.color.g = 1.0f;
    marker.color.b = 0.0f;
    marker.color.a = 1.0;

    marker.lifetime = ros::Duration();

    ros::spinOnce();

    // Let's do this
    // report current dist
    // std::cout << "dist to pick-up goal: " << distance_position_to_pose(pick_up_pos_x, pick_up_pos_y) << "m" << std::endl;

    // check dist to pick-up goal
    if (state == PICK){
      marker.pose.position.x = -1;
      marker.pose.position.y = -2;
      marker.pose.position.z = 0;
      marker.pose.orientation.x = 0.0;
      marker.pose.orientation.y = 0.0;
      marker.pose.orientation.z = 0.0;
      marker.pose.orientation.w = 1.0;

      marker.action = visualization_msgs::Marker::ADD;
      marker_pub.publish(marker);

      if (distance_position_to_pose(pick_up_pos_x, pick_up_pos_y) < position_tol){
        ROS_INFO("Pick Up Position Reached.");
        sleep(5);
        state = CARRY;
      }
    }
    else if (state == CARRY){
      marker.action = visualization_msgs::Marker::DELETE;
      marker_pub.publish(marker);
      if (distance_position_to_pose(drop_off_pos_x, drop_off_pos_y) < position_tol){
        ROS_INFO("Drop Off Position Reached.");
        state = DROP;
      }
    }
    else {
        // DropOff Zone
        marker.pose.position.x = -2;
        marker.pose.position.y = -2;
        marker.pose.position.z = 0;
        marker.pose.orientation.x = 0.0;
        marker.pose.orientation.y = 0.0;
        marker.pose.orientation.z = 0.0;
        marker.pose.orientation.w = 1.0;

        // add marker
        marker.action = visualization_msgs::Marker::ADD;
        marker_pub.publish(marker);

        ROS_INFO("Voila! Packagae Successfully Delivered :-)");
    }
  }
}