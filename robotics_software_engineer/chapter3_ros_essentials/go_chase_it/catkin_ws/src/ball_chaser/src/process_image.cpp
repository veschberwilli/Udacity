#include "ros/ros.h"
#include "ball_chaser/DriveToTarget.h"
#include <sensor_msgs/Image.h>
#include "geometry_msgs/Twist.h"

// Define a global client that can request services
ros::ServiceClient client;

// This function calls the command_robot service to drive the robot in the specified direction
void drive_robot(float lin_x, float ang_z)
{
    // TODO: Request a service and pass the velocities to it to drive the robot
    ball_chaser::DriveToTarget service;
    service.request.linear_x = lin_x;
    service.request.angular_z = ang_z;

    // Call the safe_move service and pass the requested joint angles
    if (!client.call(service))
        ROS_ERROR("Failed to call service DriveToTarget.");
}

// This callback function continuously executes and reads the image data
void process_image_callback(const sensor_msgs::Image img)
{
    int white_pixel = 255;

    // TODO: Loop through each pixel in the image and check if there's a bright white one
    // Then, identify if this pixel falls in the left, mid, or right side of the image
    // Depending on the white ball position, call the drive_bot function and pass velocities to it
    // Request a stop when there's no white ball seen by the camera
    // height: nr of rows
    // width: nr of cols

    float lin_x, ang_z;
    bool detection = false;
    int count_col, count_row;

    // col ranges for ball in left/middle/right section
    int one_third = img.step / 3;
    int two_thirds = img.step / 3 * 2;
    
    for (count_row = 0; count_row < img.height && detection == false; count_row++) {
        int row_offset = count_row*img.step;
        for (count_col = 0; count_col < img.step && detection == false; count_col+=3) {
            // check if pixel is white
            if (img.data[row_offset+count_col] == white_pixel &&
                img.data[row_offset+count_col+1] == white_pixel &&
                img.data[row_offset+count_col+2] == white_pixel) {
                detection = true;
            }
        }
    }

    if (detection == true){
        lin_x = 0.1;
        // std::cout << "count_row: " << count_row << std::endl;
        // std::cout << "count_col: " << col << std::endl;
        // std::cout << "img.step: " << img.step << std::endl;
        // std::cout << "img.height: " << img.height << std::endl;
        // std::cout << "img.width: " << img.width << std::endl;
        // std::cout << "one_third: " << one_third << std::endl;
        // std::cout << "two_third: " << two_thirds << std::endl;
        // std::cout << "img.data[i*j]: " << img.data[count_row*count_col] << std::endl;
        // std::cout << "img.data[0]: " << img.data[0] << std::endl;
        // std::cout << "img.data[0]-img.data[0]: " << img.data[0]-img.data[0] << std::endl;

        if (count_col < one_third){
            // ROS_INFO_STREAM("Ball on the Left.");
            ang_z = 0.2;
        }
        else if (count_col >= one_third &&  count_col < two_thirds){
            // ROS_INFO_STREAM("Ball in the Middle.");
            ang_z = 0;
        }
        else if (count_col >= two_thirds){
            // ROS_INFO_STREAM("Ball on the Right.");
            ang_z = -0.2;
        }
        drive_robot(lin_x, ang_z);
    }
    else if (detection == false){
        ROS_INFO_STREAM("No Ball in Sight.");
        drive_robot(0, 0);
    }
}

int main(int argc, char** argv)
{
    // Initialize the process_image node and create a handle to it
    ros::init(argc, argv, "process_image");
    ros::NodeHandle n;

    // Define a client service capable of requesting services from command_robot
    client = n.serviceClient<ball_chaser::DriveToTarget>("/ball_chaser/command_robot");

    // Subscribe to /camera/rgb/image_raw topic to read the image data inside the process_image_callback function
    ros::Subscriber sub1 = n.subscribe("/camera/rgb/image_raw", 10, process_image_callback);

    // Handle ROS communication events
    ros::spin();

    return 0;
}