#include<iostream>
#include<string.h>
using namespace std;
class Flight{
    public:
    string flight_no;
    double distance;
    string flight_type;
    double fuel_quantity;
    double fare;


     void  setflight_no(string f){
        flight_no=f;  

    }
    string getflight_no(){
        return flight_no;
    }

    void  distance(double d){
        distance=d;

    }
    double distance(){
        return distance;
    }
    void  setflight_type(string t){
        flight_type=t;

    }
    string  getflight_type(){
        return flight_type;
    }

    void  setfuel_quantity(double r){
        fuel_quantity=r;

    }
    double getfuel_quantity(){
        return fuel_quantity;
    }

    void  setconsumption(long m){
        consumption=m;

    }
    double getconsumption(){
        return consumption;
    }
//its  a default constructor
     Flight (){
        flight_no;
        distance;
        flight_type;
        fuel_quantity;
        fare;
        
    }
//


};