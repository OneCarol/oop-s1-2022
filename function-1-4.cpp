#include <iostream> 
using namespace std; 

int sumtwo(int array[], int secondarray[], int n){
    int sumtwo = 0; 
    int sum1 = 0; 
    int sum2 = 0; 
    
    for (int i=0;i<n;i++){
        if(n<1){
            return 0; 
        }
        else{
         sum1 += array[i]; 
        }
    }
    for (int j=0;j<n;j++){
        if(n<1){
            return 0 ; 
        }
        else {
            sum2 += secondarray[j]; 
        }
    sumtwo = sum1 + sum2; 
        }
    return sumtwo; 
}