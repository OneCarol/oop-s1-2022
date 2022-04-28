#include "Unit.h"
using namespace std;

Unit::Unit(){

     Unit(m_bedrooms, m_value, m_area);
};

Unit::Unit(int bedrooms, double area, int value){

    m_bedrooms = bedrooms;
    m_value = value;
    m_area = area;
};
