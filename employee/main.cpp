#include "employee.cpp"
#include<iostream>
using namespace std;

int main(){
    employee emp("john",30,60009.5,IT);
    emp.setsalary(384945.5);
    emp.setdepartment(HR);


    cout<<"basic info:"<<endl;
    emp.display();

    cout<<"info with job title"<<endl;
    emp.display("engineer");

    cout<<"info of jt and exp:"<<endl;
    emp.display("engineer",7);



}