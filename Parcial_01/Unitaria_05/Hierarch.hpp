#include <iostream>
using namespace std;

class Base
{

public:
  virtual ~Base(){}
  virtual int doSomething() = 0;
};

class Child1 : public Base
{
public:
  int doSomething()
  {
    cout << "I'm in child 1" << endl;
    return 1;
  }
};

class Child2 : public Base
{
public:
  int doSomething()
  {
    cout << "I'm in Child 2" << endl;
    return 1;
  }
};

class Child3 : public Base
{
  int age;

public:
  Child3(int x)
  {
    age = x;
  }
  int doSomething()
  {
    cout << "I'm Child 3 and I have " << age << " years" << endl;
    return 1;
  }
};
