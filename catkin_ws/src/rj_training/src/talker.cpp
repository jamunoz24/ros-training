#include <ros/ros.h>
#include <rj_training/StringWithHeader.h>

int main(int argc, char** argv) {
    ros::init(argc, argv, "talker");
    ros::NodeHandle node_handle;
    ros::Publisher publisher = node_handle.advertise<rj_training::StringWithHeader>("talker_topic", 1);
    ros::Rate rate(10 /*Hz*/);

    while(ros::ok()) {
        rj_training::StringWithHeader msg;
        msg.data = "Hello!";
        publisher.publish(msg);
        ros::spinOnce();
        rate.sleep();
    }

    return 0;
}
