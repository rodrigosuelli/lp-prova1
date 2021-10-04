#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  // int var = rand() % 4;

  int respostas[5][10] = {0};
  int gabarito[10] = {0};
  int resultado[5] = {0};

  // Preencher matriz respostas[]
  for (int linha = 0; linha < 5; linha++)
  {
    for (int coluna = 0; coluna < 10; coluna++)
    {
      respostas[linha][coluna] = rand() % 4;
    }
  }

  // Preencher vetor de gabarito
  for (int i = 0; i < 10; i++)
  {
    gabarito[i] = rand() % 4;
  }

  // Comparar notas e preencher vetor resultado[]
  for (int linha = 0; linha < 5; linha++)
  {
    for (int coluna = 0; coluna < 10; coluna++)
    {
      if (respostas[linha][coluna] == gabarito[coluna])
      {
        resultado[linha]++;
      }
    }
  }

  // Ordenar array resultado[] - decrescente - selection sort
  for (int i = 0; i < 5 - 1; i++)
  {
    // Find smallest item between i'th item and last item
    int indice_maior = i;
    for (int j = i + 1; j < 5; j++)
    {
      if (resultado[j] > resultado[indice_maior])
      {
        indice_maior = j;
      }
    }

    // Swap smallest item with i'th item
    int aux = resultado[i];
    resultado[i] = resultado[indice_maior];
    resultado[indice_maior] = aux;
  }

  // Exibir array resultado[]
  puts("Resultado - Pontuacao por aluno:");
  for (int i = 0; i < 5; i++)
  {
    printf("Aluno %d: %d pontos\n", i, resultado[i]);
  }

  return 0;
}
