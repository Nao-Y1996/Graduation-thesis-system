#include <ros/ros.h>
#include <tf/transform_broadcaster.h>

int main(int argc, char** argv){
  ros::init(argc, argv, "NT_new_frame");
  ros::NodeHandle node;

  tf::TransformBroadcaster br;
  tf::Transform transform;
  tf::Transform transform2;
  tf::Transform transform3;

  ros::Rate rate(10.0);
  while (node.ok()){
    
/*
    transform.setOrigin( tf::Vector3(2, 1, 1.6) );
    transform.setRotation( tf::Quaternion(0, 0, 0, 1) );
    br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "map", "face"));
*/
    transform.setOrigin( tf::Vector3(-0.12, 0.022, 0.182) );
    transform.setRotation( tf::Quaternion(0, 0, 0, 1) );
    br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "head_pan_link", "P_cam"));
    
    transform.setOrigin( tf::Vector3(1.912, 0.0, 0.591) );
    transform.setRotation( tf::Quaternion(0, 0, 0, 1) );
    br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "P_cam", "P_face"));

    transform.setOrigin( tf::Vector3(-0.5, 0.0, -0.5) );
    transform.setRotation( tf::Quaternion(0, 0, 0, 1) );
    br.sendTransform(tf::StampedTransform(transform, ros::Time::now(), "P_face", "P_hand"));



    rate.sleep();
  }
  return 0;
};

