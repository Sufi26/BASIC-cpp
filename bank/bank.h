#ifndef BANK_H
#define BANK_H

#include<iostream>
#include<string.h>
using namespace std;
class bank{
    int acc_no;
    string name;
    double balance;


    public:
    
    void setaccno(int acc);
    int getaccno();

    void setaname(string n);
    string getname();

    void setbalance(float bal);
    float getbalance();

    bank();
    
};

#endif // BANK_H
