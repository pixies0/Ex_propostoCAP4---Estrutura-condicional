#include <stdlib.h>
#include <stdio.h>
//Exercicio 25

int main(void)
{

  float horasEx, horasFalta;
  float gratifi, total;

  printf("Horas extras:");
  scanf("%f", &horasEx);
  printf("Horas faltadas:");
  scanf("%f", &horasFalta);

  total = (horasEx - (0.6666666666 * horasFalta)) * 60;
  printf("Horas em minutos:%.2f\n", total);

  if (total < 600)
    gratifi = 100;
  else if (total < 1200)
    gratifi = 200;
  else if (total < 1800)
    gratifi = 300;
  else if (total < 2400)
    gratifi = 400;
  else
    gratifi = 500;

  printf("Gratificacao:R$%.2f\n", gratifi);
  return 0;
}