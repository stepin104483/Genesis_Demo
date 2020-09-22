#include<iostream>
#include "Account.h"
#include "CreditAccount.h"
#include "SavingsAccount.h"
using namespace std;
AccountBase::AccountBase() :
    m_accNumber(""),  m_accName(""), m_balance(0) {
}
AccountBase::AccountBase(string number, string name, double bal) :
   m_accNumber(number), m_accName(name), m_balance(bal) {
}
 AccountBase::AccountBase(const AccountBase& ref) :
        m_accNumber(ref. m_accNumber), m_accName(ref.m_accName), m_balance(ref.m_balance) {
}
void AccountBase::credit(double amount) {
  m_balance += amount;
}
void AccountBase::debit(double amount) {
  m_balance -= amount;
}

double AccountBase::getBalance() const {
    return m_balance;
}
void AccountBase:: display() const {
    cout <<  m_accNumber << "," << m_accName << "," << m_balance << "\n";
}
SavingsAccount::SavingsAccount():AccountBase(){}
SavingsAccount::SavingsAccount(string m_accNumber, string m_accName , double m_balance): AccountBase( m_accNumber, m_accName, m_balance){}
SavingsAccount::SavingsAccount(string m_accNumber, string m_accName ):
     AccountBase( m_accNumber, m_accName){}
void SavingsAccount:: debit(double amount){
 amt-=amount;
}
void SavingsAccount :: credit(double amount){
  amt+= amount;
}
void SavingsAccount :: display() const {
    cout <<  amt << "\n";
}
CreditAccount::CreditAccount():AccountBase(){}
CreditAccount::CreditAccount(string m_accNumber, string m_accName , double m_balance): AccountBase( m_accNumber, m_accName, m_balance){}
CreditAccount::CreditAccount(string m_accNumber, string m_accName ): AccountBase( m_accNumber, m_accName){}
void CreditAccount:: debit(double amount){
 m_amt-=amount;
}
void CreditAccount :: credit(double amount){
  m_amt+= amount;
}
void CreditAccount :: display() const {
    cout <<  m_amt << "\n";
}
