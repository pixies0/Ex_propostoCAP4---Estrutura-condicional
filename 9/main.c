#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  float saldoMedio, credito;
  printf("Saldo medio:");
  scanf("%f", &saldoMedio);

  if (saldoMedio <= 200)
    credito = saldoMedio * 0.1;
  else if (saldoMedio <= 300)
    credito = saldoMedio * 0.2;
  else if (saldoMedio <= 400)
    credito = saldoMedio * 0.25;
  else
    credito = saldoMedio * 0.3;

  printf("Saldo medio:%.2f\nCredito:%.2f", saldoMedio, credito);

  return 0;
}