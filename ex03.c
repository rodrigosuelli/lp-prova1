#include <stdio.h>

#include "get_input.h"

int main()
{
  const int QTD_NOTAS = 10;
  int notas[QTD_NOTAS];

  for (int i = 0; i < QTD_NOTAS; i++)
  {
    printf("Insira a %d nota:", i + 1);
    notas[i] = get_unsigned_int("");
  }

  int soma = 0;
  for (int i = 0; i < QTD_NOTAS; i++)
  {
    soma += notas[i];
  }

  float media = (float)soma / QTD_NOTAS;
  printf("Media: %.2f\n", media);

  return 0;
}
