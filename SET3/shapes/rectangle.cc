#include"rectangle.h"
#include<math.h>

Rectangle::Rectangle(int len,int bre):m_length(len),m_breadth(bre),Polygon(4){}

double Rectangle::area()
{

    return m_length*m_breadth;
}

double Rectangle::circumference()
{

    return ((2*m_length)+(2*m_breadth));
}
