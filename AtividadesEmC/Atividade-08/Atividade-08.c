#include <stdio.h>
int main(void)
{
  float X, Y;
  int Contador = 0, A = 0;
  do
  {
    printf("Digite as idades, pare quando for informado a idade 0:\n");
    scanf("%f", &X);
    Contador++;
    A = A + X;
  } while (X != 0);
  Y = (A / (Contador - 1));
  printf("A média é %.2f", Y);
  return 0;
}
