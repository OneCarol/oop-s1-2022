#include <iostream>

void printer(int array[10][10]);

int main(){

    int arrai[10][10] = {
      {1,0,0,0,0,0,0,0,0,0},
      {0,1,0,0,0,0,0,0,0,0},
      {0,0,1,0,0,0,0,0,0,0},
      {0,0,0,1,0,0,0,0,0,0},
      {0,0,0,0,1,0,0,0,0,0},
      {0,0,0,0,0,1,0,0,0,0},
      {0,0,0,0,0,0,1,0,0,0},
      {0,0,0,0,0,0,0,1,0,0},
      {0,0,0,0,0,0,0,0,1,0},
      {0,0,0,0,0,0,0,0,0,1},

    };

    printer(arrai);

      std::cout << printer(arrai) << std::endl;

      return 0;
}
re