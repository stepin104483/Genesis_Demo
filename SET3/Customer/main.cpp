#include "postpaid_demo.h"
#include "prepaid_demo.h"
#include "customer_demo.h"
#include <iostream>
using namespace std;

CustomerBase::CustomerBase():
    m_custId(" "),
    m_custName(" "),
    m_phone(" "),
    m_balance(0) { }

CustomerBase::CustomerBase(std::string id,std::string name,std::string phone,double balance):
    m_custId(id),
    m_custName(name),
    m_phone(phone),
    m_balance(balance) { }

CustomerBase::CustomerBase(std::string id,std::string name,std::string phone):
    m_custId(id),
    m_custName(name),
    m_phone(phone) {}

CustomerBase::CustomerBase(const CustomerBase& ref):
    m_custId(ref.m_custId),
    m_custName(ref.m_custName),
    m_phone(ref.m_phone),
    m_balance(ref.m_balance) {}
void CustomerBase::credit(double var)
{
    m_balance = m_balance+var;
}

void CustomerBase::makeCall(double m){
    int var = m*callRate;
    cout<<"Balance dedicted: "<<var<<endl;
}

double CustomerBase::getBalance() const
{
    return m_balance;
}
void CustomerBase::dispay() const
{
    cout<<"Customer ID: "<<m_custId<<endl;
    cout<<"Customer Name: "<<m_custName<<endl;
    cout<<"Customer Phone: "<<m_phone<<endl;
    cout<<"Customer Balance: "<<m_balance<<endl;
}

// -----------------------Prepaid-----------------------

PrepaidCustomer::PrepaidCustomer():
    CustomerBase(" "," "," ",0){}

PrepaidCustomer::PrepaidCustomer(std::string id,std::string name,std::string phone,double balance):
    CustomerBase(id,name,phone,balance) { }

PrepaidCustomer::PrepaidCustomer(std::string id,std::string name,std::string phone):
    CustomerBase(id,name,phone) {}

void PrepaidCustomer::credit(double val)
{
    cout<<"Customer Credited amount: "<<"\n";
    double CreditedAmount = val+CustomerBase::getBalance();
    cout<<CreditedAmount<<endl;
}

void PrepaidCustomer::makeCall(double x)
{
    cout<<"Balanced amount :"<<"\n";
    double temp = CustomerBase::getBalance() - x*callRate;
    cout<<temp;
}
double PrepaidCustomer::getBalance() const
{
    cout<<"Customer Balance: "<<"\n";
    double bal = CustomerBase::getBalance();
    cout<<bal<<endl;
}

void PrepaidCustomer::display()
{
    CustomerBase::dispay();
}

void PrepaidCustomer::recharge(double r)
{
    r = r+getBalance();
    cout<<"Total Balance after Recharge: "<<r<<endl;
}

// -----------------------Postpaid-----------------------

PostpaidCustomer::PostpaidCustomer():
    CustomerBase(" "," "," ",0),m_billDate(0) { }

PostpaidCustomer::PostpaidCustomer(std::string id,std::string name,std ::string phone,double bal,int billPay):
    CustomerBase(id,name,phone,bal),m_billDate(billPay) {}

PostpaidCustomer::PostpaidCustomer(std::string id,std::string name,std ::string phone):
    CustomerBase(id,name,phone){}

void PostpaidCustomer :: credit (double var)
{
    cout<<"Amount Credited: "<<"\n";
    double m = var + CustomerBase::getBalance();
    cout<<m<<endl;
}

void PostpaidCustomer::makeCall(double x)
{
    cout<<"total balance amount: "<<"\n";
    double temp = x*callRate + CustomerBase::getBalance();
    cout<<temp;
}

double PostpaidCustomer::getBalance()const
{
    double temp = CustomerBase::getBalance();
    return temp;
}

void PostpaidCustomer::dispay() const
{
    CustomerBase::dispay();
    cout<<"Bill date: "<<m_billDate;
}

void PostpaidCustomer:: billPay(double x)
{
    double temp;
    if(x==m_billDate)
    {
        temp = CustomerBase::credit(m_balance);
        cout<<temp;
    }
}
