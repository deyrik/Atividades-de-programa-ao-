#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  
  int numeroslidos;
  printf("digite a quantidade de numeros que serao lidos\n");
  scanf("%d",&numeroslidos);

 int maiornumero=0;
 int i;
 int numero;

 for ( i = 0; i < numeroslidos; i++)
 {
    printf("digite um numero\n");
    scanf("%d",&numero);

   if (numero>maiornumero)
   {
     maiornumero=numero;
   }
 }
 
 printf("o maior numero eh %d",maiornumero);


  return 0;
}

//exerciocio rodando perfeito com o solicitado 100%


//perguntar como fazer se caso ouvessem numeros negativos, ja que "maiornumero" recebe 0 e sempre seria maior q os restantes, 
// mas se colocar pra receber de cara os "numeros" ele sempre impirmira o ultimo numero. 