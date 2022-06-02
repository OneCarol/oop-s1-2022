#ifndef MINISTER_H
#define MINISTER_H
#include <iostream>
#include <string>

using namespace std; 

class Minister::public MemberOfParliament{
    
    private: 
    int memberID; 
    string state; 
    static int voterID; 
    
    public: 
    Minister(string n); 
    
    int get_memberID(); 
    string get_state(); 
    
    void set_memberID(){}; 
    void set_state(){}; 
}; 
