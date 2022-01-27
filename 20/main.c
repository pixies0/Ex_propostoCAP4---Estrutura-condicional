#include <stdlib.h>
#include <stdio.h>
//Exercicio 20

int main(void)
{

  int idade;
  printf("Idade: ");
  scanf("%d", &idade);

  if (idade >= 5)
  {
    if (idade >= 5 && idade <= 7)
      printf("Categoria: INFANTIL");
    else if (idade <= 10)
      printf("Categoria: JUVENIL");
    else if (idade <= 15)
      printf("Categoria: ADOLESCENTE");
    else if (idade <= 30)
      printf("Categoria: ADULTO");
    else
      printf("Categoria: SENIOR");
  }
  else
    printf("Idade nao listada em nenhuma categoria");

  return 0;
}