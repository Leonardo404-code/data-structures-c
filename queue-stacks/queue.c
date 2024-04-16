#include <stdio.h>
#include <stdlib.h>

struct person
{
  int password;
  struct person *next;
};

typedef struct person Person;
Person *queue;

void add(int password)
{
  Person *p = (Person *)malloc(sizeof(Person));
  p->password = password;
  p->next = NULL;

  if (queue == NULL)
  {
    queue = p;
  }
  else
  {
    Person *queueAux = queue;
    while (queueAux->next != NULL)
    {
      queueAux = queueAux->next;
    }
    queueAux->next = p;
  }
}

void rem()
{
  if (queue == NULL)
  {
    printf("queue is empty");
  }
  else
  {
    queue = queue->next;
  }
}

void imprime(Person *p)
{
  if (p != NULL)
  {
    printf("\nThe person password is: %d", p->password);
    imprime(p->next);
  }
}

int main(void)
{
  add(5);
  add(10);
  add(20);
  add(50);

  Person *queueAux = queue;
  imprime(queueAux);
  rem();

  printf("\n");

  queueAux = queue;
  imprime(queueAux);
  rem();

  printf("\n");

  queueAux = queue;
  imprime(queueAux);

  return 0;
}