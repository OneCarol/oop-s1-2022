#include <iostream>
using namespace std;

void cpyia(int old_array[], int new_array[], int length);

int main(){

    int length = 5;
    int old_array[5] = {1,2,3,4,5};
    int new_array[5];

    cpyia(old_array, new_array, length);

    return 0;

}