#include "ros/ros.h"
#include "laba2/WEC.h"
#include <map>
#include <string>
#include <iostream>

using namespace std;

string get_capital(string country);
int32_t get_population(string country);

bool server_answer(laba2::WEC::Request &req, laba2::WEC::Response &res){
    ROS_INFO_STREAM("Country:" << req.country);

    res.capital = get_capital(req.country);
    res.population = get_population(req.country);
    return true;
}

int main(int argc, char**argv){
    ros::init(argc, argv, "Western_Europe_Countries_server");
    ros::NodeHandle n;

    ros::ServiceServer service = n.advertiseService("country", server_answer);
    ROS_INFO("Name of the country");
    ros::spin();

    return 0;
}

string get_capital(string country){
    string result;
    map < string, string > s;

    s["Austria"]="Vienna";
    s["Belgium"]="Brussels";
    s["France"]="Paris";
    s["Germany"]="Berlin";
    s["Liechtenstein"]="Vaduz";
    s["UK"]="London";
    s["Luxembourg"]="Luxembourg";
    s["Monaco"]="Monaco";
    s["Netherlands"]="Amsterdam";
    s["Switzerland"]="Bern";
    s["Ireland"]="Dublin";

    map < string, string > :: iterator it;
    it = s.find(country);
    it->second;
    if (it == s.end()) {
      ROS_INFO("Error!");
    } else {
        it->second;
        result = it;
    }
    return result;
}

int32_t get_population(string country){
    int32_t result;
    map < string, int32_t > s;

    s["Austria"]=8823054;
    s["Belgium"]=11414214;
    s["France"]=67848156;
    s["Germany"]=83019200;
    s["Liechtenstein"]=38013;
    s["UK"]=63182178;
    s["Luxembourg"]=602005;
    s["Monaco"]=37863;
    s["Netherlands"]=17418808;
    s["Switzerland"]=8847020;
    s["Ireland"]=4757976;

    map < string, int32_t > :: iterator it;
    it = s.find(country);
    it->second;
    if (it == s.end()) {
      ROS_INFO("Error!");
    } else {
        it->second;
        result = it;
    }
    return result;
}