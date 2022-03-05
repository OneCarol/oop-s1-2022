#include <iostream> 
using namespace std; 

double average(int array[], int n) {
    int sum = 0; 
    double average = 0; 
    for (int i=0; i<n; i++){
        if(n<=0){
            sum = 0; 
        } 
        else {
            sum += array[i];
            average = sum/n; 
        }
        
    }
    

    return average;
}