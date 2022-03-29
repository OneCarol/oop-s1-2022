#include <iostream>

int main(){

    int numbers;
    int index = 0;
    int length = 10;

    for(int i=0;i<10;i++){

        index++;

        std::cin >> numbers;

    }

    for(int i=0;i<length;i++){
        
        std::cout << index  << " " << numbers << std::endl;
    }

    return 0;
}