  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>

  int main()
  {
   int i , j;
   int M[100][100]={0};
   int *P=&M[0][0];

   for ( i = 0; i < 1000; i++)
   {
     *(P+i)=rand () % 51;

   }
   
    return 0;
  }
  
//deu cerinho 