#include <iostream>
using namespace std; 

int count_even(int number); 

 int main(){
  int number; 
  cout << "Enter the Numbers:"; 
  cin >> number;
  
  int counteven = count_even(number); 
  cout << "To count the even number:" << counteven << endl; 
  
  return 0; 
 }