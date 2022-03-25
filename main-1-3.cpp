#include <iostream>
using namespace std;

void cpyia(int old_array[], int new_array[], int length);

int main(){

    int length = 5;

    int* old_array = new int[5];
    int* new_array = new int[5];

    cpyia(old_array, new_array, length);

    return 0;

}