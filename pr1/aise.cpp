//class and object
#include<iostream>
using namespace std;

class hero{
    public:
    //defining here it self or can access it by using dot operator
    int health;//=70;
    char level;//='3';
   
};

int main(){
    //creation of obj
    hero ramesh;
//using dot operator we can define the value
    ramesh.health=70;
    ramesh.level='4';

    
    cout<<"health is :"<<ramesh.health<<endl;
    cout<<"level is :"<<ramesh.level<<endl;
    return 0;
}