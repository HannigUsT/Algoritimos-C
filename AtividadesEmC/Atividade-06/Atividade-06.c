#include <stdio.h>
int main()
{
  int altura, peso;
  printf("Escreva seu peso(em kg): \n");
  scanf("%d", &peso);
  printf("Escreva sua altura(em cm): \n");
  scanf("%d", &altura);
  if (altura <= 1.2)
  {
    if (peso <= 60)
    {
      printf("\n => A classificação dessa pessoa é A");
    }
    else if (peso <= 90)
    {
      printf("\n => A classificação dessa pessoa é B");
    }
    else
    {
      printf("\n => A classificação dessa pessoa é C");
    }
  }
  else if (altura > 1.7)
  {
    if (peso <= 60)
    {
      printf("\n => A classificação dessa pessoa é D");
    }
    else if (peso <= 90)
    {
      printf("\n => A classificação dessa pessoa é E");
    }
    else
    {
      printf("\n => A classificação dessa pessoa é F");
    }
  }
  else
  {
    if (peso <= 60)
    {
      printf("\n => A classificação dessa pessoa é G");
    }
    else if (peso <= 90)
    {
      printf("\n => A classificação dessa pessoa é H");
    }
    else
    {
      printf("\n  => A classificação dessa pessoa é I");
    }
  }
  return 0;
}
