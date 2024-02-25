#include "./Prototype.h"
#include <iostream>

void Rectangle::setmes(int a, int b){
    length = a;
    breadth = b;
};

int Rectangle::area(){
    return length*breadth;
}
//g++ *.cpp && ./a.out