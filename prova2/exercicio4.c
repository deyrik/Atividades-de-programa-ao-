#include <stdio.h>
#include <stdlib.h>

int main()
{
  int K;
  printf("entre com um valor:\n");
  scanf("%d",&K);

  int M[K],N[K];

 int i;

 for ( i = 0; i < K; i++)
 {
   printf("matriculas dos alunos:\n");
   scanf("%d",&M[i]);
 }
 
  int matricula=0;
  int nota = 0;
  int aux;

while (matricula!=-1)
{
  printf("digite uma matricula (existente):\n");
  scanf("%d",&matricula);

  for ( i = 0; i < K; i++)
  {
  if ( matricula == M[i])
    {
      printf("digite a nota do aluno:\n");
      scanf("%d",&nota);
      N[i] = nota;
      aux = 1;
    }
    else
      printf("Matricula nao Existe\n");
    continue;
  }
  if (aux == 0)
  {
    printf("matricula nao encontrada\n");
  }
}
  return 0;
}