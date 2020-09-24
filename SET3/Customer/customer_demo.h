#ifndef CUSTOMER_DEMO_H_INCLUDED
#define CUSTOMER_DEMO_H_INCLUDED
#include<string>
#include<cstdint>
const double callRate = 2.0;

enum AccountType {
  Prepaid,
  Postpaid
};

class CustomerBase {
  std::string m_custId;
  std::string m_custName;
  std::string m_phone;
  double m_balance;
  AccountType m_type;
  public:
  CustomerBase();
  CustomerBase(std::string,std::string,std::string,double);
  CustomerBase(std::string,std::string,std::string);
  CustomerBase(const CustomerBase&);
  virtual void credit(double)=0;           //recharge or billPay
  virtual void makeCall(double)=0;
  virtual double getBalance() const;
  virtual void dispay() const=0;
};



#endif // CUSTOMER_DEMO_H_INCLUDED
