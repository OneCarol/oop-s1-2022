#include "MemberOfParliament.h"

#include <iostream>
#include <string>

using namespace std; 

class MemberOfParliament::MemberOfParliament(string n, string p, int l){
    
    string name = " "; 
    string position = " "; 
    int yearsService = 0; 
    
    string get_name(){
        name = n; 
    }; 
    string get_position(){
        position = p; 
    };
    int get_yearsService(){
        yearsService = l; 
    };
    
    void set_name(string n){return get_name}; 
    void set_position(string p){return get_position};
    void set_yearsService(int l){return get_yearsService}; 
    bool isElectionYear(){
    }
        }
    
}; 

#endif