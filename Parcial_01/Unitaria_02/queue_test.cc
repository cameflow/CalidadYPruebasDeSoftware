#include"gtest/gtest.h"
#include"Almacen.h"
#include <time.h>

class TimeFixture : public testing::Test
{
    virtual void  SetUp(){
        tiempo = time(NULL);
    }

    virtual void TearDown()
    {
        EXPECT_TRUE((time(NULL) - tiempo) <= 10) << "Tardo demasiado tiempo.";
    }
private:
    time_t tiempo;
};

class AlmacenFixture : public TimeFixture
{
public:
    void SetUp(){
        //a->addFront(1);
    }
    void TearDown()
    {

    }
    static void SetUpTestCase()
    {
        a = new Almacen<int>(10);
    }
    static void TearDownTestCase()
    {
        delete a;
    }

    static Almacen<int> *a;
};

Almacen<int>* AlmacenFixture::a = 0;

TEST_F(AlmacenFixture, Constructor){
    a->getCapacity();
}
