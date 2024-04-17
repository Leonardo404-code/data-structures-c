#include <stdio.h>

struct person
{
  int age;
  float height;
};

typedef struct person Person;

int main()
{
  Person p;
  p.age = 5;
  p.height = 1.70;
  printf("the person age is: %d", p.age);
  printf("\nthe person height is: %.2f", p.height);
  return 0;
}