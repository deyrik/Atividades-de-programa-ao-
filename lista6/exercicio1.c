#include <stdlib.h>
#include <stdio.h>

#define N 5

//stuck de endereço.
  struct endereco {
    char logradouro [30];
    int numero;
    int cep;
  };

  typedef struct endereco tipoendereco; //1 modo de usar typedef(fora do bloco de struck)
  


//struct pessoa 
//2 modo de usar typedef(dentro do bloco de struck e podendo usar "struck pessoas tb")
  typedef struct pessoa{ 
    char nome[50];
    int telefone;
    tipoendereco enderecoo;
  }tipopessoas;
 


int main()
{
 
  int i=0;

  tipopessoas vetorpessoas[N];

  for ( i = 0; i < N; i++){

    printf("digite o logradouro da pessoa %d\n",i+1);
    gets(vetorpessoas[i].enderecoo.logradouro);
    fflush(stdin);

    printf("digite o numero da casa pessoa %d\n",i+1);
    scanf("%d",&vetorpessoas[i].enderecoo.numero);

    printf("digite o cep da pessoa %d\n",i+1);
    scanf("%d",&vetorpessoas[i].enderecoo.cep);
    fflush(stdin);

    printf("escreva o nome da pessoa %d\n",i+1);
    gets(vetorpessoas[i].nome);


    printf("digite o telefone da pessoa %d\n",i+1);
    scanf("%d",&vetorpessoas[i].telefone);

  } 
 
  for ( i = 0; i < N; i++){

    printf("nome: %s telefone: %d",vetorpessoas[i].nome,vetorpessoas[i].telefone);

  }

  return 0;
}
