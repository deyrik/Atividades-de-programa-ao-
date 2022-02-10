#include <stdio.h>
#include <stdlib.h>

int main()
{
  int linha;
  int coluna=linha;

  printf("quantas linhas e colunas tera a matriz?:\n");
  scanf("%d",&linha);

  int matrizM[linha][coluna];

  int j,i;
  

  for ( i = 0; i < linha; i++){ 
    for ( j= 0; j < 1; j++){

      matrizM[i][j]= rand() % 21;
    }
  }
  
  for ( i = 0; i < linha; i++){ 
    for ( j= 0; j < 1; j++){

      if (matrizM[i][j]!=matrizM[j][i] )
      {
        printf("nao e trasnposta");
        break;
      }
      
    }
  }
  

 

  return 0;
}
