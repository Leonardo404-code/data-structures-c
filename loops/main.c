#include <stdio.h>

int main() {
  printf("\nWhile loop\n");

  int a = 0;

  while (a<5) {
    printf("\nThe variable 'a' is %d", a);
    a++;
  }

  printf("\n\nFor Loop\n");

  for (int i=0; i<5; i++) {
    printf("\nThe variable 'i' is: %d", i);
  }

  return 0;
}
