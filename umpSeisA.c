#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i, *v = malloc(4 * sizeof(int));
  for (i = 0; i < 4; i++)
  {
    v[i] = i + 1;
  }
  for (i = 0; i < 4; i++)
  {
    printf("%d\n", v[i]);
  }
  return 0;
}