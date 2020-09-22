#include "Complex_demo.h"
#include <gtest/gtest.h>
namespace
{
    /*
    TEST(Complex, Operator_Overloading_equality)
    {
        Complex c1(3,4);
        Complex c2(3,4);
        bool result;
        EXPECT_EQ(1,result);
    }
    TEST (Complex, Display)
    {
        Complex c1(100,500);
        std:: string Expected = "100 + 500*i";
        c1.display();
        EXPECT_STEQ(E);
    }
    */
    TEST (Complex, unaryAddition)
    {
        Complex a1(3,4);
        Complex a2(3,4);
        Complex res;
        res=a1+a2;
        EXPECT_EQ(6,res.getreal());
        EXPECT_EQ(8,res.getimag());


    }
}
