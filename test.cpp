#include "gtest/gtest.h"

bool IsEven(int n)
{
    return !(n % 2);
}

TEST(EvenTest, Positive)
{
    EXPECT_TRUE(IsEven(4));
    EXPECT_FALSE(IsEven(3));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
