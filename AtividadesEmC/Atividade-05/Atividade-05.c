#include <stdio.h>
int main()
{
  printf("Digite tres numeros a fim de saber a ordem crescente.\n");
  float n1, n2, n3;
  scanf("%f %f %f", &n1, &n2, &n3);
  if (n1 > n2 || n1 > n3)
  {
    if (n2 > n3)
    {
      printf("Numeros em ordem crescente: %f, %f, %f", n1, n2, n3);
    }
    else if (n3 > n2)
    {
      printf("Numeros em ordem crescente: %f, %f, %f", n1, n3, n2);
    }
  }
  else if (n2 > n1 || n2 > n3)
  {
    if (n1 > n3)
    {
      printf("Numeros em ordem crescente: %f, %f, %f", n2, n1, n3);
    }
    else if (n3 > n1)
    {
      printf("Numeros em ordem crescente: %f, %f, %f", n2, n3, n1);
    }
  }
  else if (n3 > n1 || n3 > n2)
  {
    if (n1 > n2)
    {
      printf("Numeros em ordem crescente: %f, %f, %f", n3, n1, n2);
    }
    else if (n2 > n1)
    {
      printf("Numeros em ordem crescente: %f, %f, %f", n3, n2, n1);
    }
  }
  else
    printf("Os numeros sao iguais: %f, %f, %f", n1, n2, n3);
  return 0;
}
