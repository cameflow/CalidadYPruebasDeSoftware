#include "first.h"
#include "gtest/gtest.h"

TEST (Factorial,positivos)
{
  ASSERT_EQ(1,factorial(1));
  ASSERT_EQ(120,factorial(5));
}

TEST (Factorial,negativos)
{
  ASSERT_EQ(0,factorial(-3))
  ASSERT_EQ(0,factorial(-8))
}
