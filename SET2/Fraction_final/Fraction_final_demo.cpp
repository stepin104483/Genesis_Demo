#include "Fraction_final_demo.h"
#include <iostream>
Fraction :: Fraction(): num(0),denom(0) {}
Fraction :: Fraction(int x, int y): num(x),denom(y) {}
Fraction :: Fraction (int m): num(m),denom(m) {}
/*
Fraction Fraction :: operator+ (const Fraction &i)
{
    int f_num = num + i.num;
    int f_denom = denom + i.denom;
    //Fraction f(f_num,f_denom);
        Fraction a;
    a.f_num=this->f_num+i.f_num;
    return a;



    return Fraction(f_num,f_denom);

}

Fraction Fraction :: operator- (const Fraction &j)
{
    int f_num = num - j.num;
    int f_denom = denom - j.denom;
    //Fraction f(f_num,f_denom); //12354
    //return f;
    return Fraction (f_num,f_denom);
}
*/
int  Fraction :: get_num()
{
    return num;
}
int Fraction :: get_denom()
{
    return denom;
}

Fraction Fraction :: operator *(const Fraction &m)
{
    int num_mult = num*(m.num);
    int denom_mult = denom*(m.denom);
    Fraction f(num_mult,denom_mult);
    return f;
}
Fraction Fraction :: operator+ (int p)
{
    int n = num + p;
    int d = denom;
    return Fraction(n,d);
}
Fraction Fraction :: operator- (int p)
{
    int n = num-p;
    int d = denom;
    return Fraction(n,d);
}
bool Fraction :: operator== (const Fraction &ref)
{
        return num == ref.num && denom==ref.denom ;
}
bool Fraction :: operator< (const Fraction &ref)
{
    return (num == ref.num) < (denom==ref.denom) ;
}
bool Fraction :: operator > (const Fraction &ref)
{
    return (num == ref.num) > (denom==ref.denom) ;
}
double Fraction :: simplify()
{
    double res=0;
    if(denom !=0)
    {
        res = num/denom;
    }
    return res;
}
int Fraction :: isSimplest()
{
    if(denom == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void Fraction :: display()
{
    std::cout<<num<<","<<denom<<"\n";
}

