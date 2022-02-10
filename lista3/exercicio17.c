#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define N 10

int main()
{
 
 int i;
 float vetor[N];
 float soma=0;
 float media=0;

for ( i = 0; i < N; i++)
{
  printf("digite a altura do atleta %d",(i+1));
  scanf("%f",&vetor);
}


//soma dos numeros do vetor

for ( i = 0; i < N; i++)

{
  soma=soma + vetor[i];
}

//media 

 media=soma/N;

//percorrer array 

for ( i = 0; i < N; i++)
{
  if (vetor[i]>media)
  {
    printf ("jogador %d possui a altura em a cima da media, de:%.2f",i,vetor[i]);
  }
  
}


  return 0;
}
