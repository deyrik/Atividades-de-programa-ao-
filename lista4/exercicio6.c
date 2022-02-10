 #include <stdio.h>
  #include <stdlib.h>

  int main(){
  
    
    float matriz[5][5];

    int i, j;

    for ( i = 0; i < 5; i++)
    {
      for ( j = 0; j < 5; j++)
      {
        matriz[i][j]= rand() % 51;
      }
    }
//diagona principal 

    int media=0;

    for ( i = 0; i < 5; i++)
    {
      for ( j = 0; j < 5; j++)
      {
        if (i==j)
        {
          media=media + matriz[i][j];
        }
        
      }
   
   }
  
  int mediafinal=(float)media/(float)5;
  printf("a media dos elementos da diagonal principal e de: %d",mediafinal);

  return 0;
  
  }