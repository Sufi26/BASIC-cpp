#include<iostream>
using namespace std;
class  box{
    static int boxcount;
    public:
    int width,height;

    box(int width,int height){
        this->width=width;
        this->height=height;
        boxcount++;
    }
     int area(){
        return this->width*this->height;

     }
     static void displayCount(){
        cout<<"Count is"<<boxcount<<endl;

     }
     ~box(){
        cout<<"Destructor is called"<<endl;
     }
};

 int box::boxcount;
 int main()
 {
    box*b1=new box(10,20);
    cout<<"area is"<<b1->area()<<endl;
    b1->displayCount();
    delete(b1);
    box *b2 = new box(30,40);
    cout<<"area is"<<b2->area()<<endl;
    b2->displayCount();
    delete(b2);
    return 0;

 }