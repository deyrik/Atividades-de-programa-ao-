#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{ 
  int i=0;
  int numero;
  int soma=0;
  float media;

  int N;
  printf("quantos valores serao?\n");
  scanf("%d",&N);


  for ( i = 0; i < N; i++)
  {
  printf("digite um numero?\n");
  scanf("%d",&numero);

  soma=soma+numero;
  }
  
  media=soma/N;

  printf(" a media dos numeros eh de  %.2f ",media);

  
  return 0;
}

 //exerciocio rodando perfeito com o solicitado 100%