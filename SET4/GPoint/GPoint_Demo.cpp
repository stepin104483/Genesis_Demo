#include "GPoint_Demo.h"
#include <iostream>
#include <math.h>
using namespace std;

template <typename T>
Point<T> :: Point():m_x(0), m_y(0) {}

template <typename T>
Point<T> :: Point(T x, T y): m_x(x), m_y(y) {}

template <typename T>
void Point<T> :: distanceFromOrigin()
{
    T d;
    d = sqrt((m_x*m_x) + (m_y*m_y));
    cout<<"Distance From Origin is: "<<d;
}

template <typename T>
Quadrant Point<T> :: quadrant()
{
    if(m_x>0 && m_y>0){return Q1;}
    if(m_x>0 && m_y<0){return Q4;}
    if(m_x<0 && m_y<0){return Q3;}
    if(m_x<0 && m_y>0){return Q2;}
}

template <typename T>
void Point<T> :: display()
{
    cout<<"X-Axis: "<<m_x<<"\n"<<"Y-Axis: "<<m_y<<"\n";
}
