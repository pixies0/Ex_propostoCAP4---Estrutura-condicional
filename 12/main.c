#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  float salBruto, salFinal, grati;
  printf("Salario bruto: R$");
  scanf("%f", &salBruto);

  if (salBruto <= 350)
    grati = 100;
  else if (salBruto < 600)
    grati = 75;
  else if (salBruto <= 900)
    grati = 50;
  else
    grati = 35;

  float imposto = salBruto * 0.07;
  salFinal = salBruto + grati - imposto;
  printf("Gratificacao: R$%.2f\nImposto: R$%.2f\n", grati, imposto);
  printf("Salario a receber: R$%.2f", salFinal);

  return 0;
}