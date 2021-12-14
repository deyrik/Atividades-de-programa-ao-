#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int contapar=0;
  int contarimpar=0;
  int i;
  int numero;

  for ( i = 0; i < 200; i++)
  {
   printf("escreva um numero\n");
   scanf("%d",&numero);

   if (numero%2==0)
   {
     contapar++;
   }
   else if (numero%2==1)
   {
     contarimpar++;
   }
   
  }
  
  printf("existem %d numero(s) impar(es) e %d numero(s) par(es).",contarimpar,contapar);

  return 0;
}

//exerciocio rodando perfeito com o solicitado 100%