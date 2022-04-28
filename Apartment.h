#ifndef Apartment_H
#define Apartment_H

class Unit{
    public:

    Unit();
    Unit(int bedrooms, double area,int value){

    this->bedrooms = bedrooms;
    this->area = area;
    this->value = value; }
};

class Apartment{

    private:

    int m_capacity = 10;
    int m_numbers;
    int m_content;
    int a_unit;

    public:
    Apartment();
    Apartment(int capacity);

    int get_capacity(){return m_capacity;}
    int get_current_number_of_units(){return m_numbers;}

    Unit * get_content();

    bool add_unit(Unit unit){
        if (m_capacity > m_numbers){

            a_unit = a_unit ++;
        };
        else {return 1;}
    };

    ~Apartment();

};
#endif