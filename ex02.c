#include <stdio.h>

#include "get_input.h"

int main()
{
  const int QTD_PARES = 10;
  int pares[QTD_PARES];

  // Recebe numero par
  for (int i = 0; i < QTD_PARES; i++)
  {
    do
    {
      printf("Insira o %dº valor:", i + 1);
      pares[i] = get_int("");
      if (pares[i] % 2 != 0)
      {
        puts("Numero inserido nao eh par!");
      }
    } while (pares[i] % 2 != 0);
  }

  // Selection sort
  for (int j = 0; j < QTD_PARES - 1; j++)
  {
    // Find smallest item between j'th item and last item
    int indice_menor = j;
    for (int k = j + 1; k < QTD_PARES; k++)
    {
      if (pares[k] < pares[indice_menor])
      {
        indice_menor = k;
      }
    }

    // Swap smallest item with j'th item
    int aux = pares[j];
    pares[j] = pares[indice_menor];
    pares[indice_menor] = aux;
  }

  // Print values
  puts("Ordem crescente:");
  for (int l = 0; l < QTD_PARES; l++)
  {
    printf("%d\n", pares[l]);
  }

  return 0;
}
