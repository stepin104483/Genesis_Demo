#ifndef GPOINT_DEMO_H_INCLUDED
#define GPOINT_DEMO_H_INCLUDED
enum Quadrant {
  Q1,
  Q2,
  Q3,
  Q4
};


template<typename T>
class Point {
  T m_x;
  T m_y;
  public:
  Point();
  Point(T,T);
  void distanceFromOrigin();
  Quadrant quadrant();
  void display();
};
#endif // GPOINT_DEMO_H_INCLUDED
