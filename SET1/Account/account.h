#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED
#include<iostream>
#include <string>
using namespace std;
class Account{
private:
    int m_accNumber;
    string m_accName;
    double m_balance;
public:
    Account();
    Account(int,string, double);
    Account(int,int);
    Account(const Account &);
    void debit(double);
    void credit(double);
    double getBalance();
    void display();
};
#endif // ACCOUNT_H_INCLUDED
