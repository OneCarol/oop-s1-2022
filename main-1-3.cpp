#include <iostream>
using namespace std;

void count_numbers(int array[4][4]);

int main(){
    int array[4][4] = {0,1,2,3, 4,3,2,5, 6,7,8,9, 0,0,1,1};
    
    count_numbers(array);
    
    return 0; 
}