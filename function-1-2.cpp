#include <iostream>
using namespace std;

int identity(int array[10][10]){
    bool a = 1;
    bool b = 0;
    int i;
    int j;

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){

            if(i==j){
                array[i][j] == 1;

                if(i!=j){
                    array[i][j] == 0;

                    return a;
                }

            }
            else {
                return b;
            }

        }

    }
    return 0;
}

