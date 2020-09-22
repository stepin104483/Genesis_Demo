#include "account.h"
#include <gtest/gtest.h>

namespace{

TEST(Account, a)
{
    Account a1;
    EXPECT_EQ(0.0,a1.getBalance());
}
}
/*
TEST(Account, Credit_Test)
{

}
}
*/
