#include <gtest/gtest.h>
#include "mul.h"

TEST(MulTest, HandlesPositiveInput)
{
int result = mul(3, 6);

EXPECT_EQ(result, 18);
}

TEST(MulTest, HandlesZeroInput)
{
int result = divide(9, 0);

EXPECT_EQ(result, 0);
}