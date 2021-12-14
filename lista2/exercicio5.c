#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
 int N;
 printf("escreva a quantidade que tera a seguencia de numeros:\n");
 scanf("%d",&N);


  int contapar=0;
  int i;
  int numero;
  int soma=0;

  for ( i = 0; i < N; i++)
  {
   printf("escreva um numero\n");
   scanf("%d",&numero);

   if (numero%2==0)
   {
     contapar++;
     soma=soma+numero;
   }
  }
  
  printf("a soma dos numeros pares resulta em %d",soma);

  return 0;

}
  
  //exerciocio rodando perfeito com o solicitado 100%