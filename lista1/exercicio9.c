  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>

int main()
{
  float salariofuncionario;
  printf("qual seu salario bruto?\n");
  scanf("%f",&salariofuncionario);
  
  float credito;
  printf("quanto precisa de credito\n?");
  scanf("%f",&credito);
   
  float porcent;
  porcent=salariofuncionario * 0.30;
  //porcent == 30% do salario do funcionario
   
   if (credito<=porcent)
   {
     printf("credito disponivel\n");
    
   }
   else 
    printf("credito nao disponivel\n");
  
  
  return 0;
}


//100%
//gabriel 4705