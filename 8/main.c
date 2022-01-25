#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  float sal, salFinal, aumento = 0;
  printf("Salario R$");
  scanf("%f", &sal);

  if (sal <= 300)
    aumento = sal * 0.35;
  else
    aumento = sal * 0.15;

  salFinal = sal + aumento;
  printf("Novo Salario R$%.2f", salFinal);

  return 0;
}