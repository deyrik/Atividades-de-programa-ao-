  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>

  int main()
  {
    int A,B;
    printf("numero no qual sera dividido\n");
    scanf("%d",&A);
    printf("numero no servira de divisor\n");
    scanf("%d",&B); 

    if (A%B==0)
    {
      printf("%d e divisivel por %d\n",A,B);
    }
    
    
    if (A%B!=0)
    {
      printf("%d nao  e divisivel por %d\n",A,B);
    }

   
    return 0;
  }
  
  //100%
//gabriel 4705