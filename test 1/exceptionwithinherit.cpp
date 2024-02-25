#include <iostream>
#include<exception> 
using namespace std; 

class overspeed: public exception{
    //int speed;
    public:
     const char* what(){
        return "check out ur car speed you are in the car not in  a aeroplane";

     }
};
int main(){
    int carspeed=0;
    try{
        while(1){
            carspeed+=10;
            if(carspeed>100){
                overspeed s;
                throw s;
            }
            cout<<"carspeed: "<<carspeed<<endl;
        }
    }
    catch(overspeed ex){
        cout<<ex.what();
    }
    return 0;
}