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

void imprime()
{
  Point *auxList = pointsList;
  while (auxList != NULL)
  {
    printf("\nPoint(%.1f,%.1f)", auxList->x, auxList->y);
    auxList = auxList->next;
  }
}

int main()
{
  add(1, 5);
  add(2, 7);
  add(5, 3);

  imprime();

  return 0;
};