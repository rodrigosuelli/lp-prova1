#include <stdio.h>

#include "get_input.h"

int main()
{
  int num = get_positive_int("Insira numero:");

  int soma = 0;
  for (int i = num - 1; i > 0; i--)
  {
    if (num % i == 0)
    {
      soma += i;
    }
  }

  if (soma == num)
  {
    puts("Eh perfeito!");
  }
  else
  {
    puts("Nao eh perfeito");
  }

  return 0;
}
