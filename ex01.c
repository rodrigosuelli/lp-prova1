#include <stdio.h>

#include "get_input.h"

int main()
{
  const int QTD_NUMEROS = 10;
  int numeros[QTD_NUMEROS];

  // Get numbers
  for (int i = 0; i < QTD_NUMEROS; i++)
  {
    printf("Insira o %dº valor:", i + 1);
    numeros[i] = get_int("");
  }

  // Print numbers
  puts("Numeros na ordem inversa:");
  for (int i = QTD_NUMEROS - 1; i >= 0; i--)
  {
    printf("%d\n", numeros[i]);
  }

  return 0;
}
