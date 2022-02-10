#include <stdio.h>
#include <stdlib.h>

int main()
{

  int matriz[5][3];
  int i,j;
  float matriz_resultado[5][3];
  float resultado;

  for ( i = 0; i < 5; i++)
  {
    for ( j = 0; j < 3; j++)
    {
      matriz[i][j]=rand() % 6;
    }
    
  }
  for ( i = 0; i < 5; i++)
    {
      for ( j = 0; j < 3; j++)
      {
       if (j==0)
       {
         resultado=matriz[i][j]*(float)10/(float)2;
         matriz_resultado[i][j]=resultado;
       }
       

       if (j==1)
       {
         resultado=matriz[i][j]*(float)15/(float)2;
         matriz_resultado[i][j]=resultado;
       }
       
       if (j==2)
       {
        resultado=matriz[i][j]*(float)30/(float)2;
        matriz_resultado[i][j]=resultado;
       }
       
      }
   }


// faltou somar as linhas ,nao achei um jeito para fazer.

  int soma=0;
  int matriz_soma[1][5];

  for ( i = 0; i < 5; i++)
  {
    soma+soma;



    }
    
  }













