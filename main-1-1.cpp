#include <iostream>
#include <string>
using namespace std;

void copy_2d_strings(std::string first[][2], std::string second[][2], int n);

int main(){

    std::string first[3][2] = {
    {"Green", "Blue"},
    {"Blue", "Red"},
    {"Red", "Pink"},
    };

    std::string second[3][2];

    copy_2d_strings(first, second, 3);

    return 0;
}