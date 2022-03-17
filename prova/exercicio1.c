#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int N;
  printf("digite o valor de N sendo de 1 a 10:");
  scanf("%d",&N);

  printf("\n");

  int X;
  printf("digite o valor de X sendo de 1 a 10:");
  scanf("%d",&X);


  float soma=0;
  int i=1;

  if (N>=1 && N<=10)
  {
    for ( i = 1; i < (N+1); i++)
    {
      if (i<=2)
      {
          soma=soma+((pow(X,i)/N-(i-1)));
      }
      if (i>2 && i%2!=0)
      {
          soma=soma+((pow(X,i)/N-(i-1)) * -1);
      }
      if (i>2 && i%2==0)
      {
          soma=soma+(pow(X,i)/N-(i-1));
      }
         
    }
  }
  

printf(" a soma eh de: %.2f",soma);


  return 0;
}

