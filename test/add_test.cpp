#include <gtest/gtest.h>
#include <add.cpp>

TEST(addTest, testSumarEnteros){
    EXPECT_EQ(add(8,2), 10);
}

TEST(add, test_sumar_enteros_2){
    EXPECT_EQ(add(1,3), 4);
}

TEST(add, testSumarEnteros3){
    ASSERT_EQ(add(2,4), 6);
}