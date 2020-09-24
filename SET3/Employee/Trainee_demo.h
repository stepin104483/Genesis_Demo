#ifndef TRAINEE_DEMO_H_INCLUDED
#define TRAINEE_DEMO_H_INCLUDED
#include "Employee_Demo.h"
#include<iostream>

class Trainee : public Employee {
  std::string m_track;
  double score;
  public:
  Trainee(std::string id, std::string name, double salary,int exp,std::string track_code,double score);
  void payroll();
  void appraisal();
  void display();
};



#endif // TRAINEE_DEMO_H_INCLUDED
