#include <stdio.h>
#include <cstring>

int main(int argc, char const *argv[]) {
  char array1[9];
  char array2[9];
  int value = 10;

  strcpy(array1, "arrayOne");
  strcpy(array2, "arrayTwo");
  strcpy(array2, argv[1]);

  printf("array 1 is at %p with value %s\n", array1, array1);
  printf("array 2 is at %p with value %s\n", array2, array2);
  printf("value is at %p with value %d \n", &value, value);


  return 0;
}
