#include <stdio.h>

#include "get_input.h"

int is_date_valid(int dia, int mes, int ano);

int main()
{
  int dia, mes, ano;
  dia = get_positive_int("Insira o dia:");
  mes = get_positive_int("Insira o mes:");
  ano = get_positive_int("Insira o ano:");

  if (is_date_valid(dia, mes, ano))
  {
    puts("Data valida!!!");
  }
  else
  {
    puts("Data INVALIDA!!!");
  }

  return 0;
}

int is_date_valid(int dia, int mes, int ano)
{
  if (mes > 12)
  {
    return 0; // nao eh valida
  }

  // Jan, Mar, Maio, Jul, Ago, Out, Dez
  if (mes == 1 || mes == 3 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
  {
    if (dia > 31)
    {
      return 0; // nao eh valida
    }
  }

  // Abril, Jun, Setembro, Novembro
  if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
  {
    if (dia > 30)
    {
      return 0; // nao eh valida
    }
  }

  // Fevereiro
  if (dia > 28 && mes == 2)
  {
    // Um ano é bissexto se ele for divisível por 400 ou se ele
    //         for divisível por 4 e não por 100.
    if (ano % 400 != 0 && (ano % 4 != 0 || ano % 100 == 0))
    {
      return 0; // nao eh valida
    }
  }

  return 1; // eh valida
}
