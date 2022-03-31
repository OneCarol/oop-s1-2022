#include <iostream>
using namespace std;

int count_numbers_in_range(int vals[], int length, int bottom, int top);

int main(){
    int len = 5;
    int bot = 1;
    int topone = 4;

    int vals[] = {1,2,3,4,6};

    cout << count_numbers_in_range(vals,5,1,4) << endl;  

    return 0;
}
