#include <stdio.h>

int sum(int a, int b) {
  int s = a + b;
  return s;
}

int sub(int a, int b) {
  int s = a - b;
  return s;
}

int main() {
  int n1, n2, op, res;

  int end = 0;

  while (end == 0) {
    printf("\nType a number: ");
    scanf("%d", &n1);

    printf("\nType a second number: ");
    scanf("%d", &n2);

    printf("\nChose an operation:\n1 - Adition\n2 - Substraction\n");
    scanf("%d", &op);

    if (op == 1) {
      res = sum(n1, n2);
    }
    if (op == 2) {
      res = sub(n1, n2);
    }

    if (op != 1 && op != 2) {
      printf("error: invalid operation");
      continue;
    }

    printf("the result is: %d", res);
    printf("\n0 - Again\n1 - Stop\n");
    scanf("%d", &end);
  }

  return 0;
}
