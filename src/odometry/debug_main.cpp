#include <ros/ros.h>
#include <odometry.h>

int main(int argc,char **argv){
	ros::init(argc,argv,"beego_control_tf");
	
    odometryClass oc; //
    ros::spin();
	return 0;
}