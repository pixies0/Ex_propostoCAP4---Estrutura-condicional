#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  float num1, num2, resultado;
  printf("Numeros: ");
  scanf("%f %f", &num1, &num2);

  int op;
  printf("Operacao:\n");
  printf("1 - Media\n");
  printf("2 - Diferenca\n");
  printf("3 - Produto\n");
  printf("4 - Divisao\n");
  scanf("%d", &op);

  switch (op)
  {
  case 1:
    printf("Opcao selecionada: 1. media\n");
    resultado = (num1 + num2) / 2;
    printf("A media dos dois numeros e: %.2f ", resultado);
    break;

  case 2:
    printf("Opcao selecionada: 2. Diferenca\n");
    if (num1 > num2)
      resultado = num1 - num2;
    else
      resultado = num2 - num1;
    printf("A subtração dos dois numeros e: %.2f", resultado);
    break;

  case 3:
    printf("Opcao selecionada: 3. Produto\n");
    resultado = num1 * num2;
    printf("A produto dos dois numeros e: %.2f", resultado);
    break;

  case 4:
    printf("Opcao selecionada: 4. Divisao\n");
    if (num2 != 0)
    {
      resultado = num1 / num2;
      printf("A divisao dos dois numeros e: %.2f", resultado);
    }
    else
      printf("Nao existe divisao por zero ");

    break;
  default:
    printf("Voce digitou uma opcao invalida!");
  }
  return 0;
}