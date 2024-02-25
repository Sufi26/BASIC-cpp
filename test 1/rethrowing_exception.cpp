#include <iostream> 
using namespace std; 
void divide(double x,double y){
    cout<<"inside fn"<<endl;
    try
    {
        if(y==0)
        throw y;
        else
        cout<<"division = "<<x/y<<endl;
    }
    catch(double)
    {
       cout<<"caught double inside fn"<<endl;
       throw;          //rethrowing double
    }
    cout<<"end of fn"<<endl;
    
}
int main(){
    try
    {
        divide(10.5,2.0);
        divide(20.0,0.0);

    }
    catch(double)
    {
        cout<<"caught double inside main"<<endl;

    }
    cout<<"end of main"<<endl;

    return 0;
    
}