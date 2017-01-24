#include "gtest/gtest.h"
#include "Ordenamiento.h"


typedef Ordenamiento<int> * factoryMethod();

Ordenamiento<int> * instance1()
{
    return new Ordenamiento<int>();
}


class Fixture : public testing::TestWithParam<factoryMethod*>
{
protected:
    Ordenamiento<int> * instance2Test;
public:
    void SetUp()
    {
        instance2Test = (*GetParam())();
    }

    void TearDown()
    {
        delete instance2Test;
        instance2Test = NULL;
    }
};

TEST_P(Fixture, bubbleAsc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->burbuja(vec, 5, Ordenamiento<int>::asc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_LE(vec[i], vec[i+1]);
    }
}

TEST_P(Fixture, insertionAsc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->insercion(vec, 5, Ordenamiento<int>::asc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_LE(vec[i], vec[i+1]);
    }
}

TEST_P(Fixture, selectionAsc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->seleccion(vec, 5, Ordenamiento<int>::asc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_LE(vec[i], vec[i+1]);
    }
}

TEST_P(Fixture, quickAsc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->quicksort(vec, 0, 4, Ordenamiento<int>::asc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_LE(vec[i], vec[i+1]);
    }
}

TEST_P(Fixture, mergeAsc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->mergesort(vec, 0, 4, Ordenamiento<int>::asc, 5);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_LE(vec[i], vec[i+1]);
    }
}

TEST_P(Fixture, bubbleDesc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->burbuja(vec, 5, Ordenamiento<int>::desc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_GE(vec[i], vec[i+1]);
    }
}

TEST_P(Fixture, insertionDesc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->insercion(vec, 5, Ordenamiento<int>::desc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_GE(vec[i], vec[i+1]);
    }
}

TEST_P(Fixture, selectionDesc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->seleccion(vec, 5, Ordenamiento<int>::desc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_GE(vec[i], vec[i+1]);
    }
}

TEST_P(Fixture, quickDesc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->quicksort(vec, 0, 4, Ordenamiento<int>::desc);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_GE(vec[i], vec[i+1]);
    }
}

TEST_P(Fixture, mergeDesc)
{
    int vec[] = {2,4,6,1,10};
    this->instance2Test->mergesort(vec, 0, 4, Ordenamiento<int>::desc, 5);
    for(int i = 0; i < 4; ++i)
    {
        EXPECT_GE(vec[i], vec[i+1]);
    }
}

INSTANTIATE_TEST_CASE_P(CaseName, Fixture, testing::Values(&instance1));
