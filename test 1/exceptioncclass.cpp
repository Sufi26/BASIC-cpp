#include <iostream>
#include<exception> 
using namespace std; 

class myexception: public exception{
    public:
     virtual const char* what() const throw(){
        return "y exception happened";
     }
}myex;

int main(){
    try{
        throw myex;
    }
    catch(exception &e){
        cout<<e.what()<<endl;
    }
    return 0;
}