#ifndef ENGINEE_DEMO_H_INCLUDED
#define ENGINEE_DEMO_H_INCLUDED
#include "Employee_Demo.h"
#include<iostream>

class Engineer : public Employee {
  int m_projCode;
  public:
  Engineer(std::string id, std::string name, double salary,int exp,int code);
  void payroll();
  void appraisal();
  void display();
};

#endif // ENGINEE_DEMO_H_INCLUDED
