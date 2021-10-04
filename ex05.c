#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "get_input.h"

int main()
{
  srand(time(NULL));

  // inicializa matriz 5x5 com valores 0
  int matriz[5][5] = {0};

  // Gerar valores
  for (int linha = 0; linha < 5; linha++)
  {
    for (int coluna = 0; coluna < 5; coluna++)
    {
      if (coluna >= linha)
      {
        matriz[linha][coluna] = rand() % 100;
      }
    }
  }

  // Imprimir matriz
  puts("Matrix Triangular Superior Gerada:");

  for (int linha = 0; linha < 5; linha++)
  {
    printf("|");
    for (int coluna = 0; coluna < 5; coluna++)
    {
      if (matriz[linha][coluna] < 10)
      {
        printf("0%d", matriz[linha][coluna]);
      }
      else
      {
        printf("%d", matriz[linha][coluna]);
      }

      if (coluna != 4)
      {
        printf(", ");
      }
    }
    printf("|\n");
  }

  return 0;
}
