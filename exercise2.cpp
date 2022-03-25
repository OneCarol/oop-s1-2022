#include <iostream>
#include <string>
using namespace std;

int main(){

    class student{

        student s1("Feras", 2548, 99.6);
        student *p = &s1;

        cout << p ->get_name() <<endl;

    }; 
    return 0 ;
}





