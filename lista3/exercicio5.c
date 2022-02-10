#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define N 10

int main()
{
  
  int vetor1[N];
  int vetor2[N];
  int i=0;

  for ( i = 0; i < N; i++)
  {
    printf("entre com numeros:");
    scanf("%d",&vetor1[i]);

    if (vetor1[i]<10)
    {
      vetor2[i]=1;
    }
    
    else if (vetor1[i]>=10)
    {
      vetor2[i]=vetor1[i];
    }
  }

printf("vetor 1:\n");
for ( i = 0; i < N ; i++)
{
  printf("%d,",vetor1[i]);
}



printf("\n");
printf("vetor 2\n");
for ( i = 0; i < N ; i++)
{
  printf("%d,",vetor2[i]);
}





  return 0;
}

//rodando 100%