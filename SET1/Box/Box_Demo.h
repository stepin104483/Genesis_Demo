#ifndef BOX_DEMO_H_INCLUDED
#define BOX_DEMO_H_INCLUDED
// #include<iostream>
#include <string.h>
class Box{
private:
    double len;
    double bre;
    double hei;
public:
    Box();
    Box(int, int, int);
    Box(int);
    Box(const Box &);
    double Length(double);
    double Bredth(double);
    double Height(double);
    double volume(double,double,double);
    void display();
};
#endif // BOX_DEMO_H_INCLUDED
