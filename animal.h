
#include<iostream>
using namespace std;

class animal{

public:


animal(string n ,int v);


virtual string get_name() = 0;


void set_name(string n);

void set_volume(int v);

int get_volume();

int get_animal_ID();

};

#endif