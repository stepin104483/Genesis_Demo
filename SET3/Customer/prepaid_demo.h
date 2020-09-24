#ifndef PREPAID_DEMO_H_INCLUDED
#define PREPAID_DEMO_H_INCLUDED
#include<string>
#include<cstdint>

#include "customer_demo.h"

class PrepaidCustomer : public CustomerBase {
  void recharge(double);
  public:
  PrepaidCustomer();
  PrepaidCustomer(std::string,std::string,std::string,double);
  PrepaidCustomer(std::string,std::string,std::string);
  void credit(double);           //recharge or billPay
  void makeCall(double);
  double getBalance() const;
  void dispay() const;
};
#endif // PREPAID_DEMO_H_INCLUDED
