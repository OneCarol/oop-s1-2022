#include <iostream> 
using namespace std; 

int minimum(int array[], int n){
    
    int mininum = array[1]; 
    
    for (int i=0;i<n;i++){
        if(n<1){
            return 0; 
        }
        else{
            if (array[i] < mininum) {
                mininum = array[i]; 
            }
        } 
    }
    return mininum; 
}
