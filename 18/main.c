#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  int idade;
  printf("Idade:");
  scanf("%d", &idade);

  if (idade < 18)
    puts("Menor de idade");
  else
    puts("Maior de idade");

  return 0;
}