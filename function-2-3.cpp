#include <iostream>
using namespace std;

bool is_a_palindrome(int integers[], int length){

    for(int i=0;i<length;i++){
        if(integers[i] != integers[length-i-1]){
            return -2;
        }
    }
    return 1;
}

int sum_if_a_palindrome(int integers[], int length){
    int sum;

    for(int i=0;i<length;i++){

        sum += integers[i];
    }
    return sum;
}


int sum_elements(int integers[], int length){
    for(int i=0;i<length;i++){
      if(length<=0){
          return -1;
      }
    }
    return 1;

}

