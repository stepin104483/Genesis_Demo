#include <iostream>
#include "account.h"

//using namespace std;
Account::Account():
    m_accNumber(0),
    m_accName(" "),
    m_balance(0.0) {}

Account:: Account(int acc_number, string acc_name , double acc_balance):
    m_accNumber(acc_number),
     m_accName(acc_name),
     m_balance(acc_balance) {}

Account :: Account(const Account& ref_value):
    m_accNumber(ref_value.m_accNumber),
    m_accName(ref_value.m_accName),
    m_balance(ref_value.m_balance) {}

void Account:: debit(double amount)
{
    m_balance -= amount;
}

void Account:: credit(double amount)
{
    m_balance += amount;
}

double Account :: getBalance()
{
    return m_balance;
}
void Account :: display()
{
    cout <<" m_accNumber: "<< m_accNumber<<"m_accName: " <<m_accName<<"m_balance: "<<m_balance;
}
