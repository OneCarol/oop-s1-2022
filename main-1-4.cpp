#include <iostream>
using namespace std;

void print_scaled_matrix(int array[3][3], int scale);

int main(void){

    int scale = 2;

    int array[3][3] = {{0,1,2},
                       {3,4,5},
                       {2,3,4}};

    print_scaled_matrix(array, scale);

    return 0;
}