#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  float nota1, nota2, nota3, nota4;
  printf("Notas: ");
  scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

  float media = (nota1 + nota2 + nota3 + nota4) / 4;
  if (media < 7)
    puts("Reprovado");
  else
    puts("Aprovado");

  return 0;
}
