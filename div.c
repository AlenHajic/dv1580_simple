#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>

float my_div(float a, float b)
{
  if(b == 0.0)
  {
    printf("%s", "DIV ZERO NOT ALLOWED!");
    return -1.0;
  }
  
  return a / b;
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

int main(int argc, char *argv[]){

  argv[1] = "3";
  argv[2] = "2";

  if(isNumber(argv[1]) == true && isNumber(argv[2]) == true)
  {
    printf("%f", my_div((float)atof(argv[1]), (float)atof(argv[2])));
  }
  else
  {
    printf("%s", "You need to put in numbers");
  }

  return 0;
}
