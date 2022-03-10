#include <iostream>
using namespace std;

void print_summed_matrices(int array1[3][3], int array2[3][3]);

int main(void){

    int array1[3][3] = {
        {1,2,3},
        {3,4,5},
        {1,1,1}
    };
    int array2[3][3] = {
        {1,2,4},
        {0,1,0},
        {9,8,7}
    };

    print_summed_matrices(array1,array2);
    return 0;
}