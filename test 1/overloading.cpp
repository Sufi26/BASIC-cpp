#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void swap(float *a,float *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    cout<<"enter the value "<<endl;
    int a,b;
    cin>>a>>b;
    cout<<"enter the value"<<endl;
    int c,d;
    cin>>c>>d;
    swap(&a,&b);
    swap(&c,&d);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;

}