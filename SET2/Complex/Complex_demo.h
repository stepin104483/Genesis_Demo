#ifndef COMPLEX_DEMO_H_INCLUDED
#define COMPLEX_DEMO_H_INCLUDED
class Complex
{
private:
    int real;
    int imag;
public:
    Complex();
    Complex(int,int);
    Complex(int);
    //Complex operator + (const Complex& );
    int getreal(){

    return real;
    }
    int getimag(){

    return imag;}

    Complex operator + (const Complex & ref_val1)
{
    int F_real = real + ref_val1.real ;
    int F_imag = imag + ref_val1.imag ;
    return Complex(F_real,F_imag);
}

    /*
    Complex operator - (const Complex & , const Complex&);
    Complex operator * (const Complex &,const Complex &);
    void operator ++ ();
    void operator ++ (int);
    bool operator == (const Complex &);
    void display();
    */
};

#endif // COMPLEX_DEMO_H_INCLUDED
