  #include <stdio.h>
  #include <stdlib.h>

  int main()
  {
    
    int matriz[3][5];
    int contador=0;
    int i,j;

    for ( i = 0; i < 3; i++)
    {
      for ( j = 0; j < 5; j++)
      {
        scanf("%d",&matriz[i][j]);
        if (matriz[i][j]>15 && matriz[i][j]<20)
        {
          contador ++;
        }
        
      }
      
    }
    
    return 0;
  }
  