#include <stdlib.h>
#include <stdio.h>
//Exercicio 24

int main(void)
{

  float price, aumento, imposto, newPrice;
  int categoria;
  char situacao;

  printf("Preco:R$");
  scanf("%f", &price);
  printf("Categoria:\n1 - limpeza\n2 - alimentacao\n3 - vestuario\n");
  scanf("%d", &categoria);
  printf("Situacao:\nR - Usa refrigeracao\nN - Nao usa refrigeracao\n");
  scanf(" %c", &situacao);
  system("pause");
  system("cls");

  if (price <= 25)
  {
    if (categoria == 1)
      aumento = price * 0.05;
    if (categoria == 2)
      aumento = price * 0.08;
    if (categoria == 3)
      aumento = price * 0.10;
  }
  else
  {
    if (categoria == 1)
      aumento = price * 0.12;
    if (categoria == 2)
      aumento = price * 0.15;
    if (categoria == 3)
      aumento = price * 0.18;
  }

  printf("Aumento:R$%.2f\n", aumento);
  if ((categoria == 2) || (situacao == 'r') || (situacao == 'R'))
    imposto = 0.05 * price;
  else
    imposto = 0.08 * price;

  printf("Imposto:R$%.2f\n", imposto);
  newPrice = price + aumento - imposto;
  printf("Novo Preco:R$%.2f\n", newPrice);

  if (newPrice <= 50)
    puts("Barato");
  else if (newPrice < 120)
    puts("Normal");
  else
    puts("Caro");

  return 0;
}