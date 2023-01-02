#include <stdio.h>

#include <stdlib.h>

int main(void)
{
  int x, Pessoas, cont, contM, contH, N, Num, contP, controle, umAvinte;
  float Dividendo, Divisor, Divisão, y, MediaI, mediaSexoM, mediaSexoH, Idade[Pessoas];
  char sexo[Pessoas];

  do
  {
    printf("Escolha a opção de 1 a 7. Para dar saída digite 7\n");
    printf("-----------------------------------------------------\n");
    printf("(1) Divisão dos números digitados.\n");
    printf("(2) Faixa Etária das pessoas.\n");
    printf("(3) Números primos.\n");
    printf("(4) Retornar o maior, menor e média.\n");
    printf("(5) Código Morse.\n");
    printf("(6) Mudança de base.\n");
    printf("(7) Sair\n");
    printf("-----------------------------------------------------\n");
    scanf("%d", &x);
    cont = 0;
    contM = 0;
    contH = 0;
    MediaI = 0;
    contP = 0;
    system("clear");
    switch (x)
    {
    case 1:
      // Usúario entra com dois números e sai com a divisão deles. Primeiro o usúario vai digitar o Dividendo, e depois o Divisor. Dividendo/Divisor = Resultado.
      printf("-----------------------------------------------------\n");
      printf("Para efetuar a divisão, digite o dividendo e o divisor:\n");
      printf("Dividendo:");
      scanf("%f", &Dividendo);
      printf("Divisor:");
      scanf("%f", &Divisor);
      Divisão = Dividendo / Divisor;
      printf("-----------------------------------------------------\n");
      printf("O resultado da divisão é %f\n", Divisão);
      printf("-----------------------------------------------------\n");
      break;

    case 2:
      // O usúario vai entrar com a quantidade de pessoas que deseja para o cálculo dá faixa etária. Após fornecer a quantidade de pessoas, vai fornecer a idade e o sexo digitando H ou M, após isso o programa vai fazer a média de pessoas, e a média de pessoas de cada sexo H e M.
      printf("-----------------------------------------------------\n");
      printf("Quantindade de pessoas para o cálculo da faixa etária:\n");
      scanf("%d", &Pessoas);

      for (int i = 1; i <= Pessoas; i++)
      {
        printf("Digite a idade de cada pessoa:\n");
        scanf("%f", &Idade[i]);
        printf("Digite o sexo da pessoa, H para homem, M para mulher:\n");
        scanf("%s", &sexo[i]);
        printf("-----------------------------------------------------\n");
        printf("Sexo(%d):%c\n", i, sexo[i]);
        printf("Idade(%d):%f\n", i, Idade[i]);
        printf("-----------------------------------------------------\n");
      }
      for (int i = 1; i <= Pessoas; i++)
      {
        MediaI = (MediaI + Idade[i]);
        if (sexo[i] == 'M')
        {
          printf("");
          mediaSexoM = mediaSexoM + Idade[i];
          contM++;
        }
        else
        {
          printf("");
          mediaSexoH = mediaSexoH + Idade[i];
          contH++;
        }
      }
      MediaI = (MediaI / Pessoas);
      mediaSexoM = (mediaSexoM / contM);
      mediaSexoH = (mediaSexoH / contH);
      printf("-----------------------------------------------------\n");
      printf("A média da Idade das Pessoas é:(%f).\n", MediaI);
      printf("A média de Idade das Mulheres é:(%f)\n", mediaSexoM);
      printf("A média de Idade dos Homens é:(%f)\n", mediaSexoH);
      printf("-----------------------------------------------------\n");
      break;

    case 3:
      // O usúario vai entrar com qualquer número, o programa vai fazer a soma de todos os números primos até o número primo mais proxímo do número digitado. Para cada número será verificado se é primo vendo se ele é divisível por 0, se for ele não é primo, pois os números primos são divisíveis apenas por 1 e eles mesmo. O programa vai somar todos os números primos de 2 até o mais proxímo ao qual o usúario digitou.
      printf("-----------------------------------------------------\n");
      printf("\nEscreva um número que deseja saber a soma de todos os números primos até ele:\n");
      scanf("%d", &Num);
      for (int i = 2; i <= Num; i++)
      {
        controle = 1;
        for (int j = i - 1; j > 1; j--)
        {
          if (i % j == 0)
          {
            controle = 0;
            break;
          }
        }
        if (controle == 1)
        {
          printf("%d \n", i);
          contP = contP + i;
        }
      }
      printf("-----------------------------------------------------\n");
      printf("A soma de todos os números primos até %d é %d\n", Num, contP);
      printf("-----------------------------------------------------\n");
      break;

    case 4:
      printf("Hello World\n");
      break;

    case 5:
      // O usúario informa um número de 1 a 20 e é impresso na tela em código morse, caso o numero se 0 ou menor ou 21 ou maior será imprimido: Não corresponde aos números.
      printf("-----------------------------------------------------\n");
      printf("Digite um número de 1 a 20 para saber ele em código morse.\n");
      scanf("%d", &umAvinte);
      if (umAvinte <= 0 || umAvinte > 20)
      {
        printf("-----------------------------------------------------\n");
        printf("Não corresponde aos números 1 a 20. \n");
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 1)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (.----) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 2)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (..---) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 3)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (...--) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 4)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (....-) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 5)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (.....) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 6)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (-....) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 7)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (--...) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 8)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (---..) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 9)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (----.) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 10)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (.---------) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 11)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (.----.----) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 12)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (.----..---) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 13)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (.----...--) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 14)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (.----....-) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 15)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (.----.....) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 16)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (.-----....) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 17)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (.------...) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 18)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (.-------..) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 19)
      {
        printf("---------------------------------------------------\n");
        printf("O código morse de %d é: (.--------.) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      if (umAvinte == 20)
      {
        printf("-----------------------------------------------------\n");
        printf("O código morse de %d é: (..--------) \n", umAvinte);
        printf("-----------------------------------------------------\n");
      }
      break;

    case 6:

      break;
    }
  } while (x != 7);
}
