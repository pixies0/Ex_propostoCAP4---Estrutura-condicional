#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  float sal, aumento, salFinal;
  printf("Salario atual R$");
  scanf("%f", &sal);

  if (sal <= 300)
    aumento = sal * 0.15;
  else if (sal < 600)
    aumento = sal * 0.1;
  else if (sal <= 900)
    aumento = sal * 0.05;
  else
    aumento = 0;

  salFinal = sal + aumento;
  printf("Aumento: R$%.2f\nNovo salario: R$%.2f", aumento, salFinal);

  return 0;
}