#include <iostream> 
using namespace std; 

int sum_array(int array[], int n) {
    int sum = 0; 
    for (int i=0; i<n; i++){
        if(n<=0){
            sum = 0; 
        } 
        else {
            sum += array[i];
        }
        
    }
    

    return sum;
}

