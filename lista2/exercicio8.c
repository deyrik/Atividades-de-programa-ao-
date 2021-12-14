#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float salariobruto;
  float valorprestacao;
  
  
  while (salariobruto>=0){  
  
  printf("Qual o valor do salario bruto ?\n");
  scanf("%f",&salariobruto);
  printf("Qual da prestacao ?\n");
  scanf("%f",&valorprestacao); 

  float limite;
  limite = 0.3 * salariobruto;

  if (valorprestacao<limite)
  {
    printf("sera concedido emprestimo\n");
    printf("**************************\n");
  }
  else if (valorprestacao>=limite)
  {
    printf("nao sera concedido emprestimo\n");
    printf("**************************\n");
  }
  

  }

  return 0;
}

// 100% funcionando 