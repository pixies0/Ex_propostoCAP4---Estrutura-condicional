#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int code;
  float preco, desconto, precoFinal;
  printf("Codigo do produto:");
  scanf("%d", &code);
  printf("Preco:R$");
  scanf("%f", &preco);

  if (preco <= 30)
    desconto = 0;
  else if (preco <= 100)
    desconto = preco * 0.1;
  else
    desconto = preco * 0.15;

  precoFinal = preco - desconto;
  printf("Desconto:R$%.2f\nNovo Preco:R$%.2f\n", desconto, precoFinal);

  return 0;
}