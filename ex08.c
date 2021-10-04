#include <stdio.h>

int main()
{
  // Cria matriz
  int matriz[7][7] = {0};

  // Gera matriz
  for (int linha = 0; linha < 7; linha++)
  {
    for (int coluna = 0; coluna < 7; coluna++)
    {
      if (coluna == linha)
      {
        matriz[linha][coluna] = 1;
      }
    }
  }

  // Printa matriz
  puts("Matrix Identidade Gerada:");

  for (int linha = 0; linha < 7; linha++)
  {
    printf("|");
    for (int coluna = 0; coluna < 7; coluna++)
    {
      printf("%d", matriz[linha][coluna]);

      if (coluna != 6)
      {
        printf(", ");
      }
    }
    printf("|\n");
  }

  return 0;
}
