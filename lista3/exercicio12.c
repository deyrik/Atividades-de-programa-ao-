#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10

int main()
{
  int vetor[N];
  int i;
  int numerocomparador;

  printf("valores do vetor:\n");

  for ( i = 0; i < N; i++)
  {
    printf("valores:");
    scanf("%d",&vetor[i]);
  }
  
 printf("digite um numero para comparacao:\n");
 scanf("%d",&numerocomparador);

 int vetor2 [N];

  for ( i = 0; i < N; i++){
  if(vetor[i]<numerocomparador){

    vetor2[i]=vetor[i];

  }

 }

for ( i = 0; i < N; i++)
{
  printf("%d,",vetor2[i]);
}



  return 0;
}
