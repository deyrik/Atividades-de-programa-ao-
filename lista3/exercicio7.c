#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 10

int main()
{
 int i = 0;
 int vetor1[N] = {1,3,5,7,9,11,13,15,17,19};
 int vetor2[N] = {2,4,6,8,10,12,14,16,18,20};
 int vetorresultante[2*N];
 int contavetor1=0;
 int contavetor2=1;

for ( i = 0; i < N; i++)
{

  vetorresultante[contavetor1]=vetor1[i];
  contavetor1=+2;
}

for (i = 0 ; i < N ; i++ ){

  vetorresultante[contavetor1] = vetor1[i];
  contavetor2=+2;

}

printf("vetor resultante:\n");

for ( i = 0; i < (2*N); i++)
{
  printf("%d,",vetorresultante[i]);
}


  return 0;
}
