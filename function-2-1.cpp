#include <iostream>
using namespace std;

int lookup_fishing_fine(int over){

    int fish_paid;
    int fish_over;

    if(0<fish_over<10){
            fish_paid = 180;
            cout << "my fishing fine is: " << fish_paid << endl;

    }


    else if(10<=fish_over<20){
            fish_paid = 406;
            cout << "my fishing fine is: " << fish_paid << endl;

    }

    else if(20<=fish_over<30){
            fish_paid = 825;
            cout << "my fishing fine is: " << fish_paid << endl;
    }

    else if(30<=fish_over<45){
            fish_paid = 1500;
            cout << "my fishing fine is: " << fish_paid << endl;
            }

    else if(fish_over <= 0 ){
            fish_paid = 0;
            cout << "my fishing fine is: " << fish_paid << endl;
        }
    else if(fish_over >=45){
            fish_paid = 1690;
            cout << "my fishing fine is: " << fish_paid << endl;
        }

    return fish_paid;

}