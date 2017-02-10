#include <stdio.h>
#include <cstring>

int fun(const char * pass)
{
  char p[10];
  strcpy(p,pass);
  int res = 0;
  if (!strcmp(p,"123456789"))
  {
    res = 1;
  }
  return res;
}

int main(int argc, char const *argv[])
{
  if(fun(argv[1]))
  {
    printf("Granted\n");
  }
  else
  {
    printf("go away\n");
  }
  return 0;
}
