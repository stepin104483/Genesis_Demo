#include "Box_Demo.h"
#include <gtest/gtest.h>

namespace {
TEST(lol,p)
{
    Box a1;
    EXPECT_EQ(0.0,a1.Length(0.0));
}
}
