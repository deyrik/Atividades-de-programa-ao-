#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define N 6

int main()
{
  
  int vetor [N];
  int i=0;
  int contapar=0;
  int contaimpar=0;

  for (i = 0; i < N; i++)
  {
    printf("escreva um numero:");
    scanf("%d",&vetor[i]);
  }

  for ( i = 0; i < N; i++)
  {
    if (vetor[i]%2==0){

      contapar++;
    }
    else
      contaimpar++;
  }
  
  
  printf("existe(m) %d numero(s) par(es)\n",contapar);
  printf("existe(m) %d numero(s) impar(es)\n",contaimpar);

  return 0;
}

//rodando 100%