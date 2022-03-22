#include <iostream>
using namespace std;

int size_of_variable_star_arr(){
    int count = 3;
    int *array = new int[count];

    cout << count * sizeof(array[0]) << endl;

    return 0;
}