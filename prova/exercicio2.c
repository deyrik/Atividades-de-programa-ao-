#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int populacaoinicial = 7000;
   float taxa = 1.00 + 0.05;
   int resultadofinal=0;
   int resultadoesperado=50000;
   int indice=1;

while (resultadofinal<=resultadoesperado)
{
  resultadofinal=populacaoinicial*(pow(taxa,indice));
  indice++;
}

printf("sera necessario %d anos.",indice);





  return 0;
}
