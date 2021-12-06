  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>

  int main()
  {
  
  // X=capital Z= percentagem/index (mensal)

  float X;
  float Z;

  printf("what capital invested?\n");
  printf("qual capital investido?\n");
  scanf("%f",&X);

  printf("*************************************\n");

  printf("what is the application index ?\n");
  printf("qual o indece da aplicacao em porcentagem ?\n");
  scanf("%f",&Z);

  printf("*************************************\n");

  //montante =  X*  (1+Z/100)  ^12
  //           1ª          2ª     
  //                 (      3ª     )
  float segunda;
  float terceira;
  float montante;

 segunda = (1+Z/100);
 terceira = pow(segunda,12);
 montante = X * (terceira);

 
   printf("montante e de: %.2f reais\n",montante);



   return 0;
 }
 

//100%
//gabriel 4705