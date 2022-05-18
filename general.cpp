#include"general.h"

//default constructor
general::general()
{
}

//parameter
general::general(int age, string name,string gender, string ID)
{
    ID = ID;
    name = name;
	gedner = gender; 
	age = age; 
    order = 0;
}

//apply oder
void general::apply_order(){
    order = global_order;
};

//check order
void general::show_order(){
    cout<<"This is a General ticket."<<endl;
    cout<<"The order number is : "<<this->order<<endl;
};

//cancel order
void General::cancel_order(){
    this->order = 0;
    global_order--;
};