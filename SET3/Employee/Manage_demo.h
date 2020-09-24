#ifndef MANAGE_DEMO_H_INCLUDED
#define MANAGE_DEMO_H_INCLUDED
#include "Employee_Demo.h"
#include<iostream>

class Manager : public Employee {
  int m_projCode;
  int m_reportees;
  public:
  Manager(std::string id, std::string name, double salary,int exp,int code,int reprtees);
  void payroll();
  void appraisal();
  void display();
};
#endif // MANAGE_DEMO_H_INCLUDED
