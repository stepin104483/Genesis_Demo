#include "Fraction_demo.h"
#include <gtest/gtest.h>
namespace
{
    TEST(Fraction, unaryAddition)
    {
       Fraction f1(3,5);
       Fraction f2(4,6);
       Fraction f3 = f1+f2;
       EXPECT_EQ(7,f3.get_num);
       EXPECT_EQ(11,f3.get_denom);
    }
     TEST(Fraction, unarySubtraction)
    {
       Fraction f1(3,5);
       Fraction f2(4,6);
       Fraction f3 = f1-f2;
       EXPECT_EQ(7,f3.get_num);
       EXPECT_EQ(11,f3.get_denom);
    }
}
