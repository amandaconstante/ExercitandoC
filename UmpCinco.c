#include <stdio.h>

int main(void)
{
  int a = 3, b = 5;
  int *p = &a, *q = &b;

  *p = *p + *q; // altera a p a = 3+5, a == 8;
  *q = *p - *q; // b == 8 - 5, b == 3;
  *p = *p - *q; // a == 8-3, a == 5;
  printf("%d, %d\n", a, b);
  return 0;
}