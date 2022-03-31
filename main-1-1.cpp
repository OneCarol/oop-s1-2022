#include <iostream>
using namespace std;

int *shift_left(int *vals, int len, int amount);

int main(){
    int vals[] = {1,24,6,8,9};
    int length = 5;
    int amounts = 6;

    int *sv=shift_left(vals,5,6);

    cout << *shift_left(vals,length,amounts) <<endl;


    return 0;
}