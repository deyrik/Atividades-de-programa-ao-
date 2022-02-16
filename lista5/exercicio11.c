  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>

int main()
{
  int V[10];
  int i;
  int V2[10];
  int *p=V2;

  for ( i = 0; i < 10; i++)
  {
    V[i]=rand () % 51;
  }
  
  for ( i = 0; i < 10; i++)
  {
    p[i]=&V[i];
  }
  
  
  
  return 0;
}

//deu cerinho 