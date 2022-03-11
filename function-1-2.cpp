#include <iostream>
using namespace std;

int identity(int array[10][10]){
    int number = 0;

    int i;
    int j;

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){

        if(i==j && array[i][j] == 1 || i!=j&&array[i][j]==0){
                number ++;
            }

        }

    }

    if(number == 100){
        return 1;
    }
    return 0;
}

