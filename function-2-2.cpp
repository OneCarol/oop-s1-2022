#include <iostream>
#include <cmath>
using namespace std;

int binary_to_number(int binary_digits[], int number_of_digits){

    int n = 0;

    for(int i = (n-1);i>=0;i--){
        n += binary_digits[i] * pow(2,number_of_digits-i-1);
    }

    return n;
}