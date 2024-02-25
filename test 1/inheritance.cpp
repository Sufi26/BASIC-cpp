#include<iostream>
using namespace std;
class base{
    private:
    int i,j;
    public:
    void set(int a,int b){
        i=a;
        j=b;
    }
    void show(){
        cout<<i<<""<<j<<"\n";
    }

};
//inheritance class
class  derived:public base{
    private:
    int k;
    public:
    derived(int x)//constructor
    {
        k=x;
    }
    void showk(){
        cout<<k<<"\n";
    }
};
int main(){
    derived ob(3);
    ob.set(1,2);//access member of base from derived object
    ob.show();//access member of base
    ob.showk();//uses of member of derived class
    return 0;
}
