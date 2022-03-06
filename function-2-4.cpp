#include <iostream>
using namespace std; 

bool ascending(int array[],int n){
    bool a = true; 
    bool b = false; 
    
    for(int i=0;i<n;i++){
        if(n<=0){
            return b; 
           } else {
                if(array[i] >= array[i+1]){
                    return a; 
                    }else{
                        return b; 
                    }
                } 
            }
    return 0; 
}