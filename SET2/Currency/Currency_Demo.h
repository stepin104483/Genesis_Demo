#ifndef CURRENCY_DEMO_H_INCLUDED
#define CURRENCY_DEMO_H_INCLUDED
class currency
{
private:
    int rupees;
    int paisa;
public:
    currency();
    currency(int,int);
    currency(int);
    currency operator+ (const currency&);
    currency operator- (const currency&);
    currency operator+ (int);
    currency operator- (int);
    currency& operator++ ();
    currency& operator++ (int);
    bool operator== (const currency&);
    bool operator< (const currency&);
    bool operator> (const currency&);
    void display();
    int get_rupees();
    int get_paisa();
};
#endif // CURRENCY_DEMO_H_INCLUDED
