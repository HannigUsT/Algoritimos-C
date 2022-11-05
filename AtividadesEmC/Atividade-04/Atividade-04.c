#include <stdio.h>
int main()
{
  float V, R, A;
  printf("Digite o Raio e Altura da lata para achar o volume.\n");
  scanf("Raio:%f", &R);
  scanf("Altura:%f", &A);
  R = R * R;
  V = 3.1415 * R * A;
  printf("O volume da lata é %.2f", V);
  return 0;
}
