#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 6

int main()
{
   int vetor[N];
   int A;
   int i ;
   int multiplicado;

   printf("qual numero multiplicara pelo vetor?");
   scanf("%d",&A);

   printf("quais valores do vetor:\n");
   for ( i = 0; i < N; i++)
   {
     printf("valor:");
     scanf("%d",&vetor[i]);
   }
   

   for ( i = 0; i < N; i++)
   {
     multiplicado = vetor[i] * A;
     if (multiplicado%2==0)
     {
       printf("produto de %d por %d e %d, eh um numero par.\n",vetor[i],A,multiplicado);
     }
     else if (multiplicado%2!=0)
     {
       printf("produto de %d por %d e %d, eh um numero impar.\n",vetor[i],A,multiplicado);
     }
     
   }
   

  return 0;
}

//rodando 100%