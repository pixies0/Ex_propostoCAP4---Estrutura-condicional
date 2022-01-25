#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  float sal, salFinal, aumento = 0;
  printf("Salario: R$");
  scanf("%f", &sal);

  if (sal < 500)
    aumento = sal * 0.3;
  else
    puts("Sem reajuste no salario");

  salFinal = sal + aumento;
  printf("Novo salario: R$%.2f", salFinal);

  return 0;
}