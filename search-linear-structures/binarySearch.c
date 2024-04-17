#include <stdio.h>

int v[100];

int main(void)
{
  for (int i = 0; i < 100; i++)
  {
    v[i] = i + 1;
  }

  int num = 100;
  int comparisons = 0;
  int conti = 1;
  int ini = 0;
  int end = 99;

  while (conti == 1)
  {
    comparisons++;
    int pivo = (ini + end) / 2;
    if (v[pivo] == num)
    {
      printf("element found\n");
      conti = 0;
    }
    else
    {
      if (num > v[pivo])
      {
        ini = pivo + 1;
      }
      else
      {
        end = pivo - 1;
      }
    }
    if (end < ini)
    {
      printf("element not found\n");
      conti = 0;
    }
  }

  printf("comparisons: %d\n", comparisons);

  return 0;
}