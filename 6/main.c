#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{

  float num1, num2;
  char op;

  printf("Numeros: ");
  scanf("%f %f", &num1, &num2);
  printf("Escolha:\na)O primeiro elevado ao segundo\n");
  printf("b)Raiz quadrada dos numeros\nc)Raiz cubica dos numeros\n");
  scanf(" %c", &op);

  if (op == 'a' || op == 'A')
    printf("Resultado: %.2f", pow(num1, num2));
  else if (op == 'b' || op == 'B')
    printf("Raiz num1 = %.2f\nRaiz num2 = %.2f", sqrt(num1), sqrt(num2));
  else if (op == 'c' || op == 'C')
    printf("Raiz cubica num1 = %.2f\nRaiz cubica num2 = %.2f", cbrt(num1), cbrt(num2));
  else
    puts("Opcao invalida");

  return 0;
}