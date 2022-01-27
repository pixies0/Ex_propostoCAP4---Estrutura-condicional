#include <stdlib.h>
#include <stdio.h>
//Exercicio 21

int main(void)
{
  float preco;
  int originCode;

  printf("Preco: R$");
  scanf("%f", &preco);
  printf("Codigo de origem:");
  scanf("%d", &originCode);

  if ((originCode < 1) || (originCode > 30))
    printf("Codigo Invalido");
  else
  {
    if (originCode == 1)
      printf("PROCEDENCIA: Sul");
    else if (originCode == 2)
      printf("PROCEDENCIA: Norte");
    else if (originCode == 3)
      printf("PROCEDENCIA: Leste");
    else if (originCode == 4)
      printf("PROCEDENCIA: Oeste");
    else if ((originCode == 5) || (originCode == 6))
      printf("PROCEDENCIA: Nordeste");
    else if ((originCode >= 7) && (originCode <= 9))
      printf("PROCEDENCIA: Sudeste");
    else if ((originCode >= 10) && (originCode <= 20))
      printf("PROCEDENCIA: Centro-Oeste");
    else if ((originCode >= 21) && (originCode <= 30))
      printf("PROCEDENCIA: Nordeste2");
  }
}