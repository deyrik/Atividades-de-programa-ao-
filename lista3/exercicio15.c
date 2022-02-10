#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define N 10

int main()
{
   int vetor1[N];
   int vetorquadrado[N];
   int i;


printf("numeros do vetor 1:\n");
   for (i = 0; i < N; i++)
   {
     printf("numero:");
     scanf("%d",&vetor1[i]);
   }
   


  for ( i = 0; i < N; i++)
  {
    vetorquadrado[i]=vetor1[i]*vetor1[i];
  }

//escrevendo vetor 1 
  printf("\n");
  printf("vetor1:\n");
  for ( i = 0; i < N; i++)
  {
    printf("%d,",vetor1[i]);
  }

//escrevendo vetor quadratico 
  printf("\n");
  printf("vetor quadrado:\n");
  for ( i = 0; i < N; i++)
  {
    printf("%d,",vetorquadrado[i]);
  }
  

  return 0;
}
