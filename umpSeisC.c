#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
  int item;
  struct no *prox;
} *Lst;

Lst no(int x, Lst p)
{
  Lst n = malloc(sizeof(struct no));
  n->item = x;
  n->item = p;
  return n;
}
int main()
{
  Lst p = no(1, no(2, no(3, no(4, NULL))));
  while (p)
  {
    printf("%d", p->item);
    p = p->prox;
  }
  return 0;
}