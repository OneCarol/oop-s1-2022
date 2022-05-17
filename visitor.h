#include <iostream>
#include <string>

using namespace std;

class visitor{

    private:
    string name;
    int age;
    string gender;
    string phone;
    string ID;

    public:
    visitor(){
        name = ""; 
        age = 0;
        gender = ""; 
        phone = ""; 
        ID = ""; 
    }

    
    string get_name(){return name;}
    int get_age(){return age;}
    string get_gender(){return gender;}
    string get_phone(){return phone;}
    string get_ID(){return ID;}
    bool has_reservation();

    void set_name(string new_name) { name= new_name;}
    void set_age(int new_age) {age = new_age;}
    void set_gender(string new_gender) { gender = new_gender;}
    void set_phone(string new_phone) { phone = new_phone;}
    void set_ID(string new_ID) { ID = new_ID;}

}; 