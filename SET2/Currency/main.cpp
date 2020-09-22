#include "Currency_Demo.h"
#include <gtest/gtest.h>
TEST (currency,Test)
{
    currency c1(15,60);
    currency c2(12,45);
    currency c3;
    c3 = c2.operator-(c1);
   // c3 = c1.operator-(c2);
    EXPECT_EQ(3,c3.get_rupees());
   //EXPECT_EQ(5,c3.get_paisa());
   //EXPECT_EQ(5,c3.get_rupees());

}
