#ifndef SPORTS_H
#define SPORTS_H

#include <iostream>

//enum defination
enum Sport
{
    cricket,
    football,
    baseball
};

//class student
class Student
{

public:
    int roll_no;
    std::string name;
    std::string sprt;

    //to assign default values
    Sport sport = baseball;

    //default 
    Student();

    //parametarized
    Student(int, std::string, std::string);

    //copy
    Student(const Student&);

    // operator >>
    friend std::istream &operator>>(std::istream &is, Student &obj);

    // operator <<
    friend std::ostream &operator<<(std::ostream &os, Student &obj);

    // setter to set values
    void setRoll(int roll_no)
    {
        this->roll_no = roll_no;
    }
    void setName(std::string name)
    {
        this->name = name;
    }
    void setSport(std::string sprt)
    {
        this->sprt = sprt;
    }

    // getters to get values

    int getRoll()
    {
        return roll_no;
    }
    std::string getName()
    {
        return name;
    }
    std::string getSport()
    {
        if (sprt == "cricket")
        {
            sport = cricket;
        }
        else if (sprt == "football")
        {
            sport = football;
        }
        if (sprt == "baseball")
        {
            sport = baseball;
        }

        switch (sport)
        {
        case 0:
            sprt="cricket\n";
            break;
        case 1:
            sprt="football\n";
            break;
        case 2:
            sprt="baseball\n";
            break;
        }
        return sprt;
    }
};

#endif // SPORTS_H
