#include <iostream>
using namespace std;

void print_scaled_matrix(int array[3][3], int scale){

    int i;
    int j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){

            array[i][j] *= scale;

        }

    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){

          if(i==0&&i==1&&j==2){
              cout<<array[i][j];}
          else {

              cout << array[i][j] << " ";
          }

        }
        cout<<endl;

    }
}

