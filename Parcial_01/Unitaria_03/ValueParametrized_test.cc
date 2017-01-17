#include "gtest/gtest.h"
#include "functions.h"

class FixValParam : public ::testing::TestWithParam<int>
{
public:
  virtual void SetUp(){}
  virtual void TearDown(){}
};

//Test for even function
TEST_P(FixValParam,Prueba1)
{
  if(GetParam()%2 == 0)
  {
    EXPECT_EQ(true, isEven(GetParam()));
  }
  else
  {
    EXPECT_EQ(false, isEven(GetParam()));
  }

}
//Test for odd function
TEST_P(FixValParam,Prueba2)
{
  if(GetParam()%2 != 0)
  {
    EXPECT_EQ(true, isOdd(GetParam()));
  }
  else
  {
    EXPECT_EQ(false, isOdd(GetParam()));
  }
}
//---- Test using values ----//
INSTANTIATE_TEST_CASE_P(UsingValues,FixValParam,testing::Values(2,4,6,8));
//---- Test using a range from 1-25 (25 is not included) ----//
INSTANTIATE_TEST_CASE_P(UsingRange,FixValParam,testing::Range(1,25,1));
//---- Test using values in array (Yoy can pass an interator or a container) ----//
int array[] = {1,2,3,4,5,6,7,8,9,10};
INSTANTIATE_TEST_CASE_P(UsingValuesIn,FixValParam,testing::ValuesIn(array));
