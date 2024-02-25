//constructor outside the class
#include<iostream>
using namespace std;
class student{
    int roll_n0;
    char name[10];
    double fee;
    public:
    student();
    void display();
};
student::student(){
    cout<<"enter ur roll no. :"<<endl;
    cin>>roll_n0;
    cout<<"enter ur name :"<<endl;
    cin>>name;
    cout<<"enter ur fee :"<<endl;
    cin>>fee;

}
void student:: display(){
    cout<<roll_n0;
    cout<<name;
    cout<<fee;
    

}