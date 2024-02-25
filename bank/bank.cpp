#include "bank.h"
#include<iostream>
using namespace std;



void bank::setaccno(int acc)
{
    acc_no=acc;
}

int bank::getaccno()
{
    return acc_no;
}

void bank::setaname(string n)
{
    name=n;
}

string bank::getname()
{
    return name;
}

void bank::setbalance(float bal)
{
    balance=bal;
}

float bank::getbalance()
{
    return balance;
}

bank::bank()
{
    int acc_no;
    string name;
    float balance;

}
