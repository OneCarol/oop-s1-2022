#include <iostream>
using namespace std;

int size_of_variable_star_t(){

    int t, *pointer;
    pointer = &t;

    cout << sizeof(pointer) << endl;
    return t;
}