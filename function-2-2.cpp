#include <iostream>
using namespace std; 

int maximum(int array[], int n){
    int maxinum = n; 
    
    for(int i=0;i<n;i++){
        if(n<1){
            return 0; 
        }
        else{
            if (maxinum < array[i]) {
              maxinum = array[i];
            }
        }
    }
    return maxinum; 
}