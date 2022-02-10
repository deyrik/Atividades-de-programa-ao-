#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int N;
  printf("quantas posicoes tera o vetor(maximo 50):");
  scanf("%d",&N);

  int vetor [N];
  int i;
  int guardaposicaomaior=0;
  int guardaposicaomenor=0;
  int maior = 0;
  int menor = -1000;

  if (N<=50){
    
      for ( i = 0; i < N; i++)
      {
        printf("valor:");
        scanf("%d",&vetor[i]);
      }
      
      for ( i = 0; i < N; i++)
      {
        if (vetor[i]>maior)
        {
          maior=vetor[i];
          guardaposicaomaior=i;
        }
      }
      
      for ( i = 0; i < N; i++)
      {
        if (vetor[i]<menor)
        {
          menor=vetor[i];
          guardaposicaomenor=i;
        }
        
      }
      
  }
  

  printf("\n");
  printf("o maior numero e %d e esta na posicao %d \n",maior,guardaposicaomaior);
  printf("o menor numero e %d e esta na posicao %d \n",menor,guardaposicaomenor);

  return 0;
}

//rodando 100%