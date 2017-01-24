#include "gtest/gtest.h"
#include "Ordenamiento.h"

template<class instanceType>
class FixTyped : public testing::Test
{
public:
  FixTyped()
  {
    instance2Test = new instanceType;
  }
  virtual ~FixTyped()
  {
    delete instance2Test;
    instance2Test = NULL;
  }
protected:
  Ordenamiento<int>* instance2Test;
};

typedef testing::Types<Ordenamiento<int> > implementations;

TYPED_TEST_CASE(FixTyped, implementations);

TYPED_TEST(FixTyped, burbujaAsc)
{
  int arr[] = {4,1,6,8,3};
  this->instance2Test->burbuja(arr,5,Ordenamiento<int>::asc);
  for (int i = 0; i < 4; i++)
    EXPECT_LE(arr[i],arr[i+1]);
}

TYPED_TEST(FixTyped, insertionAsc)
{
  int arr[] = {4,1,6,8,3};
  this->instance2Test->insercion(arr,5,Ordenamiento<int>::asc);
  for (int i = 0; i < 4; i++)
    EXPECT_LE(arr[i],arr[i+1]);
}

TYPED_TEST(FixTyped, selectionAsc)
{
  int arr[] = {4,1,6,8,3};
  this->instance2Test->seleccion(arr,5,Ordenamiento<int>::asc);
  for (int i = 0; i < 4; i++)
    EXPECT_LE(arr[i],arr[i+1]);
}

TYPED_TEST(FixTyped, quickAsc)
{
  int arr[] = {4,1,6,8,3};
  this->instance2Test->quicksort(arr,0,4,Ordenamiento<int>::asc);
  for (int i = 0; i < 4; i++)
    EXPECT_LE(arr[i],arr[i+1]);
}

TYPED_TEST(FixTyped, mergeAsc)
{
  int arr[] = {4,1,6,8,3};
  this->instance2Test->mergesort(arr,0,4,Ordenamiento<int>::asc,5);
  for (int i = 0; i < 4; i++)
    EXPECT_LE(arr[i],arr[i+1]);
}

TYPED_TEST(FixTyped, burbujaDes)
{
  int arr[] = {4,1,6,8,3};
  this->instance2Test->burbuja(arr,5,Ordenamiento<int>::desc);
  for (int i = 0; i < 4; i++)
    EXPECT_GE(arr[i],arr[i+1]);
}

TYPED_TEST(FixTyped, insertionDes)
{
  int arr[] = {4,1,6,8,3};
  this->instance2Test->insercion(arr,5,Ordenamiento<int>::desc);
  for (int i = 0; i < 4; i++)
    EXPECT_GE(arr[i],arr[i+1]);
}

TYPED_TEST(FixTyped, selectionDes)
{
  int arr[] = {4,1,6,8,3};
  this->instance2Test->seleccion(arr,5,Ordenamiento<int>::desc);
  for (int i = 0; i < 4; i++)
    EXPECT_GE(arr[i],arr[i+1]);
}

TYPED_TEST(FixTyped, quickDes)
{
  int arr[] = {4,1,6,8,3};
  this->instance2Test->quicksort(arr,0,4,Ordenamiento<int>::desc);
  for (int i = 0; i < 4; i++)
    EXPECT_GE(arr[i],arr[i+1]);
}

TYPED_TEST(FixTyped, mergeDes)
{
  int arr[] = {4,1,6,8,3};
  this->instance2Test->mergesort(arr,0,4,Ordenamiento<int>::desc,5);
  for (int i = 0; i < 4; i++)
    EXPECT_GE(arr[i],arr[i+1]);
}
