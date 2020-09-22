#ifndef MYTIME_DEMO1_H_INCLUDED
#define MYTIME_DEMO1_H_INCLUDED
class Mytime
{
private:
    int hrs;
    int minutes;
    int sec;
public:
    Mytime();
    Mytime(int,int,int);
    Mytime(int,int);
    Mytime operator + (const Mytime &);
    Mytime operator - (const Mytime &);
    Mytime operator + (int);
    Mytime operator - (int);
    void operator++ ();
    void operator++ (int);
    bool operator == (const Mytime &) ;
    //Mytime& operator += ();
    Mytime& operator += (const Mytime &);
    bool operator < (const Mytime &);
    bool operator > (const Mytime &);
    void display();
};

#endif // MYTIME_DEMO1_H_INCLUDED
