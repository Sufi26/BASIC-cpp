#include <iostream> 
using namespace std; 
class test{
    public:
    test(){
        cout<<"constructor of test"<<endl;

    }
    ~test(){
        cout<<"destructor of test"<<endl;

    }
};
int main(){
    try {
        test t1;
        throw 20;

    }
    catch(int i){
        cout<<"caught"<<i<<endl;
    }
}