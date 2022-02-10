#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define N 10

int main()
{
  
  float notas [N];
  int i=0;
  float soma = 0.0;
  float media = 1.0;

 

  for (i = 0; i < N; i++)
  {
    printf("a nota do aluno %d:",(i+1));
    scanf("%f",&notas[i]);
  }

  for ( i = 0; i < N; i++)
  {
    soma= soma + notas[i];
  }

  media = soma/N;

  printf("a media das notas eh de %.2f pontos",media);
  

  return 0;
}
