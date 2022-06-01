#ifndef ZOO_H

#define ZOO_H

// Include the required header files.

#include "vegie.h"

#include "hunter.h"

#include "animal.h"

#include <iostream>

#include<string>

using namespace std;

// Define the class.

class zoo{

public:

// Declare the constructor.

zoo(string n,int cows,int lions);

// Declare the member functions.

string get_name();

int get_number_of_animals();

animal** get_animals();

private:

// Declare the member variables.

string name;

int number_of_animals;

animal **animals;

};

#endif