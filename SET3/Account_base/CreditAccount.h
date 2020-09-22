#ifndef CREDITACCOUNT_H_INCLUDED
#define CREDITACCOUNT_H_INCLUDED
#include<string>
#include"account.h"

class CreditAccount : public AccountBase {
  public:
  CreditAccount();
  CreditAccount(std::string,std::string,double);
  CreditAccount(std::string,std::string);
  void debit(double);
  void credit(double);
  void dispay() const;
};
#endif // CREDITACCOUNT_H_INCLUDED
