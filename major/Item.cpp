#include "Item.h"

#include<iostream>
using namespace std;

//default cocnstructor declaration
Item::Item()
{
    int product_type;
    int no_of_items;
    int cash_in_hand=100;
    int cost_per_item;

}

//function declaration

void Item::sell_item()
{

     int product_type;

    cout<<"enter product type: "<<endl;
    cin>>product_type;
    switch (product_type)
    {
        int no_of_items1,no_of_items2;
    case 1:
        cout<<"enter no. of burger"<<endl;
        cin>>no_of_items1;
        break;
    case 2:
        cout<<"enter no.of pizza"<<endl;
        cin>>no_of_items2;
        break;
    
    default:
    cout<<"invalid choice"<<endl;
        break;
    }

    if(cash_in_hand<=20){
        
        cout<<"balance pending u can buy more pizza or burger"<<endl;

    }
    else if(cash_in_hand<10)
    {
        cout<<"balance pending u can buy more pizza or burger"<<endl;
    }
   
   else{
        cout<<"low balance"<<endl;
    }
    
}

int main(){

    //object creation for class to initiating default constructor

    Item obj;
    
    //function sell item called
    obj.sell_item();                        

    //using loop untill balance is zero

    int cash_in_hand;
    while (cash_in_hand>=100)
     {
       obj.sell_item();
     }

     
    return 0;
}

