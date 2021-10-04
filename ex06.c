#include <stdio.h>

#include "get_input.h"

int main()
{
  int va[3] = {0};
  int vb[3] = {0};

  // Get A
  int a;
  do
  {
    a = get_positive_int("Insira o valor de a:");
  } while (a >= 1000);

  // Get B
  int b;
  do
  {
    b = get_positive_int("Insira o valor de b:");
  } while (b >= 1000);

  // Preencher VA
  for (int i = 3; i > 0; i--)
  {
    if (a > 0)
    {
      va[i - 1] = a % 10;
      a /= 10;
    }
  }

  // Preencher VB
  for (int i = 3; i > 0; i--)
  {
    if (b > 0)
    {
      vb[i - 1] = b % 10;
      b /= 10;
    }
  }

  // Print A
  printf("va: [ ");
  for (int i = 0; i < 3; i++)
  {
    printf("%d", va[i]);
    if (i != 2)
    {
      printf(", ");
    }
  }
  printf(" ]\n");

  // Print B
  printf("vb: [ ");
  for (int i = 0; i < 3; i++)
  {
    printf("%d", vb[i]);
    if (i != 2)
    {
      printf(", ");
    }
  }
  printf(" ]\n");
}
