#include "employee.h"

#include<iostream>
#include<string.h>
using namespace std;


void employee::setname(string name1)
{
    name=name1;
}

string employee::getname()
{
    return name;
}

void employee::setage(int age1)
{
    age=age1;
}

int employee::getage()
{
    return age;
}

void employee::setsalary(float salary1)
{
    salary=salary1;
}

float employee::getsalary()
{
    return salary;
}

void employee::setdepartment(Department d1)
{
    department=d1;
}

Department employee::getdepartment()
{
    return Department();
}



employee::employee(string name1, int age1, float salary1, Department d1)
{
    name=name1;
    age=age1;
    salary=salary1;
    department=d1;
}

void employee::display()
{
    cout<<"name is :"<<name<<endl;
    cout<<"age is: "<<age<<endl;
    cout<<"salary is:"<<salary<<endl;
    cout<<"department is:"<<endl;

    switch (department)
    {
    case IT:
    cout<<"IT"<<endl;
        break;
        case HR:
    cout<<"HR"<<endl;
        break;
        case Finance:
    cout<<"Finance"<<endl;
        break;

    
    default:
    cout<<"not applicable";
        break;
    }


}

void employee::display(string jobtitle)
{
    display();
    cout<<"job title is:"<<jobtitle<<endl;
}

void employee::display(string jobtitle, int yearsofexp)
{
    display(jobtitle);
    cout<<"job title :"<<jobtitle<<endl;
    cout<<"years of exp:"<<yearsofexp<<endl;

}
