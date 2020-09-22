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

