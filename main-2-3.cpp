#include <iostream>
using namespace std;

int sum_if_a_palindrome(int integers[], int length);
bool is_a_palindrome(int integers[], int length);
int sum_elements(int integers[], int length);

int main(){
    int integers[] = {1,2,2,1};
    int length = 5;

    cout << "Whether it is a palindrome array:" << is_a_palindrome(integers,length) << endl;

    cout << "the sum of integer array:" << sum_if_a_palindrome(integers, length) << endl;
    cout << sum_if_a_palindrome(integers,length) << endl;
    return 0;
}
