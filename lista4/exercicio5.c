 #include <stdio.h>
  #include <stdlib.h>

  int main(){
  
    
    int matrizA[3][5];
    int matrizB[3][5];
    int matrizS[3][5];
    int matrizD[3][5];

    int i, j;

    for ( i = 0; i < 3; i++){
      for ( j = 0; j < 5; j++){
        
        matrizA[i][j]= rand() % 51;
        matrizB[i][j]= rand() % 51;
      }
    }
//soma das mastrizes 
    for ( i = 0; i < 3; i++){
      for ( j = 0; j < 5; j++){
        
        matrizS[i][j]=matrizA[i][j] + matrizB[i][j];
      }
    }
  
//diferença das matrizes 
    for ( i = 0; i < 3; i++){
      for ( j = 0; j < 5; j++){
        
        matrizD[i][j]=matrizA[i][j] - matrizB[i][j];
      }
    }




  printf("matriz de soma:\n");
 

  for ( i = 0; i < 3; i++){
    for ( j = 0; j < 5; j++){
        printf("linha %d coluna %d corresponde ao numer:%d\n",i,j,matrizS[i][j]);
      }
    }


  printf("**************************\n");

  printf("matriz de diferenca:\n");


  for ( i = 0; i < 3; i++){
    for ( j = 0; j < 5; j++){
        printf("linha %d coluna %d corresponde ao numer:%d\n",i,j,matrizD[i][j]);
      }
    }



  return 0;
  
  }