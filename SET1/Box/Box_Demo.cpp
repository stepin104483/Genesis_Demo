#include <iostream>
#include "Box_Demo.h"
using namespace std;

Box :: Box(): len(0.0), bre(0.0), hei(0.0) {}
Box :: Box(int x, int y, int z): len(x), bre(y), hei(z) {}
Box :: Box(int x): len(x) {}
Box :: Box(const Box & ref_box): len(ref_box.len), bre(ref_box.bre), hei(ref_box.hei) {}
double Box ::  Length(double L)
{
    return L;
}
double Box ::  Bredth(double B)
{
    return B;
}
double Box ::  Height(double H)
{
    return H;
}
double Box :: volume(double L, double B, double H)
{
    return L*B*H;
}
void Box :: display()
{
    cout<<"Length: "<<len <<"Bredth: "<<bre<<"Height: "<<hei;
}



