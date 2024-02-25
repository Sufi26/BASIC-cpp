#include<iostream>>
using namespace std;
class electricity{
    public:
    int sanctionload;
    int electricityslab;
    long present_reading;
    long previous_reading;
    long consumption;

    void  setsanctionload(int s){
        sanctionload=s;

    }
    int getsanctionload(){
        return sanctionload;
    }

    void  electricityslab(int e){
        electricityslab=e;

    }
    int electricityslab(){
        return electricityslab;
    }



};
int main(){
    cout<<"";
    return 0;

}