#include <iostream>
using namespace std;

void cpyda(double *old_array, double *new_array, int length);

int main(){

    int length = 3;

    double old_array[length] = {0.0,0.1,0.2};

    double *new_array = new double[length];

    cpyda(old_array, new_array,length);


    return 0;
}