#include "Currency_Demo.h"
#include <iostream>

currency :: currency(): rupees(0),paisa(0) {}

currency :: currency(int x, int y) : rupees(x),paisa(y) {}

currency :: currency(int x) : rupees(x),paisa(0) {}

currency currency :: operator+ (const currency& i){
    int f_rupees = rupees + i.rupees;
    int f_paisa = paisa + i.paisa;
    if(f_paisa>99)
    {
        f_rupees +=1;
        f_paisa = f_paisa-99;
    }
    return currency(f_rupees,f_paisa);
}

currency currency :: operator- (const currency& i){
    int f_rupees = rupees - i.rupees;
    int f_paisa = paisa - i.paisa;
    if(f_paisa<0)
    {
        f_rupees = f_rupees -1;
        f_paisa= f_paisa + 100;
    }
    return currency(f_rupees,f_paisa);
}

currency currency :: operator+ (int x){
   int f_rupees = f_rupees + x;
    int f_paisa = f_paisa + x;
    return currency(f_rupees,f_paisa);
}

currency currency :: operator- (int x){
    int f_rupees = f_rupees - x;
    int f_paisa = f_paisa - x;
    return currency(f_rupees,f_paisa);
}

currency& currency :: operator++ ()
{
    ++paisa;
    if(paisa >99)
    {
        rupees +=1;
        paisa -=99;
    }
    return *this;
}

currency& currency :: operator++ (int x)
{
    int f_paisa = paisa + x;
    int f_rupees = rupees;
    if(f_paisa>99)
    {
        f_rupees +=1;
        f_paisa -=99;
    }
    return *this;
}

bool currency :: operator== (const currency& j)
{
    return ((rupees==j.rupees) && (paisa == j.paisa));
}

bool currency :: operator< (const currency& j)
{
    return ((rupees<j.rupees) && (paisa < j.paisa));
}

bool currency :: operator> (const currency& j)
{
    return ((rupees > j.rupees) && (paisa > j.paisa));
}
void currency :: display()
{
    std :: cout <<rupees<<","<<paisa<<"\n";
}

int currency :: get_rupees()
{
    return rupees;
}

int currency :: get_paisa()
{
    return paisa;
}
