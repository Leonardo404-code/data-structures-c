#include <stdio.h>
#include <stdlib.h>

struct node
{
  int value;
  struct node *left;
  struct node *right;
};

typedef struct node Node;

Node *create(int value)
{
  Node *n = malloc(sizeof(Node));
  n->value = value;
  n->left = NULL;
  n->right = NULL;
  return n;
}

void imprime(Node *n)
{
  if (n == NULL)
    return;
  imprime(n->left);
  printf("\n%d", n->value);
  imprime(n->right);
}

void add(Node *n, int value)
{
  if (value < n->value)
  {
    if (n->left == NULL)
    {
      if (n->left == NULL)
        n->left = create(value);
      else
        add(n->left, value);
    };
  }
  else
  {
    if (n->right == NULL)
      n->right = create(value);
    else
      add(n->right, value);
  }
}

void rem(Node *n, int value)
{
  Node *son = n;
  Node *father;
  do
  {
    father = son;
    if (value < son->value)
      son = son->left;
    else if (value > son->value)
      son = son->right;
  } while (son != NULL && son->value != value);

  if (son != NULL)
  {
    if (son->left == NULL && son->right == NULL)
    {
      if (father->left == son)
        father->left = NULL;
      if (father->right == son)
        father->right = NULL;
    }
    if (son->left != NULL && son->right == NULL)
    {
      if (father->left == son)
        father->left = son->left;
      if (father->right == son)
        father->right = son->left;
    }
    if (son->left == NULL && son->right != NULL)
    {
      if (father->left == son)
        father->left = son->right;
      if (father->right == son)
        father->right = son->right;
    }
    if (son->left != NULL && son->right != NULL)
    {
      if (son->left->right == NULL)
      {
        son->value = son->left->value;
        son->left = NULL;
      }
      else
      {
        Node *p = son->left;
        Node *aux = p;
        while (p->right != NULL)
        {
          aux = p;
          p = p->right;
        }
        aux->right = NULL;
        son->value = p->value;
      }
    }
  }
}

int main(void)
{
  return 0;
}