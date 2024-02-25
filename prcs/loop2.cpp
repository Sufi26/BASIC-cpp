/*Write a program in C++ to find the sum of the first 10 natural numbers.
Sample Output:
Find the first 10 natural numbers:
---------------------------------------
The natural numbers are:
1 2 3 4 5 6 7 8 9 10
The sum of first 10 natural numbers: 55*/




#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter the value for n: "<<endl;
    cin>>n;

    for (int i = 0; i <=  n; i++)
    {
       sum+=i;
       
    }
    cout<<"the sum of n natural no.s is :"<<sum<<endl;
    
return 0;


}