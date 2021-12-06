  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>

  int main()
  {
   
   float salario;
   printf("qual o seu salario?\n");
   scanf("%f",salario);
    
    if (salario<=500)
    {
      float reajuste;
      reajuste=salario+(salario*0.15);
      printf("almento de salario para %.2f\n",reajuste);
    }
    else
      printf("funcionario nao tem direito ao reajuste\n");
    
    return 0;
  }
  

//100%
//gabriel 4705