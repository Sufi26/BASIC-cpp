#include<iostream>
#include "base.h"
#include "child.h"
using namespace std;
int main(){
    child c;
    c.setI(5);
    c.setJ(10);
    cout << c.Multiply() << endl;
    return 0;
}