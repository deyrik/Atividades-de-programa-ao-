#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define N 10

int main()
{
  int vetor1[N];
  int vetor2[N];
  int i;


//criando primeiro vetor
  printf("elementos do vetor primario:\n");
  for ( i = 0; i < N; i++){
    printf("numero:");
    scanf("%d",&vetor1[i]);
  }

//criando vetor reverso
   int reverso = (N-1);
  for ( i = 0; i < N; i++)
  {
    vetor2[reverso]=vetor1[i];
    reverso--;
  }
  
//escrevendo vetor normal
printf("\n");
for ( i = 0; i < N; i++)
{
  printf("%d,",vetor1[i]);
}


//escrevendo vetor reverso 
printf("\n");
for ( i = 0; i < N; i++)
{
  printf("%d,",vetor2[i]);
}




  return 0;
