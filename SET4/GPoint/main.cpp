#include "GPoint_Demo.h"
#include <iostream>
using namespace std;

int main()
{
    Point<float> p(5,-10);
    p.display();
    p.distanceFromOrigin();
    p.quadrant();
    return 0;
}
