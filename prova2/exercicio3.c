#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N,M;
  printf("digite o primeiro valor:\n");
  scanf("%d",&N);

  printf("digite o primeiro valor:\n");
  scanf("%d",&M);
  
 int matriz[N][M];

 int i,j;
 int *p;

 for ( i = 0; i < N; i++)
 {
   for ( j = 0; j < M; j++)
   {
     scanf("%d",&matriz[i][j]);
   }
   
 }

 p=&matriz[0][0]; //p apontado para primeiro numero da matriz 

int k;
 printf("digite um valor:\n");
 scanf("%d",&k);


int contador_igual=0;
int contador_maior=0;
int contador_menor=0;

for ( i = 0; i < N; i++)
 {
   for ( j = 0; j < M; j++)
   {
     if (*p==k)
     {
       contador_igual=contador_igual+1;
       p+1;//p esta pulando para proximo endereço de memoria 
     }
     if (*p<k)
     {
       contador_menor=contador_menor+1;
       p+1;//p esta pulando para proximo endereço de memoria 
     }

     if (*p>k)
     {
       contador_maior=contador_maior+1;
       p+1;//p esta pulando para proximo endereço de memoria 
     }
     
   }
   
 }



 




  return 0;
}
