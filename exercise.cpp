#include <iostream>
#include <string>
using namespace std;

int main(){
    std::string first[3][2] = {
    {"Green", "Blue"},
    {"Blue", "Red"},
    {"Red", "Pink"},
    };

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){

            cout << first[i][j] <<endl;
        }

    }

        return 0;
}
