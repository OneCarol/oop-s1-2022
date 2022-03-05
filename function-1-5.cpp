#include <iostream> 
using namespace std; 

int count_even(int number){
   int counteven = 0; 
   
    if(number < 1){
               return 0; 
       } 
       else{
       for (int i=0;1<i<number; i++){
       if(i % 2 == 0){ 
            counteven ++; 
   }
   }}
   return counteven; 
}