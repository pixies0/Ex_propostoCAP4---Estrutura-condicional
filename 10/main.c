#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  float custoFab, dist, imposto, precoConsu;
  printf("Custo de fabrica R$");
  scanf("%f", &custoFab);

  if (custoFab <= 12000)
  {
    dist = custoFab * 0.05;
    imposto = 0;
  }
  else if (custoFab <= 25000)
  {
    dist = custoFab * 0.1;
    imposto = custoFab * 0.15;
  }
  else
  {
    dist = custoFab * 0.15;
    imposto = custoFab * 0.2;
  }
  precoConsu = custoFab + dist + imposto;
  printf("Preco ao consumidor R$%.2f", precoConsu);

  return 0;
}