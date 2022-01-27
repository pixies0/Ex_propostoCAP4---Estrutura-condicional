#include <stdlib.h>
#include <stdio.h>
//Exercicio 23

int main(void)
{

  int codigo, quantBuy;
  float unitPrice, totalPrice, desconto, finalPrice;

  printf("Codigo do produto:");
  scanf("%d", &codigo);

  if ((codigo < 1) || codigo > 40)
    printf("Codigo Invalido");
  else
  {
    printf("Unidades compradas:");
    scanf("%d", &quantBuy);
    if (codigo <= 10)
    {
      totalPrice = 10 * quantBuy;
      unitPrice = totalPrice / quantBuy;
    }
    else if (codigo <= 20)
    {
      totalPrice = 15 * quantBuy;
      unitPrice = totalPrice / quantBuy;
    }
    else if (codigo <= 30)
    {
      totalPrice = 20 * quantBuy;
      unitPrice = totalPrice / quantBuy;
    }
    else
    {
      totalPrice = 30 * quantBuy;
      unitPrice = totalPrice / quantBuy;
    }
    printf("Preco Unitario:R$%.2f\n", unitPrice);
    printf("Total da nota:R$%.2f\n", totalPrice);
    system("pause");
    system("cls");

    if (totalPrice < 250)
      desconto = totalPrice * 0.05;
    else if (totalPrice <= 500)
      desconto = totalPrice * 0.10;
    else
      desconto = totalPrice * 0.15;

    printf("Desconto:R$%.2f\n", desconto);
    finalPrice = totalPrice - desconto;
    printf("Preco Final:R$%.2f\n", finalPrice);
  }

  return 0;
}