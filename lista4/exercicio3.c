  #include <stdio.h>
  #include <stdlib.h>

  int main()
  {
    
    float matriz[5][5];

    int i, j;

    for ( i = 0; i < 5; i++)
    {
      for ( j = 0; j < 5; j++)
      {
        matriz[i][j]= rand() % 51;
      }
    }
    
    for ( i = 0; i < 5; i++)
    {
      for ( j = 0; j < 5; j++)
      {
        if (i==j)
        {
          printf("%f",matriz[i][j]);
        }
        
      }
    }
    

    return 0;
  }
  