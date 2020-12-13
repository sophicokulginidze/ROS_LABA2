#include "ros/ros.h"
#include "laba2/WEC.h"
#include <map>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char**argv){
    ros::init(argc, argv, "client");
    ros::NodeHandle n;
    ros::ServiceClient client = n.serviceClient<laba2::WEC>("country");
    laba2::WEC srv;

     while(ros::ok())
    {
        string country;
        cout << "Write the name of the country: ";
        cin >> country;

        srv.request.country = country;

         if(client.call(srv)) {
            cout << "Capital is  " << srv.response.capital << endl;
            cout << "Population is  " << srv.response.population << endl;
        }
        else {
            cout << "Error!" << endl;
            return 0;
        }
        
        // loop_rate.sleep();
    }
}