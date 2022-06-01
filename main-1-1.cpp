#include 'animal.h'
#include 'animal.cpp'
#include <iostream>
#include <string>

using namespace std; 

int main() {
    
    animal n; 
    animal v; 
    
    set_name("Candy");
    set_volume(9);

  cout << "The area of the rectangle is: " << get_name() << endl;
  cout << "The area of the triangle is: " << get_volume() << endl;
  cout << get_animalID << endl; 
}