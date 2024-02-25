#include <iostream> 
using namespace std; 
class employee{
    protected:
    int emp_no.;
    int salary;
    virtual void  incometax() ;
    void display(){
        cout<<"employee no. :"<<emp_no<<" "<<"employee salary  "<<salary<<endl;
    }

};
class engineer{
    void incometax(){

    }
}