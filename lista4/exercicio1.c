  #include <stdio.h>
  #include <stdlib.h>

int main()
{ 
  int i,j;
  float matriz1[5][5];
  float matriz2[5][5];
  float cubo;

  for ( i = 0; i < 5; i++)
  {
    for ( j = 0; j < 5; j++)
    {
      printf("escravea um numero para linha %d e coluna %d\n",i,j);
      scanf("%f",&matriz1[i][j]);
    }
    
  }
  
    for ( i = 0; i < 5; i++)
  {
    for ( j = 0; j < 5; j++)
    {
      cubo=matriz1[i][j]*matriz1[i][j]*matriz1[i][j];
      matriz2[i][j]=cubo;
    }
    
  }

  return 0;
}
