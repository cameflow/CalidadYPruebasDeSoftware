#include "gtest/gtest.h"
#include "Ordenamiento.h"

template <class instanceType>
class TypeParameterized : public testing::Test
{
public:
    TypeParameterized()
    {
        instance2Test = new instanceType;
    }
    ~TypeParameterized()
    {
        delete instance2Test;
        instance2Test = NULL;
    }
protected:
    Ordenamiento<int>* instance2Test;
};

TYPED_TEST_CASE_P(TypeParameterized);

TYPED_TEST_P(TypeParameterized, bubbleAsc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->burbuja(vec, 5, Ordenamiento<int>::asc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_LE(vec[i], vec[i+1]);
    }
}

TYPED_TEST_P(TypeParameterized, insertionAsc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->insercion(vec, 5, Ordenamiento<int>::asc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_LE(vec[i], vec[i+1]);
    }
}

TYPED_TEST_P(TypeParameterized, selectionAsc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->seleccion(vec, 5, Ordenamiento<int>::asc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_LE(vec[i], vec[i+1]);
    }
}

TYPED_TEST_P(TypeParameterized, quickAsc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->quicksort(vec, 0, 4, Ordenamiento<int>::asc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_LE(vec[i], vec[i+1]);
    }
}

TYPED_TEST_P(TypeParameterized, mergeAsc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->mergesort(vec, 0, 4, Ordenamiento<int>::asc, 5);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_LE(vec[i], vec[i+1]);
    }
}

TYPED_TEST_P(TypeParameterized, bubbleDesc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->burbuja(vec, 5, Ordenamiento<int>::desc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_GE(vec[i], vec[i+1]);
    }
}

TYPED_TEST_P(TypeParameterized, insertionDesc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->insercion(vec, 5, Ordenamiento<int>::desc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_GE(vec[i], vec[i+1]);
    }
}

TYPED_TEST_P(TypeParameterized, selectionDesc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->seleccion(vec, 5, Ordenamiento<int>::desc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_GE(vec[i], vec[i+1]);
    }
}

TYPED_TEST_P(TypeParameterized, quickDesc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->quicksort(vec, 0, 4, Ordenamiento<int>::desc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_GE(vec[i], vec[i+1]);
    }
}

TYPED_TEST_P(TypeParameterized, mergeDesc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->mergesort(vec, 0, 4, Ordenamiento<int>::desc, 5);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_GE(vec[i], vec[i+1]);
    }
}



REGISTER_TYPED_TEST_CASE_P(TypeParameterized, bubbleAsc,insertionAsc,selectionAsc,quickAsc,mergeAsc, bubbleDesc,insertionDesc,selectionDesc,quickDesc,mergeDesc);

typedef testing::Types<Ordenamiento<int> > implementations;

INSTANTIATE_TYPED_TEST_CASE_P(MiPrueba, TypeParameterized, implementations);
