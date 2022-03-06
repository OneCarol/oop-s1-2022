#include <iostream>
using namespace std; 

bool ascending(int array[], int n); 

int main(){
    int array[] = {99,87,65,21}; 
    
    int n = 4; 
    
    cout << ascending(array, n) << endl; 
    
    return 0; 
}