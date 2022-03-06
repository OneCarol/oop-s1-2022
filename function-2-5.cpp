#include <iostream>
using namespace std;

bool descending(int array[],int n){
    bool a = true;
    bool b = false;

    int number = array[1];

    for(int i=0;i<n;i++){
        if(n<=0){
            return b;
           } else {
                if(number <= array[i]){
                    return a;
                    }else{
                        return b;
                    }
                }
            }
    return 0;
}