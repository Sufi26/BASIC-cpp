#include <iostream>
#include "./Prototype.h"

int main(){
    Rectangle obj;
    obj.setmes(5, 10);
    std::cout<<obj.area()<<std::endl;

    return 0;
}