  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>

int main()
{
  int A,B;
  printf("primeiro valor \n");
  scanf("%d",&A);
  printf("segundo valor \n");
  scanf("%d",&B);

  printf("valores normais:\n");
  printf("primeiro valor:%d  segundo valor:%d\n",A,B);

  printf("************************\n");

//trocar valores das variaveis 
   int guardaA;
  guardaA=A;
  A=B;
  B=guardaA;

  printf("valores trocados:\n");
  printf("primeiro valor:%d  segundo valor:%d",A,B);
  
  return 0;

}




//100%
//gabriel 4705