#include <iostream>
using namespace std;

void Binary(int n){
    int a;
    a = n % 2;
    n= n >> 1;

    if(0 != n){
        Binary(n);
    }
    cout << a;
}

int main(){
    int n = 685;


    Binary(n);

    return 0;
}

