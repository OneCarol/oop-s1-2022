#include <iostream> 
using namespace std; 

int minimum(int array[], int n); 

int main(){
    int array[] {1,2,3,4,5}; 
    int n = 5; 
   
    cout << "The minimum number is:" << minimum(array,n) << endl; 
    return 0; 
}