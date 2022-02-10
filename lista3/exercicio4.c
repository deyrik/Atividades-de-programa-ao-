#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define N 15

int main(){

  int vetor [N];
  int i = 0;


  for ( i = 0; i < N; i++){
    printf("digite um numero:");
    scanf("%d",&vetor[i]);
  }



  int maior=vetor[0]; 
  int menor=vetor[0];
  int posicaomaior;
  int posicaomenor;


  for ( i = 0; i < N; i++){

    if (vetor[i]>= maior){

      maior=vetor[i];
      posicaomaior = i;

    }
     
  }

    for ( i = 0; i < N; i++){

    if (vetor[i]<= menor){

      menor=vetor[i];
      posicaomenor = i;
    }  
  }

 printf("o maior numero do vetor e %d e esta na posicao %d.\n",maior,posicaomaior);
 printf("o menor numero do vetor eh %d e esta na posicao %d.\n",menor,posicaomenor);

  return 0;
}

//rodando 100%