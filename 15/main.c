#include <stdlib.h>
#include <stdio.h>
//system("cls");

int main(void)
{

  int tipo;
  float valor, rendimento;
  printf("Tipo de INVESTIMENTO:\n");
  printf("1 - Poupanca\n2 - Fundo de renda fixa\n");
  scanf("%d", &tipo);

  printf("Valor a investir: R$");
  scanf("%f", &valor);

  if (tipo == 1)
    rendimento = valor * 0.03;
  if (tipo == 2)
    rendimento = valor * 0.04;

  valor = valor + rendimento;
  printf("Rendimento mensal: R$%.2f\n", rendimento);
  printf("Novo valor: R$%.2f\n", valor);

  return 0;
}