#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int N;
  int i=0;
  int soma=0;
  int entravetor;

  printf("qual sera o tamanho do vetor?");
  scanf("%d",&N);

printf("\n");

  int vetor[N];

  for ( i = 0; i < N; i++)
  {
    printf("digite um numero para entrar no vetor:");
    scanf("%d",&entravetor);
    vetor[i]=entravetor;

    if (i%2==0)
    {
      soma=soma+vetor[i];
    }
    
  }
  
printf("\n");
printf("a soma dos numemoros do vetor em q possuem suas posicoes par e de: %d",soma);

  return 0;
}

//rodando 100%