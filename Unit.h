#ifndef Unit_H
#define Unit_H

class Unit{
    private:

    int m_bedrooms;
    int m_value;
    double m_area;


    public:

    Unit();
    Unit(int bedrooms, double area,int value);

    int get_bedrooms(){return m_bedrooms;}
    int get_value(){return m_value;}
    double get_Area(){return m_area;}

};
#endif