#include <iostream>
using namespace std; 

int sumtwo(int array[], int secondarray[], int n); 

int main(){
     int array[] = {1,2,3,4,5}; 
    int secondarray[] = {6,7,8,9,0}; 
    int n = 5; 
    cout << "The sum of two arrays is: " << sumtwo(array,secondarray,n) << endl; 
    return 0 ; 
}
