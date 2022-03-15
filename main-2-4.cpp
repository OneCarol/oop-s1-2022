#include <iostream>
using namespace std;

int main(){

    for(int i=0;i<4;i++){
    int *pointer_number, array[i];

    pointer_number = &array[i];

    cout << "The array is:" << *pointer_number << endl;

    }
    return 0;
}