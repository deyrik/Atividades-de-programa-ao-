#include <stdio.h>
#include <stdlib.h>

int main()
{

  int matriz[10][1][5];
  int i,j,k;

  for ( i = 0; i < 10; i++){ 
    for ( j = 0; j < 1; j++){
      for ( k = 0; k < 5; k++)
      {
        matriz[i][j][k]= rand() % 101;
      }
    }
  }
  
  int maior=0;

  for ( i = 0; i < 10; i++){ 
    for ( j = 0; j < 1; j++){
      for ( k = 0; k < 5; k++)
      {
        if (maior<matriz[i][j][k])
        {
          maior=matriz[i][j][k];
        }
        
      }
    }
  }


  return 0;
}
