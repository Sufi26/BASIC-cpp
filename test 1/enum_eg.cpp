#include<iostream>
#include<string.h>

using namespace std;
enum desi{clerk,manager,engineer};
class employee{
    private:
    int id;
    string name;
    string birth_date;
    string designation;
    float sal;
    public:
    employee(int _id,string nm,string bdate,string d1,float _sal):id(_id),name(nm),birth_date(bdate),designation(d1),sal(_sal){}

    void display(){
        cout<<"ID:"<<id<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Birth Date :"<<birth_date<<endl;
        cout<<"Designation: "<<designation<<endl;
        cout<<"Salary: "<<sal<<endl;

    }
    int getsal(){
        return sal;
    }

};
int main(){
    employee obj1(1,"XYZ","18-03-2001","clerk",50000);
    employee obj2(2,"ABC","19-05-2002","manager",45000);
    employee obj3(3,"dac","26-03-2001","engineer",30000);

    if(obj1.getsal()>obj2.getsal()){
        swap(obj1,obj2);

    }
    if(obj2.getsal()>obj3.getsal()){
        swap(obj2,obj3);
        
    }
    if(obj1.getsal()>obj2.getsal()){
        swap(obj1,obj2);
        
    }

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;


}
