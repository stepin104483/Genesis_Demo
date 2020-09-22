#include "Fraction_final_demo.h"
#include <gtest/gtest.h>
namespace
{
    TEST(Fraction,Test)
    {
        Fraction f1(20,30);
        Fraction f2(30,40);
        Fraction f3;
        f3 = f1.operator+(f2);
        EXPECT_EQ(50,f3.get_num());
        EXPECT_EQ(70,f3.get_denom());

    }
}
/*
#include"distance.h"
#include<gtest/gtest.h>
TEST(Distance,test){
    Distance d1(10,20);
    Distance d2(11,22);
    Distance d3;
    d3=d1.operator+(d2);
    EXPECT_EQ(10,d1.feets());
    EXPECT_EQ(20,d1.inches());
    EXPECT_EQ(24,d3.feets());//23 and this is true
    EXPECT_EQ(false,d3==d1);
}
*/
