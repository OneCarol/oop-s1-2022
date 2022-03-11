#include <iostream>
using namespace std;

void print_summed_matrices(int array1[3][3], int array2[3][3]){
    int i;
    int j;

    int sumatrix [3][3];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){

                sumatrix[i][j] = array1[i][j] + array2[i][j];
        }

    }

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==0&&i==1&&j==3){
              cout<<sumatrix[i][j];}
          else {

              cout << sumatrix[i][j] << " ";
          }
        }
        cout <<endl;
    }

}