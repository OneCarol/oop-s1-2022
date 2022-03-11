#include <iostream>
#include <string>
using namespace std;

void print_as_binary(std::string decimal_number){

    int n;
    int m[32];
    int index = 0;

    n = std::stoi(decimal_number);

    while(n > 0){

    m[index] = n % 2;
    index ++;
    n = n/2;

    }
    for(int i=(index-1);i>=0;i--){
        cout << m[i];
    }
    cout << endl;
}
