#include <iostream>
using namespace std; 

int count_even(int number){
 int counteven = 0; 
 int array[number];
 
 for(int i=0;i<number;i++){

      if (number<1){
     return 0; 
 }
     else {
         if (array[i] % 2 == 0){
             counteven++ ; 
         }
     }
     }
 return counteven; 
}