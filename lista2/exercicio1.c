/* Codico usando POW - porem quando usasse o 5 na funçao nao executa corretamente 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int cont = 400;
int i;

for ( i=0 ; i < cont; i++)
{
  int numero=0;
  printf("entre com um numero:\n");

  scanf("%d",&numero);

  int cubo;
  cubo=pow(numero,3);

  printf("o cubo do numero e de: %d\n",cubo);
  printf("**************************\n");
}
  return 0;
}

*/

//OBS todos os numeros estao dando corretamente, mas n entendi o pq do 5 nao rodar direito, abrir em 
// uma nova aba e rodei a funçao pow, ela n funciona com o numero  5 



//Codigo sem usar o POW 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int cont = 400;
int i;

for ( i=0 ; i < cont; i++)
{
  int numero=0;
  printf("entre com um numero:\n");

  scanf("%d",&numero);

  int cubo;
  cubo=numero*numero*numero;

  printf("o cubo do numero e de: %d\n",cubo);
  printf("**************************\n");
}
  return 0;
}


//exerciocio rodando perfeito com o solicitado 100%