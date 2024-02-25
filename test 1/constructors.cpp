#include<iostream>
using namespace std;
class stud{
    public:
    int x,y;
    stud(){
        x=0;
        y=0;
        cout<<"its  a default constructor"<<endl;
    }
    stud(){
        x=x;
        y=y;
        cout<<"its a parameterized contructor"<<endl;
        cout<<x<<""<<y<<endl;
    }
};
int main(){
    stud s;
    cout<<endl;

    stud s1(10,30);
    return 0;

}