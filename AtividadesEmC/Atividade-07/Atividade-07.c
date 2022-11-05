#include <stdio.h>
#include <stdlib.h>
int main()
{
  float valor, co;
  printf("Digite o valor do produto: ");
  scanf("%f", &valor);
  printf("Digite o codigo de Origem: ");
  scanf("%f", &co);
  if (co == 1)
  {
    printf("O produto de valor %2.2f tem sua procedencia do SUL!!\n", valor);
  }
  else if (co == 2)
  {
    printf("O produto de valor %2.2f tem sua procedencia do NORTE!!\n", valor);
  }
  else if (co == 3)
  {
    printf("O produto de valor %2.2f tem sua procedencia do LESTE!!\n", valor);
  }
  else if (co == 4)
  {
    printf("O produto de valor %2.2f tem sua procedencia do OESTE!!\n", valor);
  }
  else if (co == 5 || co == 6)
  {
    printf("O produto de valor %2.2f tem sua procedencia do NORDESTE!!\n",valor);
  }
  else if (co == 7 || co == 8 || co == 9)
  {
    printf("O produto de valor %2.2f tem sua procedencia do SUDESTE!!\n",valor);
  }
  else if (co >= 10 && co <= 20)
  {
    printf("O produto de valor %2.2f tem sua procedencia do CENTRO-OESTE!!\n",valor);
  }
  else if (co >= 21 && co <= 30)
  {
    printf("O produto de valor %2.2f tem sua procedencia do NOROESTE!!\n",valor);
  }
  else
    printf("Produto nao foi encontrado no sistema.");
  return 0;
}
