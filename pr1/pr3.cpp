//use of access specifiers
#include<iostream>
using namespace std;
//creation of class
class hero
{
    //taking a public variable that can be accessed outside the class too

    public:
    int health;

    //taking a private variable which is not accessible outside the class

    private:
    char level='9';

    // we want to print the private variable thats way we need to declare it public

    public:
    void print(){    
        
        cout<<"level is:"<<level<<endl;
    }
};
int main(){
    hero ramesh;
    ramesh.health=80;
    cout<<"health is: "<<ramesh.health<<endl;
//calling the print function here so that we can print that values of private functions
    ramesh.print();
}