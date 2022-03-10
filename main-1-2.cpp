#include <iostream>
using namespace std;

int identity(int array[10][10]);

int main(){
   int array[10][10] = {1,2,3,4,5,6,7,8,9,0, 2,2,2,2,2,2,2,2,2,2, 1,1,1,1,1,1,1,1,1,1, 1,2,3,4,5,6,7,8,9,0};

   cout << "Whether this is a identity matrix:" << identity(array) << endl;

   return 0;
}