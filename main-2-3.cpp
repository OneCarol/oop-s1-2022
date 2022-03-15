#include <iostream>
using namespace std;

int main(){
    int *pointer_number, c = 42;

    pointer_number = &c;

    cout << "Value of c:" << *pointer_number << endl;

    int *pointer_number2, d = c + 5;

    pointer_number2 = &d;

    cout << "Increment the value of c: " << *pointer_number2 << endl;
    return 0;
}