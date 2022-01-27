#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int sexo;
  float altura, pesoIdeal;

  printf("Altura em metros:");
  scanf("%f", &altura);
  printf("Digite o sexo:");
  printf("\n1 para masculino. ");
  printf("\n2 para feminino.\n");
  scanf("%d", &sexo);

  switch (sexo)
  {
  case 1:
    pesoIdeal = 72.7 * altura - 58;
    break;
  case 2:
    pesoIdeal = 62.1 * altura - 44.7;
    break;
  default:
    printf("Opcao invalida.\n");
    system("pause");
    break;
  }
  printf("Peso ideal: %.2f", pesoIdeal);
  system("cls");
  return 0;
}