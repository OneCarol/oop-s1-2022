#include <iostream>
using namespace std;

int main(){

 // Pointer declaration
 int *pointer_number, a = 10;

 // Assignment
 pointer_number = &a;

 cout << "Address of a:" << &a << endl;
 cout << "Address of a:" << pointer_number << endl;
 cout << "Address of pointer_number:" << &pointer_number <<endl;
 cout << "Value of a:" << *pointer_number << endl;

 return 0;

}