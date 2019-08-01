#include "ros/ros.h"
#include "std_msgs/String.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "talker");
    ros::NodeHandle nh;

    ros::Publisher chatter_pub = nh.advertise<std_msgs::String>("chatter", 1000);

    ros::Rate loop_rate(10);
    int i=0;
    while (ros::ok())
    {
        i++;
        std_msgs::String msg;
        msg.data = "hello world";
        printf("Hello World %d\n",i);

        chatter_pub.publish(msg);

        ros::spinOnce();

        loop_rate.sleep();
    }

    return 0;
}
