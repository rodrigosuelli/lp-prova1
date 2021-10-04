#include <stdio.h>

int verificar_primo(int n);

int main()
{
  int vetor[100] = {0};

  int i = 2;
  int qtd_primos = 0;
  while (qtd_primos < 100)
  {
    if (verificar_primo(i))
    {
      vetor[qtd_primos] = i;
      qtd_primos++;
    }
    i++;
  }

  puts("Printar vetor");
  for (int j = 0; j < 100; j++)
  {
    printf("posicao %d -> %d\n", j, vetor[j]);
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
