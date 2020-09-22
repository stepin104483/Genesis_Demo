#include "Complex_set4_demo.h"
#include <iostream>
using namespace std;

template <typename T>
Complex <T> :: Complex():m_real(0),m_image(0) {}

template <typename T>
<T> Complex  :: Complex(T x, T y):m_real(x),m_image(y){}

template <typename T>
void Complex<T> :: display()
{
    std :: cout<<m_real<<"+"<<m_image<<"i"<<endl;
}
