#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
  return a + b;
}

int main(int argc, char *argv[])
{
  printf("%d\n", add(atoi(argv[1]), atoi(argv[2])));
  return 0;
}
