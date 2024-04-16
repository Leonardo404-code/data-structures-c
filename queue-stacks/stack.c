#include <stdio.h>
#include <stdlib.h>

struct plate
{
  int color;
  struct plate *next;
};

typedef struct plate Plate;
Plate *stack;

void add(char color)
{
  Plate *p = (Plate *)malloc(sizeof(Plate));
  p->color = color;
  p->next = stack;
  stack = p;
}

void rem()
{
  if (stack == NULL)
  {
    printf("stack is empty");
  }
  else
  {
    stack = stack->next;
  }
}

void imprime(Plate *p)
{
  if (p != NULL)
  {
    printf("\nThe plate color is: %c", p->color);
    imprime(p->next);
  }
}

int main(void)
{
  add('b');
  add('r');
  add('g');
  add('y');

  rem();
  rem();

  Plate *stackAux = stack;
  imprime(stackAux);

  return 0;
}