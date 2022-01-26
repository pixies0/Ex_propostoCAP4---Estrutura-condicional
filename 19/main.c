#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  char sexo;
  float altura, pesoIdeal;
  printf("Sexo: ");
  scanf(" %c", &sexo);
  printf("Altura em m:");
  scanf("%f", &altura);

  if (sexo == 'f' || sexo == 'F')
    pesoIdeal = (62.1 * altura) - 44.7;
  if (sexo == 'm' || sexo == 'M')
    pesoIdeal = (72.7 * altura) - 58;

  printf("Peso ideal para o sexo %c: %.2f", sexo, pesoIdeal);

  return 0;
}