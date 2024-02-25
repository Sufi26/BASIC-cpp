#include<iostream>
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

    void  setelectricityslab(int e){
        electricityslab=e;

    }
    int getelectricityslab(){
        return electricityslab;
    }
    void  setpresent_reading(long p){
        present_reading=p;

    }
    double getpresent_reading(){
        return present_reading;
    }

    void  setprevious_reading(long r){
        previous_reading=r;

    }
    double getprevious_reading(){
        return previous_reading;
    }

    void  setconsumption(long m){
        consumption=m;

    }
    double getconsumption(){
        return consumption;
    }

//its  a default constructor
     electricity (){
        sanctionload;
        electricityslab;
        present_reading;
        previous_reading;
        consumption;
        
    }
    void display(){
        cout<<"enter the value for sanction load: "<<endl;
        cout<<"enter the value for electricity lab: "<<endl;
        cout<<"enter the value for present reading: "<<endl;
        cout<<"enter the value for previous reading: "<<endl;
        cout<<"enter the value for consumption: "<<endl;

    }
    void accept(){
        int s,e;
       double p,r,m;

        cin>>s;
        cin>>e;
        cin>>p;
        cin>>r;
        cin>>m;


    }


    void calculate_electricity_bill(){
        int s,e;
       double p,r,m;
       if (r<p)
       {
        cout<<"The value of bill is zero"<<endl;
       }
       else{
            double val=(s*e)+static_cast <double>(m*e/100);
            cout<<"the electricity bill for a month is:"<<val<<endl;
        
       }
    }




};

int main(){
    electricity calculate;
  
  //calculate.getelectricityslab();
  //calculate.getpresent_reading();
  //calculate.getsanctionload();
  //calculate.getprevious_reading();
  //calculate.getconsumption();

    calculate.display();
    calculate.accept();
    calculate.calculate_electricity_bill();

    return 0;

}
