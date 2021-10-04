#include <stdio.h>

#include "get_input.h"

int main()
{
  int const QTD_VALORES = 5;
  int vetor[QTD_VALORES];

  int pos_menor = 0;
  int pos_maior = 0;

  for (int i = 0; i < QTD_VALORES; i++)
  {
    printf("Insira a %d nota:", i + 1);
    vetor[i] = get_unsigned_int("");

    if (vetor[i] > vetor[pos_maior])
    {
      pos_maior = i;
    }
    else if (vetor[i] < vetor[pos_menor])
    {
      pos_menor = i;
    }
  }

  printf("Posicao do menor valor: %d\n", pos_menor);
  printf("Posicao do maior valor: %d\n", pos_maior);

  return 0;
}
