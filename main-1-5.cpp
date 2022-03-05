#include <iostream>
using namespace std; 

int count_even(int number); 

 int main(){
  int number; 
  cout << "Enter the Numbers:"; 
  cin >> number;
  
  cout << "To count the even number:" << count_even(number)<< endl; 
  
  return 0; 
 }