#include <stdio.h>
#include <stdlib.h>

int main()
{

  int matriz[10][10];
  int i,j;

  for ( i = 0; i < 10; i++)
  {
    for ( j = 0; j < 10; j++)
    {
      matriz[i][j]=rand() % 51;
    }
    
  }
  
  for ( i = 0; i < 5; i++)
    {
      for ( j = 0; j < 5; j++)
      {
        if (i+j==10+1)
        {
          printf ("%d\n",matriz[i][j]);
        }
      }
   }


  return 0;
}
