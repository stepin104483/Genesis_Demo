#include "Distance_Demo.h"
#include <gtest/gtest.h>

namespace
{
    TEST (Distance, unaryAddition)
        {
            Dist d1(2.4,5.8);
            Dist d2(3.8,8.9);
            Dist res = d1+d2;
            EXPECT_EQ  (6.2,res.get_feet());
            EXPECT_EQ  (14.7,res.get_inch());
        }
        TEST (Distance, unarysubtraction)
        {
            Dist d1(3.8,8.9);
            Dist d2(3.4,5.8);
            Dist res = d1-d2;
            EXPECT_EQ  (0.4,res.get_feet());
            EXPECT_EQ  (3.1,res.get_inch());
        }
}
