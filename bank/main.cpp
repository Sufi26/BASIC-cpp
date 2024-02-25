#include "bank.cpp"
#include<iostream>
using namespace std;
int main(){
    bank mydetails;
    mydetails.setaccno(125346457);
    mydetails.setaname("sufi");
    mydetails.setbalance(4000.0);


    cout<<"the acc no is"<<mydetails.getaccno()<<endl;
    cout<<"the name of holder is:"<<mydetails.getname()<<endl;
    cout<<"the balance of acc holder is :"<<mydetails.getbalance()<<endl;

    return 0;
}