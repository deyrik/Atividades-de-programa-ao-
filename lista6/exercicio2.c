#include <stdlib.h>
#include <stdio.h>

#define N 2  

  typedef struct Alunos{

    char nome [40];
    int matricula;
    float nota_media_final;

  } Alunos;




int main()
{
  
  Alunos vetor_alunos[N+1];

  int vetor_alunos_aprovados[N+1]={0};
  int vetor_alunos_reprovados[N+1]={0}; 

  int i;
  for ( i = 1; i < (N+1); i++){

    printf("qual o nome do aluno %d:\n",i);
    fflush(stdin);
    gets(vetor_alunos[i].nome);

    printf("qual matricula do aluno %d:\n",i);
    scanf("%d",&vetor_alunos[i].matricula);

    printf("qual a media da nota do aluno %d:\n",i);
    scanf("%f",&vetor_alunos[i].nota_media_final);
    
    if (vetor_alunos[i].nota_media_final>=5){
      vetor_alunos_aprovados[i] = i;
    }
    else
      vetor_alunos_reprovados[i]=i;
  }
  
  printf("alunos aprovados:\n");

  for ( i = 1; i < (N+1); i++){
    if (vetor_alunos_aprovados[i]!=0){
      printf("%s matricula: %d \n",vetor_alunos[i].nome,vetor_alunos[i].matricula);
    }
  }

  fflush(stdin);

  printf("alunos reprovados:\n");

  for ( i = 1; i < (N+1); i++){
    if (vetor_alunos_reprovados[i]!=0){
      printf("%s matricula: %d \n",vetor_alunos[i].nome,vetor_alunos[i].matricula);
    }
  }

  fflush(stdin);

  return 0;
}
