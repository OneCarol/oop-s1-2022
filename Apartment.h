#ifndef Apartment_H
#define Apartment_H

class Apartment{
    
    private: 
    
    int m_capacity; 
    int m_numbers; 
    
    public: 
    Apartment(); 
    Apartment(int capacity);
    
    int get_capacity()
    int get_current_number_of_units()
    
    Unit * get_content()
    
    bool add_unit(Unit unit); 
    
    ~Apartment(); 
    
} 