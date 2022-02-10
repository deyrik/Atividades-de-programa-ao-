  #include <stdio.h>
  #include <stdlib.h>

  int main()
  {
    int matriz[6][3];
    int i, j;

    

    for ( i = 0; i < 6; i++)
    {
      for ( j = 0; i < 3; j++)
      {
        matriz[i][j] = rand() % 51;
      }
    }
    

    int maior = matriz[0][0];
    int menor = matriz[0][0];

//menor 
    for ( i = 0; i < 6; i++)
    {
      for ( j = 0; i < 3; j++)
      {
        if (matriz[i][j]<menor)
        {
          menor=matriz[i][j];
        }
        
      }
    }
//maior
    for ( i = 0; i < 6; i++)
    {
      for ( j = 0; i < 3; j++)
      {
        if (matriz[i][j]>maior)
        {
          maior=matriz[i][j];
        }
        
      }
    }


    return 0;
  }
  