#include <iostream>
#include <string>
#include "visitor.h"

using namespace std;

visitor::visitor(){}

visitor::visitor(string name,int age,string gender,string phone,string ID);
{
    name = name;
    age = age;
    gender = gender;
    phone = phone;
    ID = ID;
}


bool visitor::has_reservation() {

};