#include <iostream>
#include <string>
#include "visitor.h"

using namespace std;

int main(){

    visitor V1;

    // V1.set_name("Sherry");

    cout << V1.get_name()<<endl;
    cout << V1.get_age()<<endl;
    cout << V1.get_gender()<<endl;
    cout << V1.get_phone()<<endl;
    cout << V1.get_ID()<<endl;

    return 0;
}