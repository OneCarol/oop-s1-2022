#include <iostream>

int main(){
    int *pointer_number, b = 100;

    pointer_number = &b;

    std::cout << "Adrress of b: " << pointer_number << std::endl;
    std::cout << "Value of b: " << *pointer_number << std::endl;

    return 0;
}