#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define N 15

int main(int argc, char const *argv[])
{
  float vetor[N];
  int i;
  float numero;
  float raiz;

  for ( i = 0; i < N; i++)
  {
    printf("escreva um numero:");
    scanf("%f",&numero);
    
    if (numero<0)
    {
      vetor[i]=-1;
    }
    else if (numero>=0)
    {
      raiz=sqrt(numero);
      vetor[i]=raiz;
    }
    
    

  }

//escrevendo o array 

for ( i = 0; i < N; i++)
{
 printf("%2.f,",vetor[i]);
}

  













  return 0;
}

