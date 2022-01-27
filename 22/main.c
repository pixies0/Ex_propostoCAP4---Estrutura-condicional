#include <stdlib.h>
#include <stdio.h>
//Exercico 22

int main(void)
{
  int idade, grupoRisco;
  float peso;
  printf("Idade:");
  scanf("%d", &idade);

  if (idade < 0)
    puts("Nao existe idade negativa");
  else
  {
    printf("Peso em Kg:");
    scanf("%f", &peso);
    if (idade < 20)
    {
      if (peso <= 60)
        grupoRisco = 9;
      else if (peso <= 90)
        grupoRisco = 8;
      else
        grupoRisco = 7;
    }
    else if (idade <= 50)
    {
      if (peso <= 60)
        grupoRisco = 6;
      else if (peso <= 90)
        grupoRisco = 5;
      else
        grupoRisco = 4;
    }
    else
    {
      if (peso <= 60)
        grupoRisco = 3;
      else if (peso <= 90)
        grupoRisco = 2;
      else
        grupoRisco = 1;
    }
    printf("Grupo de Risco:%d", grupoRisco);
  }
}