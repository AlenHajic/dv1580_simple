#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>

int mult(int a, int b)
{
  return a * b;
}

bool isNumber(const char *str)
{
  char *endptr;
  errno = 0;
  long val = strtol(str, &endptr, 10);

  if(errno == ERANGE || *endptr != '\0')
  {
    return false;
  }

 return true;
}

int main(int argc, char *argv[])
{
  argv[1] = "3";
  argv[2] = "2";

  if(isNumber(argv[1]) == true && isNumber(argv[2]) == true)
  {
    printf("%d", mult(atoi(argv[1]), atoi(argv[2])));
  }
  else
  {
    printf("%s", "You need to put in numbers");
  }

  return 0;
}
