#include <stdio.h>
#include <stdlib.h>

struct point
{
  float x;
  float y;
  struct point *next;
};

typedef struct point Point;

Point *pointsList;

void add(float x, float y)
{
  Point *p = (Point *)malloc(sizeof(Point));
  p->x = x;
  p->y = y;
  p->next = pointsList;
  pointsList = p;
};

int main()
{
  add(1, 5);
  add(2, 7);
  add(5, 3);

  printf("%.0f", pointsList->x);
  printf("\n%.0f", pointsList->next->x);
  printf("\n%.0f", pointsList->next->next->x);

  return 0;
};