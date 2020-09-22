#include"shape.h"
#include"polygon.h"
#include"circle.h"
#include"triangle.h"
#include"rectangle.h"
#include<string>
#include<math.h>
#include <gtest/gtest.h>
namespace{
TEST(Circle,CircleAllTests) {
    Circle a1(5);

    constexpr static double PI = 22.0/7.0;
    double area=5*PI*5;
    double cir=2*PI*5;



    EXPECT_EQ(area,(a1.area()));
    EXPECT_EQ(cir,a1.circumference());

}

TEST(Triangle,TriangleAllTests)
{
    Triangle t1(2,2,2);
    int t=(2+2+2)/2;
    double a;
    a=sqrt(t*(t-2)*(t-2)*(t-2));

    double b=2+2+2;

    EXPECT_EQ(a,(t1.area()));
    EXPECT_EQ(b,(t1.circumference()));
}
TEST(Rectangle,RectangleAllTests)
{

    Rectangle r1(6,6);

    double a,b;
    a=6*6;
    b=2*(6+6);
    EXPECT_EQ(a,(r1.area()));
    EXPECT_EQ(b,(r1.circumference()));


}
}
