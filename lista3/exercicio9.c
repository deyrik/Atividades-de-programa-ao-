#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define N 5

int main()
{
  int vetor1[N];
  int vetor2[N];
  int vetorsoma[N];
  int i;
  int soma1=0;
  int soma2=0;

 printf("valores do vetor 1\n");
  for ( i = 0; i < N; i++)
  {
   printf("valor:");
   scanf("%d",&vetor1[i]);
  }


 printf("valores do vetor 2\n");
  for ( i = 0; i < N; i++)
  {
   printf("valor:");
   scanf("%d",&vetor2[i]);
  }

  for ( i = 0; i < N; i++)
  {
     vetorsoma[i]=vetor1[i]+vetor2[i];
  }

printf("vetor soma:\n");
  for ( i = 0; i < N; i++)
  {
    printf("%d,",vetorsoma[i]);
  }
  

  return 0;
}
