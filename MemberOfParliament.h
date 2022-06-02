#ifndef MEMBEROFPARLIAMENT_H
#define MEMBEROFPARLIAMENT_H
#include <iostream>
#include <string>

using namespace std; 

class MemberOfParliament{
    
    public: 
    MemberOfParliament(string n, string p, int l); 
    virtual bool isElectionYear() = 0; 
    
    string get_name(); 
    string get_position();
    int get_yearsService();
    
    void set_name(string n){}; 
    void set_position(string p){};
    void set_yearsService(int l){}
    
    private:
    string name; 
    string position; 
    int yearsService; 
    
    
};
#endif