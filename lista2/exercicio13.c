#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int N;
  int contador=0;
  
  
  printf("deseja saber a tabuada de qual numero?\n");
  scanf("%d",&N);

  while (contador<(N+1))
  {
    int resultado;
    resultado=contador*N;
    printf("%d X %d = %d\n",contador,N,resultado);
    contador++;
  }
  


  return 0;
}

//exerciocio rodando perfeito com o solicitado 100%