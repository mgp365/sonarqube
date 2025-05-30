#include <gtest/gtest.h>
#include "mul.h"

TEST(DivTest, HandlesPositiveInput)
{
int result = mul(3, 6);

EXPECT_EQ(result, 18);
}

TEST(DivTest, HandlesZeroInput)
{
int result = divide(9, 0);

EXPECT_EQ(result, 0);
}