#include <gtest/gtest.h>

int resta(int a, int b) {
    return a - b;
}

TEST(restaTest, RestaUno) {
    EXPECT_EQ(resta(10, 2), 8);
    EXPECT_EQ(resta(20, 2), 18);
}

TEST(restaTest, RestaDos) {
    EXPECT_EQ(resta(5, 1), 4);
    EXPECT_EQ(resta(4, 2), 2);
}

TEST(TestName, Subtest_1){
    ASSERT_FALSE(1==2);
}

int main(int argc, char **argv){
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
