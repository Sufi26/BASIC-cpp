#ifndef ITEM_H
#define ITEM_H


#include<iostream>
using namespace std;




class Item{
    public:
    //data types as per problem statement
    int product_type;
    int no_of_items;
    int cash_in_hand;
    int cost_per_item;

    //default constructor called
    Item();
    //function defination
    void sell_item();

};


#endif // MCD_H
