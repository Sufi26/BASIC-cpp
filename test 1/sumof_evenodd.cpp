#include<iostream>
using namespace std;
int main(){
    int even=0;
    int odd=0;
    for(int i=1;i<=10;i++){
        if(i%2==0) even+=i;
        else{
            odd+=i;
        }

    }
        cout<<"sum of even number is :"<<even<<endl;
        cout<<"sum of odd numbers is :"<<odd<<endl;

}