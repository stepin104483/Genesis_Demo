#include <iostream>
#include "Distance_final.h"

Distance::Distance():m_feets(0),m_inches(0){}
Distance::Distance(int a. int b):m_feets(a),m_inches(b){}
Distance Distance::operator+(const Distance& ref){
    int feet=m_feets+ref.m_feets;
    int inches=m_inches+ref.m_inches;
    if(inches>11){
        feet=feet+1;
        inches=inches-12;
    }
    return Distance(feet,inches);
}
int Distance::feets(){
    return m_feets;
}
int Distance::inches(){
    return m_inches;
}
Distance Distance::operator-(const Distance& ref){
    int feet=m_feets-ref.m_feets;
    int inches=m_inches-ref.m_inches;
    if(inches<0){
        feet=feet-1;
        inches=inches+12;
    }
    return Distance(feet,inches);
}
Distance Distance::operator++(){
    ++m_inches;
    if(m_inches>11){
        m_feets+=1;
        m_inches-=12;
    }
    return *this;
}
Distance Distance::operator++(int a){
    int inches=m_inches+a;
    int feet=m_feets;
    if(inches>11){
        feet+=1;
        inches-=12;
    }
    return Distance(feet,inches);
}
bool Distance::operator==(const Distance& ref){
    return m_feets=ref.m_feets && m_inches=ref.m_inches;
}
bool Distance::operator>(const Distance& ref){
    return m_feets>ref.m_feets && m_inches>ref.m_inches;
}
bool Distance::operator<(const Distance& ref){
    return m_feets<ref.m_feets && m_inches<ref.m_inches;
}
void Distance::display(){
    std :: cout<<m_feets<<","<<m_inches;
}
