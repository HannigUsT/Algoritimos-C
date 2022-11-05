#include <stdio.h>
int main()
{
  float n1, n2;
  printf("Digite a altura do degrau em cm: ");
  scanf("%f", &n1);
  printf("Digite quanto de altura quer subir em cm: ");
  scanf("%f", &n2);
  printf("\nO numero de degraus e: %.2f", (n2 / n1));
  return 0;
}
