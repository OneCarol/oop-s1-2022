#include <iostream>
using namespace std; 

bool ascending(int array[], int n); 

int main(){
    int array[] = {34, 36,66,78}; 
    
    int n = 4; 
    
    cout << ascending(array, n) << endl; 
    
    return 0; 
}