#include "child.h"

//constructor
child::child()
{
};

//parameter
child::child(int ID, string name)
{
    ID = ID;
    name = name;
	age = age; 
	gender = gender; 
};

//check reservation
void child::show_order()
{
    cout<<"This is a child ticket."<<endl;
    cout<<"The order number is : "<<this->order<<endl;
};

//cancel reservation
void child::cancel_order(){
    this->order = 0;
    global_order--;
};
