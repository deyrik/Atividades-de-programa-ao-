#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int K;
  printf("quantas matriculas:?");
  scanf("%d",&K);

  int M [K];
  int matricula=0;
  int N [K];
  int i;

for ( i = 0; i < K; i++)
{
  printf("digite a matricula:");
  scanf("%d",&M[i]);
}

while (matricula!=-1)
{
  printf("qual a matricula para adicionarmos a nota?");
  scanf("%d",&matricula);

  for ( i = 0; i < K; i++)
  {
    if (matricula==M[i])
    {
      printf(" encontrada matricula %d\n",M[i]);
      printf("qual a nota do aluno?\n");
      scanf("%d",&N[i]);
    }
    else
    printf("matricula nao encontrada...tentando novamente LOADING...\n");
  }

}





  return 0;
}
