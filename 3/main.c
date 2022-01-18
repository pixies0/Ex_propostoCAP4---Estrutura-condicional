#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  int num1, num2;
  printf("Numeros: ");
  scanf("%d %d", &num1, &num2);

  if (num1 > num2)
    printf("MENOR:%d", num2);
  else
    printf("MENOR:%d", num1);

  return 0;
}