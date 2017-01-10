#include "first.h"
#include <iostream>

int factorial(int a);
// 
// int main(int argc, char const *argv[])
// {
//   std::cout << factorial(4) << '\n';
//   return 0;
// }

int factorial(int a)
{
  if (a == 0)
  {
    return 1;
  }
  else
  {
    return factorial(a-1)*a;
  }
}
