#include <stdio.h>

#include "get_input.h"

int verificar_primo(int n);

int main()
{
  int val = get_positive_int("Insira valor positivo maior que 2:");
  printf("Primos entre 2 e %d, inclusive:\n", val);

  for (int i = 2; i <= val; i++)
  {
    if (verificar_primo(i))
    {
      printf("%d\n", i);
    }
  }

  return 0;
}

int verificar_primo(int n)
{
  for (int div = n; div > 0; div--)
  {
    if ((div != n && div != 1) && n % div == 0)
    {
      // nao eh primo
      return 0;
    }
  }
  // primo
  return 1;
}
