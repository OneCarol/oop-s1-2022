#include <iostream>
#include <string>
using namespace std;

void copy_2d_strings(std::string first[][2], std::string second[][2], int n){


    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){

            first[i][j] == second[i][j];

            cout << first[i][j];
            cout << second[i][j] << endl;

        }
    }

}