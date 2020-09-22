#ifndef FRACTION_DEMO_H_INCLUDED
#define FRACTION_DEMO_H_INCLUDED
class Fraction
{
private:
    int num;
    int denom;
public:
    Fraction();
    Fraction(int,int);
    Fraction(int);
    Fraction operator + (const Fraction &);
    Fraction operator - (const Fraction &);
    int get_num();
    int get_denom ();
    void display();
};


#endif // FRACTION_DEMO_H_INCLUDED
