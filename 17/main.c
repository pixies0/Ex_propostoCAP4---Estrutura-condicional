#include <stdlib.h>
#include <stdio.h>

int main(void)
{

  int password = 4531, codigo;

  printf("Digite a senha:");
  scanf("%d", &codigo);

  if (codigo == password)
    puts("Permissao para acessar");
  else
    puts("Acesso negado");

  return 0;
}