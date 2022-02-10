#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define N 10

int main()
{
  
  int vetor [N];
  int i=0;

  for (i = 0; i < N; i++)
  {
    printf("escreva um numero:");
    scanf("%d",&vetor[i]);
  }

  for ( i = 0; i < N; i++)
  {
    if (vetor[i]==5){

      printf("numero %d esta na posicao %d do vetor\n",vetor[i],i);
    }
    
  }
  
  
  

  return 0;
}

//rodando 100%