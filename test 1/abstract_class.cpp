#include <iostream> 
using namespace std; 
class shape{
    //public:
     virtual void area(int r)=0;


};
class circle{
    public:
    void area(int r){
    cout<<"area of circle is"<<2*3.14*r*r<<endl;
    }

};
class square {
    public:
    void area(int r){
    cout<<"area of square is "<<r*r<<endl;
    }
};
int main(){
    circle *cptr;
    circle cc;
    cptr=&cc;
    cptr->area(10);
    square s;
    square *sptr;
    sptr=&s;
    sptr->area(20);
    return 0;

}
