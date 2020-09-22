#include "Complex_demo.h"
#include <iostream>
Complex :: Complex():
    real(0),
    imag(0) {}
Complex :: Complex(int x,int y):
    real(x),
    imag(y){}
Complex :: Complex(int x):
    real(x),
    imag(0){}

/*
Complex Complex :: operator - (const Complex &
                                ref_val)
{
    int F_real = real - real.ref_val ;
    int F_imag = imag - imag.ref_val ;
    return Complex(F_real,F_imag);
}
Complex Complex :: operator * (const Complex & ref_val)
{
    Complex F_real = real * real.ref_val ;
    Complex F_imag = imag * imag.ref_val ;
    return Complex(F_real,F_imag);
}
void Complex :: operator ++ ()
{
    this -> real = (this ->real) +1;
   // return this;
}
void Complex :: operator ++ (int x)
{
    this -> real = (this -> real) + x;
    //return this;
}
bool Complex :: operator == (const Complex & ref_val)
{
    return real == ref_val.real && imag == ref_val.imag;
}
void Complex :: display()
{
    std::cout<<real<<"+"<<"i"<<imag;
}
*/
