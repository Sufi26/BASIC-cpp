#include<iostream>
using namespace std;
int main(){
    int a;
    int &ref=a;
    a=10;
    cout<<a<<" "<<"\n";
    ref=100;
    cout<<a<<" "<<ref<<"\n";
    int b=19;
    ref = b;
    cout<<a<<" "<<ref<<"\n";
    ref--;
    cout<<a<<" "<<ref<<"\n";
    return 0;
}