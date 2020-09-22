#ifndef COLOR_DEMO_H_INCLUDED
#define COLOR_DEMO_H_INCLUDED
class Color{
private:
    int m_r;
    int m_g;
    int m_b;
public:
    Color();
    Color(int,int,int);
    Color(int);
    Color(Color_t);
    int invert();
    void display();
};
#endif // COLOR_DEMO_H_INCLUDED
