#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string.h>
using namespace std;
enum Department{IT,HR,Finance};
class employee{
    //private variables
    string name;
    int age;
    float salary;
    Department department;
    public:

    //paramterized constructor 

employee(string name1,int age1 ,float salary1,Department d1);


    void setname(string name1);
    string getname();
    void setage(int age1);
    int getage();
    void setsalary(float salary1);
    float getsalary();
    void setdepartment(Department d1);
    Department getdepartment();

    void display();
    void display(string jobtitle);
    void display(string jobtitle,int yearsofexp);


};




#endif // EMPLOYEE_H
