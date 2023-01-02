#include <stdio.h>
int main(void)
{
  float Dividendo, Divisor, Divisão, y, MediaI, mediaSexoM, mediaSexoH;
  int x, Pessoas, contador, cont, contM, contH;
  char S;
  printf("Escolha a opção de 1 a 7. Para dar saída digite 7\n");
  printf("(1) Divisão dos números digitados.\n");
  printf("(2) Faixa Etária das pessoas.\n");
  printf("(3) Números primos.\n");
  printf("(4) Retornar o maior, menor e média.\n");
  printf("(5) Código Morse.\n");
  printf("(6) Mudança de base.\n");
  printf("(7) Sair\n");
  do
  {
    scanf("%d", &x);
    contador = 0;
    cont = 0;
    contM = 0;
    contH = 0;
    MediaI = 0;
    switch (x)
    {
    case 1:
      printf("Para efetuar a divisão, digite o dividendo e o divisor:\n");
      printf("Dividendo:\n");
      scanf("%f", &Dividendo);
      printf("Divisor:\n");
      scanf("%f", &Divisor);
      Divisão = Dividendo / Divisor;
      printf("O resultado da divisão é %f\n", Divisão);
      break;
    case 2:
      printf("Quantindade de pessoas para o cálculo da faixa etária:\n");
      scanf("%d", &Pessoas);
      float Idade[Pessoas];
      char sexo[Pessoas];
      for (int i = 1; i <= Pessoas; i++)
      {
        printf("Digite a idade de cada pessoa:\n");
        scanf("%f", &Idade[i]);
        printf("Digite o sexo da pessoa, H para homem, M para mulher:\n");
        scanf("%s", &sexo[i]);
        printf("Sexo(%d):%c\n", i, sexo[i]);
        printf("Idade(%d):%f\n", i, Idade[i]);
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
      printf("A média da Idade de Pessoas é:(%f).\n", MediaI);
      printf("A média de Idade das Mulheres é:(%f)\n", mediaSexoM);
      printf("A média de Idade dos Homens é:(%f)\n", mediaSexoH);
      break;
    }
  } while (x != 7);
}
