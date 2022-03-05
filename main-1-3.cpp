#include <iostream> 
using namespace std; 

int count(int array[], int n, int number); 

int main(){
    int array[] = {1,2,3,7,9,1}; 
    int n = 6; 
    int number = 1; 
    cout << "The count of 1 is: " << count(array,n,number) << endl; 
    return 0; 
}