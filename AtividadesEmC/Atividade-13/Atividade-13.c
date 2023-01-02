#include <math.h>
#include <stdio.h>

void lista_array(unsigned int[], unsigned int);
int main(void)
{
  unsigned int primos[1000000], primo, nao_primo, max;
  primos[0] = 2;
  primos[1] = 3;
  int no_primos = 2;
  int i;

  printf("Escreva um número que deseja saber a soma de todos os números"
         "primos até ele:\n");
  printf("Digite um número: ");
  scanf("%i", &max);
  for (i = 4; i <= max; i++)
  {
    primo = 0;
    nao_primo = 0;
    while (primo < no_primos && primos[primo] < sqrt(i) && !nao_primo)
    {
      if (i % primos[primo] == 0.0)
      {
        nao_primo = 1;
      }
      primo++;
    }
    if (!nao_primo)
    {
      primos[no_primos] = i;
      no_primos++;
    }
  }
  printf("Os números primos até %u sao: \n", max);
  lista_array(primos, no_primos);
  return 0;
}
void lista_array(unsigned int arr[], unsigned int no)
{
  int i = 0;
  while (i < no)
  {
    printf("%u\n", arr[i]);
    i++;
  }
}
