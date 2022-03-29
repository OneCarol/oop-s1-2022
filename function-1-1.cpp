#include <iostream>

int *readNumber(){

    int numbers;

    for(int i=0;i<10;i++){

        std::cin >> numbers >> std::endl;

    }

    return numbers;

}

void printNumbers(int *numbers, int length){
    int index = 0;

    for(int j=0;j<length;j++){

        index[j]++;

        std::cout << index << " " << numbers << std::endl;
    }


}