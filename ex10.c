#include <stdio.h>

#include "get_input.h"

int mmc(int n1, int n2);

int main()
{
  int n1, n2;
  n1 = get_unsigned_int("Insira n1:");
  n2 = get_unsigned_int("Insira n2:");

  printf("MMC entre %d e %d: %d\n", n1, n2, mmc(n1, n2));
}

int mmc(int n1, int n2)
{
  int a, b, resto, mmc;

  a = n1;
  b = n2;

  do
  {
    resto = a % b;
    a = b;
    b = resto;
  } while (resto != 0);

  mmc = (n1 * n2) / a;

  return mmc;
}
