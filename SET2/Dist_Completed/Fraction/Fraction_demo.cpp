#include "Fraction_demo.h"
#include <iostream>

Fraction :: Fraction() {};
Fraction :: Fraction(int x, int y): num(x),denom(y) {}
Fraction :: Fraction (int m): num(m),denom(0) {}
Fraction Fraction :: operator + (const Fraction & i)
{
    int F_num = num + i.num;
    int F_denom = denom + i.denom;
    return Fraction(F_num,F_denom);
}
Fraction Fraction :: operator - (const Fraction & j)
{
    int F_num = num - j.num;
    int F_denom = denom - j.denom;
    return Fraction(F_num,F_denom);
}
int  Fraction :: get_num()
{
    return num;
}
int Fraction :: get_denom()
{
    return denom;
}
void Fraction :: display()
{
    std::cout<<"Numerator: "<<num<<"Denominator: "<<denom<<"\n";
}
