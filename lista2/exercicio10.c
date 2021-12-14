#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
  
  int i;
  int N;
  float E = 0.0;

  printf("digite um valor N para a equacao : E= 1/1 + 1 /2 + 1/3 + ... + 1/N: ");
  scanf("%d",&N);


  for ( i = 1; i < (N+1); i++)
  {
    E=E+ (1.0/i);
  }
  
  printf("E equivale a : %.3f",E);


  return 0;
}

//exerciocio rodando perfeito com o solicitado 100%