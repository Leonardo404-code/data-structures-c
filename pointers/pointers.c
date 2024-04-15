#include <stdio.h>

int *p;
int val = 5;

int main()
{
  p = &val;
  printf("the pointer in 'p' is: %d", *p);
  return 0;
}