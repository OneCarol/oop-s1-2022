#include <iostream>
using namespace std; 

bool descending(int array[], int n); 

int main(){
    int array[] = {99,87,65,21}; 
    
    int n = 4; 
    
    cout << descending(array, n) << endl; 
    
    return 0; 
}