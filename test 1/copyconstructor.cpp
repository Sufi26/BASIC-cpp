#include<iostream>
using namespace std;
class box{
    int l,b;

public:
box()
{
    l=b=10;

}
box(int l1 ,int j1){
    l=l1;
    b=j1;

}
box(const box &b1){
        l=b1.l;
        b=b1.b;
}
void dis()
{
    cout<<"box details"<<" "<<l<<" "<<b<<endl;
}
};
int main(){
    // box bb1;
    box bb2(100,200);
    box bb3=bb2;
    // bb1.dis();
    bb2.dis();
    bb3.dis();
    return 0;
}

