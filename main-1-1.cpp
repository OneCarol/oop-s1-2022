#include <iostream>
#include <array>
using namespace std; 

int diagonal(int array[4] [4]); 

int main(){
    
    int i; int j; 
    
    int array[4][4] = {1,2,3,4, 5,6,7,8, 9,0,3,2, 5,6,7,8};
    
    cout << "The sum is:" << diagonal(array) << endl;
}