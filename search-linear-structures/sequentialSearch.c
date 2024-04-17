#include <stdio.h>

int v[10] = {4, 8, 2, 56, 34, 7, 98, 1, 25, 10};

int main(void)
{
  int num = 10;

  for (int i = 0; i < 10; i++)
  {
    if (v[i] == num)
    {
      printf("element found in position: %d\n", i);
    }
  }
}