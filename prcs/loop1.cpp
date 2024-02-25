/*Write a program in C++ to find the first 10 natural numbers.
Sample output:
The natural numbers are:
1 2 3 4 5 6 7 8 9 10*/


#include <iostream>
using namespace std;

int main(){
    int count=10;
    for (int i = 1; i <= count; i++)
    {
        cout<<"natural numbers are :"<<i<<endl;
        
    }
    return 0;
}