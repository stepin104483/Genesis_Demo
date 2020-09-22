#ifndef __TRIANGLE_H
#define __TRIANGLE_H

#include "polygon.h"

class Triangle : public Polygon {
  int  m_a;
  int  m_b;
  int  m_c;

public:
  Triangle(int ,int ,int );
  double area() ;
  double circumference();
};

#endif
