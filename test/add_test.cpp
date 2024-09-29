#include <gtest/gtest.h>
#include <add.cpp>

TEST(add, test_sumar_dos_enteros){
    int esperado = 8 + 2;
    int suma = add(8,2);
    ASSERT_EQ(esperado, suma);
}

TEST(add, test_sumar_dos_enteros_2){
    int esperado = 1 + 3;
    int suma = add(1,3);
    ASSERT_EQ(esperado, suma);
}

TEST(add, test_sumar_dos_enteros_3){
    int esperado = 2 + 4;
    int suma = add(2,4);
    ASSERT_EQ(esperado, suma);
}