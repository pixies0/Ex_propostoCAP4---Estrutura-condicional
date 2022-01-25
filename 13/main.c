#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  float preco, aumento, novoPreco;
  printf("Preco: R$");
  scanf("%f", &preco);

  if (preco <= 50)
    aumento = preco * 0.05;
  else if (preco <= 100)
    aumento = preco * 0.10;
  else
    aumento = preco * 0.15;

  novoPreco = preco + aumento;
  printf("Aumento: R$%.2f\nNovo preco: R$%.2f\n", aumento, novoPreco);

  if (novoPreco <= 80)
    puts("Barato");
  else if (novoPreco <= 120)
    puts("Normal");
  else if (novoPreco <= 200)
    puts("Caro");
  else
    puts("Muito caro");

  return 0;
}