#include<iostream>
#include<string.h>
using namespace std;
struct Employee
{
    int empId;
    std::string companyName;
};
int main(){
    Employee emp1{188,"KPIT"};
    Employee emp2{200,"KPIT"};

    if(emp1.companyName ==emp2.companyName){
        Employee emp3{300,"KPIT"};
        cout<<"EMP"<<emp3.empId<<":"<<emp3.empId<<"emp3.companyName";

    }
    else{
        Employee emp3{300,emp1.companyName+emp2.companyName};
        cout<<"EMP"<<emp3.empId<<":"<<emp3.empId<<""<<emp3.companyName;
    }
    return 0;

}
