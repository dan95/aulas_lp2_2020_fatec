#include <stdio.h>
#define macroSoma(x, y) ((x) + (y))
#define macroMaior(x, y) ((x) > (y) ? x : y)
#define abs(n) (n < 0 ? n*(-1) : n)

int main()
{
  int teste = macroSoma(1, 2);
  int maiorValor = macroMaior(2, 1);
  int numeroAbsoluto = abs(-10);
}
