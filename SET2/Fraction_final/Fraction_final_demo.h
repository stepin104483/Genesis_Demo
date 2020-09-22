#ifndef FRACTION_FINAL_DEMO_H_INCLUDED
#define FRACTION_FINAL_DEMO_H_INCLUDED
class Fraction
{
private:
    int num;
    int denom;
public:
    Fraction();
    Fraction(int,int);
    Fraction(int);
    Fraction operator + (const Fraction &i)
    {
        int f_num = num + i.num;
        int f_denom = denom + i.denom;
        return Fraction(f_num,f_denom);

    }
    /*{
    int f_num = num - j.num;
    int f_denom = denom - j.denom;
    return Fraction(f_num,f_denom);
    }
    a=b+B;
    */
    Fraction operator - (const Fraction &i)
    {

        int f_num = num - i.num;
        int f_denom = denom - i.denom;
        return Fraction(f_num,f_denom);


    }
    int get_num();
    int get_denom ();
    Fraction operator *(const Fraction &);
    Fraction operator + (int);
    Fraction operator - (int);
    bool operator == (const Fraction &);
    bool operator <(const Fraction &);
    bool operator >(const Fraction &);
    double simplify();
    int isSimplest();
    void display();
};
#endif // FRACTION_FINAL_DEMO_H_INCLUDED
