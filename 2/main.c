#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  float nota1, nota2;
  printf("Notas: ");
  scanf("%f %f", &nota1, &nota2);

  float media = (nota1 + nota2) / 2;
  if (media < 3)
    puts("Reprovado");
  else if (media < 7)
    puts("Exame");
  else
    puts("Aprovado");

  return 0;
}