#include <iostream>
using namespace std;
#include "color_demo.h"

Color :: Color(): m_r(0), m_g(0), m_b(0) {}
Color :: Color(int x, int y, int z): m_r(x), m_g(y), m_b(z) {}
Color :: Color(int x): m_r(x){}
