#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int N;
  int i;
  printf("deseja saber a tabuada de qual numero ?\n");
  scanf("%d",&N);

  for ( i = 0; i < (N+1); i++)
  {
    int resultado;
    resultado = i * N;

    printf("%d X %d = %d\n",i,N,resultado);
  }
  
  return 0;
}

 //exerciocio rodando perfeito com o solicitado 100%