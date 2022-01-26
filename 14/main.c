#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  float sal, aumento, salFinal;
  printf("Salario: R$");
  scanf("%f", &sal);

  if (sal <= 300)
    aumento = sal * 0.5;
  else if (sal <= 500)
    aumento = sal * 0.4;
  else if (sal <= 700)
    aumento = sal * 0.3;
  else if (sal <= 800)
    aumento = sal * 0.2;
  else if (sal <= 1000)
    aumento = sal * 0.1;
  else
    aumento = sal * 0.05;

  salFinal = sal + aumento;
  printf("Aumento: R$%.2f\n", aumento);
  printf("Novo salario: R$%.2f\n", salFinal);
}