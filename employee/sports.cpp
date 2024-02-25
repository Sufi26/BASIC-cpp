#include "sports.h"

//default cons defination
Student::Student() : roll_no(0), name("default") {}

//para cons defination
Student::Student(int n, std::string str, std::string sp) : roll_no(n), name(str), sprt(sp){}

//copy cons defination
Student::Student(const Student &obj)
{
    roll_no=obj.roll_no;
    name=obj.name;
    sprt=obj.sprt;
};

//doperator>> overloading defination
std::istream &operator>>(std::istream &is, Student &obj)
{
   std::cout<<"\nEnter roll no of student :- ";
   is>>obj.roll_no;
   std::cout<<"Enter name of student :- ";
   is>>obj.name;
   std::cout<<"Enter Sport of student (cricket,football,baseball):- ";
   is>>obj.sprt;
   return is;
}

//doperator<< overloading defination
std::ostream &operator<<(std::ostream &os, Student &obj)
{
    std::cout << "\nRoll no of student is :- ";
    os << obj.roll_no;
    std::cout << "\nName of student is :- ";
    os << obj.name;
    std::cout << "\nSport of student is :- ";
    if (obj.sprt == "cricket")
    {
        obj.sport = cricket;
    }
    else if (obj.sprt == "football")
    {
        obj.sport = football;
    }
    else if (obj.sprt == "baseball")
    {
        obj.sport = baseball;
    }

    switch (obj.sport)
    {
    case 0:
        std::cout << "cricket\n";
        break;
    case 1:
        std::cout << "football\n";
        break;
    case 2:
        std::cout << "baseball\n";
        break;

    default:
        break;
    }
    return os;
}

