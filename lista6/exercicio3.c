#include <stdlib.h>
#include <stdio.h>


typedef struct tipolivros {
  
  char titulo[30];
  char autor[15];
  int ano;
}tipo_livros;




int main()
{
  int N;
  printf("digite um valor:");
  scanf("%d",&N);
  printf("\n");

  int i;
  tipo_livros vetor_livros[N];

  for ( i = 0; i < N; i++)
  {
    printf("livro %d\n",i);

    printf("escreva o titulo: ");
    fflush(stdin);
    gets(vetor_livros[i].titulo);

    printf("escreva o nome do autor: ");
    fflush(stdin);
    gets(vetor_livros[i].autor);

    printf("escreva o ano de lancamento: ");
    gets(vetor_livros[i].autor);
    printf("\n");

  }

  char pesquisa[15];
  printf("procure um por livro pelo seu titulo:\n");
  fflush(stdin);
  gets(pesquisa);


//fiquei confuso na comparaçao de string 

  for ( i = 0; i < N; i++)
  {
    if (pesquisa==vetor_livros[i].titulo){
      printf("livro: %s , autor %s , ano: %d",vetor_livros[i].titulo,vetor_livros[i].autor,vetor_livros[i].ano);
    }
    
  }
  



  return 0;
}
