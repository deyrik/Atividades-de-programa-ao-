#include <stdio.h>
#include <stdlib.h>

int main()
{
 

  int M[10][10];
  int i,j;
  int linha1[10];
  int linha8[10];
  int coluna2[10], coluna4[10];

  for ( i = 0; i < 10; i++)
  {
    for ( j = 0; j < 10; j++)
    {
      M[i][j]= rand() % 51;
    }
    
  }
//salvando linha 1 e 8 
  for ( i = 0; i < 10; i++)
  {
    for ( j = 0; j < 10; j++)
    {
      if (i==0)
      {
        linha1[j]=M[i][j];
      }
      

      if (i==7)
      {
        linha8[j]=M[i][j];
      }
      
    }
    
  }
//trocando
  for ( i = 0; i < 10; i++)
  {
    for ( j = 0; j < 10; j++)
    {
     if (i==0)//linha 1 pela 8
      {
         M[i][j]=linha8[j];
      }
      
    }
    
  }

  for ( i = 0; i < 10; i++)
  {
    for ( j = 0; j < 10; j++)
    {
     if (i==7)//linha 8 pela 1
      {
         M[i][j]=linha1[j];
      }
      
    }
    
  }

//salvando coluna
  for ( i = 0; i < 10; i++)
  {
    for ( j = 0; j < 10; j++)
    {
      if (j==1)
      {
        coluna2[i]=M[i][j];
      }
      

      if (i==7)
      {
        coluna4[i]=M[i][j];
      }
      
    }
    
  }

//trocando
  for ( i = 0; i < 10; i++)
  {
    for ( j = 0; j < 10; j++)
    {
     if (j==1)//coluna 2 pela 4
      {
         M[i][j]=coluna4[i];
      }
      
    }
    
  }

  for ( i = 0; i < 10; i++)
  {
    for ( j = 0; j < 10; j++)
    {
     if (j==3)//coluna 4 pela 2
      {
         M[i][j]=coluna2[i];
      }
      
    }
    
  }

//matriz final

  for ( i = 0; i < 10; i++)
  {
    for ( j = 0; j < 10; j++)
    {
      printf("%d\n",M[i][j]);
    }
    
  }




  return 0;
}
