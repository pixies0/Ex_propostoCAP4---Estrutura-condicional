#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int num1, num2;
  printf("Numeros: ");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2)
    printf("MAIOR:%d", num1);
  else
    printf("MAIOR:%d", num2);

  return 0;
}