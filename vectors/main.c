#include <stdio.h>

int v[4];

float v1[3];

int main()
{
  for (int i=0; i<3; i++) {
    printf("Type a number: ");
    scanf("%f", &v1[i]);
  }

  for (int i = 0; i < 3; i++) {
    printf("\n%.1f", v1[i]);
  }

  return 0;
}
