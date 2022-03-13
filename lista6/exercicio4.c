#include <stdlib.h>
#include <stdio.h>

typedef struct produtos  {
  int codigo;
  char nome [15];
  float preco; 
  int quantididade; 
  
}Produtos;

int main()
{
  
  int i;
  int produtos_cadrastrados=2;
  Produtos itens[produtos_cadrastrados];

  printf("     cadastro de produtos\n");

  for ( i = 0; i < produtos_cadrastrados; i++){
    
    printf("     produto numero %d\n",(i+1));

    printf("nome do produto:");
    fflush(stdin);
    gets(itens[i].nome);
 

    printf("codigo do produto:");
    scanf("%d",&itens[i].codigo);

    printf("preco do produto:");
    scanf("%f",&itens[i].preco);

    printf("quantidade disponivel:");
    scanf("%d",&itens[i].quantididade);
    printf("\n");
    printf("\n");  

  }
  
  int codigo_digitado;
  int quantidade_;


//localizacao do codigo
  
  while (codigo_digitado!=0){


    printf("qual o codigo do produto deseja pesquisar? ");
    scanf("%d",&codigo_digitado);
    printf("\n");

    printf("quantidade dos itens que deseja: ");
    scanf("%d",&quantidade_);
    printf("\n");



    for ( i = 0; i < produtos_cadrastrados; i++){
      
      if (itens[i].codigo == codigo_digitado){//se achar o cogido digitado em meio as codigos cadastrados:
      
        if (itens[i].quantididade < quantidade_)
        {
          printf("itens insuficiientes com a solicitacao\n");
        }
        
        if (itens[i].quantididade  >=  quantidade_)
        {
          itens[i].quantididade = (itens[i].quantididade  -  quantidade_);
          printf("solicitacao atendida, quantidade de itens no estoque foi revisada!\n");
        }
      }
    }


    for ( i = 0; i < produtos_cadrastrados; i++){

      if (itens[i].codigo==codigo_digitado){
        continue;
      }
      if (i==(produtos_cadrastrados-1) && itens[i].codigo!=codigo_digitado ){
        printf("ERRO - nenhum codigo encortrado\n");
      }

    }
  }
  

  return 0;
}

//DEU CERTOOOOO. de 00:00  as 5:38 mas deu deu certo poraaaa!!!