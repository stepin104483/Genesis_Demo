#ifndef COMPLEX_SET4_DEMO_H_INCLUDED
#define COMPLEX_SET4_DEMO_H_INCLUDED
template<typename T>
class Complex {
  T m_real;
  T m_image;
  public:
  Complex();
  Complex(T,T);
  void display();
};



#endif // COMPLEX_SET4_DEMO_H_INCLUDED
