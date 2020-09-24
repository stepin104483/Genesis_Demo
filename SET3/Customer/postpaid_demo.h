#ifndef POSTPAID_DEMO_H_INCLUDED
#define POSTPAID_DEMO_H_INCLUDED

#include<string>
#include<cstdint>

#include "customer_demo.h"

class PostpaidCustomer : public CustomerBase {
  void billPay(double);
  int m_billDate;
  public:
  PostpaidCustomer();
  PostpaidCustomer(std::string,std::string,std::string,double,int);
  PostpaidCustomer(std::string,std::string,std::string);
  void credit(double);           //recharge or billPay
  void makeCall(double);
  double getBalance() const;
  void dispay() const;

};


#endif // POSTPAID_DEMO_H_INCLUDED
