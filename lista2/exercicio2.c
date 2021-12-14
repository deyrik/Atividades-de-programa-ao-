#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int N;
  printf("escreva um numero \n");
  scanf("%d",&N);


  int i; 
  int soma=0;

  for  (i = 0; i <(N+1); i++)
  {
    soma=soma+i;
  }
  
    printf("a soma dos numeros de  0 a %d  eh de %d",N,soma);

  return 0;
}

//exerciocio rodando perfeito com o solicitado 100%