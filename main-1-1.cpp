#include <iostream>
#include <string>
using namespace std;

void copy_2d_strings(std::string first[][2], std::string second[][2], int n);

int main(){
    int i;

    string first[3][2] = {"A", "C", "S"};
    string second[i][2];

    copy_2d_strings(first, second, 3);

    cout << second[i][2] << endl;

    return 0;
}