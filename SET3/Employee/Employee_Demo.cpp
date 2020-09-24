#include "Employee_Demo.h"
#include "Enginee_demo.h"
#include "Manage_demo.h"
#include "Trainee_demo.h"
#define perdaysal  500
#include <iostream>
using namespace std;

void IEmployee :: payroll(){}
void IEmployee :: appraisal() {}

Employee :: Employee(std::string id, std::string name, double salary,int exp)
: m_empid(id),m_name(name),m_salary(salary),m_exp(exp) {}

void Employee :: display()
{
    cout<<"ID: "<<m_empid<<"\n"<<"Name: "<<m_name<<"\n";
    cout<<"Salary: "<<m_salary<<"\n"<<"Exp: "<<m_exp<<"\n";
}

void Employee :: setbalance(double var){
    m_salary=var;
}

double Employee :: getbalance(){
    return m_salary;
}

int Employee :: getExp(){
    return m_exp;
}

Engineer :: Engineer(std::string id, std::string name, double salary,int exp,int code)
:Employee(id,name,salary,exp),m_projCode(code){}

void Engineer :: payroll()
{
    cout<<"Salary of Engineer: "<<"\n";
    double sal = Employee::getExp()*perdaysal;
    cout<<sal<<endl;
    Employee :: setbalance(sal);
}

void Engineer :: appraisal()
{
    cout<<"appraisal of Engineer by 10%"<<"\n";
    int salar = Employee ::getbalance();
    salar = salar + salar*0.1;
    cout<<salar<<endl;
    Employee::setbalance(salar);
}
void Engineer :: display(){
    Employee::display();
    cout<<"project code: "<<m_projCode<<"\n";
}

Manager :: Manager(std::string id, std::string name, double salary,int exp,int code,int reprtees)
:Employee(id,name,salary,exp), m_projCode(code),m_reportees(reprtees) {}

void Manager :: payroll()
{
  cout<<"Manager Payroll is: "<<"\n";
  int pay = m_reportees*perdaysal;
  cout<<pay;
  Employee :: setbalance(pay);
}

void Manager :: appraisal()
{
    cout<<"Manager Appraisal is: "<<"\n";
    int temp = Employee::getbalance();
    temp = temp + temp*0.1;
    cout<<temp<<endl;
    Employee::setbalance(temp);
}
void Manager :: display()
{
    Employee::display();
    cout<<"Project Code: "<<m_projCode<<"Reportees: "<<m_reportees<<"\n";
}

Trainee :: Trainee(std::string id, std::string name, double salary,int exp,std::string track_code,double score)
: Employee(id,name,salary,exp),m_track(track_code),score(score) {}

void Trainee :: payroll()
{
    cout<<"Trainee Payroll is : "<<"\n";
    int p = score*10;
    cout<<p;
    Employee :: setbalance(p);
}

void Trainee :: appraisal()
{
    cout<<"Trainee Appraisal: "<<"\n";
    int temp = Employee :: getbalance();
    temp = temp + temp*0.1;
    cout<<temp<<endl;
    Employee::setbalance(temp);
}

void Trainee :: display()
{
    Employee::display();
    cout<<"m_track: "<<m_track;
    cout<<"Score: "<<score;
}

int main()
{
    cout<<".......................Engineer........................."<<endl;
    Engineer a1("1001","Divyesh",10000,8,93);
    a1.display();
    a1.payroll();
    a1.appraisal();
    cout<<".......................Manager........................."<<endl;



    Manager a("1001","Divyesh",10000,8,45,30);
    a.display();
    a.payroll();
    a.appraisal();

    cout<<".......................Trainee........................."<<endl;
    Trainee a2("1001","Divyesh",10000,35,"A_Track",93);
    a2.display();
    Manager a("1001","Divyesh",10000,8,45,30);
    a2.payroll();
    a2.appraisal();
    return 0;
}
