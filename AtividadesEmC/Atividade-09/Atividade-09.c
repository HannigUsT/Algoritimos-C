#include <stdio.h>
int main()
{
  int x, y, t;
  t = 4;
  x = 0;
  while (x < t)
  {
    y = x + 1;
    while (y < t)
    {
      printf("Valores Parciais 1: %d%d%d\n", x, y, t);
      y = y + 1;
      t = t - 1;
    }
    x = x + 1;
    printf("Valores Parciais 2: %d%d%d\n", x, y, t);
  }
  printf("Valores Finais: %d%d%d\n", x, y, t);
  return 0;
}
