#include <iostream>
#include <string>
using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits);

int main(){
    int binary_digits[] = {1,0,1,1};
    int number_of_digits = 4;

    cout << binary_to_number(binary_digits,4) << endl;

    return 0;
}