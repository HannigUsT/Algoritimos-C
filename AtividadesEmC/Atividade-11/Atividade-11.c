#include <stdio.h>
int main(void)
{
  float s, soma, media, c, resto;
  int a, count, maior, menor, s1;
  printf("Escolha a opção de 1 a 7. Para dar saída digite -1\n");
  printf("(1) Soma dos números digitados\n");
  printf("(2) Quantidade de números digitados\n");
  printf("(3) Média dos números digitados\n");
  printf("(4) Maior número digitado\n");
  printf("(5) Menor número digitado\n");
  printf("(6) Média dos números pares\n");
  printf("(7) Sair\n");
  scanf("%d", &a);
  switch (a)
  {
  case 1:
    printf("Soma\n");
    printf("Digite os numeros a serem somados, se deseja sair digite -1\n");
    do
    {
      printf("Digite um valor a ser somado:");
      scanf("%f", &s);
      soma = soma + s;
      printf("Resultado da soma = %f\n", soma);
    } while (s != -1);
    printf("A soma dos números é: %f\n", soma + 1);
    break;

  case 2:
    count = 0;
    do
    {
      printf("Digite um numero:\n");
      scanf("%f", &s);
      count++;
    } while (s != -1);
    printf("A quantidade de números digitados foram: %d", count - 1);
    break;

  case 3:
    count = 0;
    do
    {
      printf("Média dos números digitados:");
      scanf("%f", &s);
      count++;
      c = c + s;
    } while (s != -1);
    media = (c + 1) / (count - 1);
    printf("A media dos números digitados é :%.2f\n", media);
    break;

  case 4:
    printf("O maior numero digitado:");
    maior = 0;
    do
    {
      scanf("%f", &s);
      if (s > maior)
      {
        maior = s;
      }
    } while (s != -1);
    printf("O maior número digitado foi: %d\n", maior);
    break;

  case 5:
    printf("O menor número digitado\n");
    menor = 99999999;
    do
    {
      printf("digite um número\n");
      scanf("%f", &s);
      if (s < menor)
      {
        menor = s;
      }
      printf("Se deseja sair digite -1, se não digite 2 \n");
      scanf("%f", &c);
      printf("O menor numero digitado é: %d \n", menor);
    } while (c != -1);
    break;

  case 6:
    printf("Média dos números pares.\n");
    count = 0;
    do
    {
      printf("Digite um número\n");
      scanf("%d", &s1);

      if (s1 % 2 == 0)
      {
        soma = soma + s1;
        count++;
      }
      printf("%d\n", count);
      printf("%f\n", soma);
    } while (s1 != -1);
    c = soma / (count);
    printf("A média dos números pares é %.2f", c);
    break;

  case 7:
    printf("sair");
    break;
  default:
    printf("erro");
  }
  return 0;
}
