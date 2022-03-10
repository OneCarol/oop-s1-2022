#include <iostream>
using namespace std;


 int diagonal(int array[4][4]){
    int i;
    int j;
    int sum = 0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
             if(i==j){
                 sum = sum + array[i][j];
                //  cout << array[i][j];
             }

        }

     }
     return sum;
}
