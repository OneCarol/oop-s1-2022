#include <iostream>
using namespace std; 

int maximum(int array[], int n); 

int main(){
    int array[]={1,2,3,4,5}; 
    int n = 5; 
    
    cout << "The maximum number is:" <<  maximum(array, n) << endl; 
    return 0; 
}