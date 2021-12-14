#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int N;
  int contador = 1; 
  float E = 0; //na variavel de float ele aceita tanto com ou sem . ex 0 ou 0.0 

  
  printf("entre com um valor para N, no qual sera usado na formula: E = 1/1 + 1 /2 + 1/3 + ... + 1/N:");

  scanf("%d",&N);


  while (contador < (N + 1))
  {
    E = E + (1.0/contador);
    contador++;
  }
  
  printf("'E' equivale a: %.3f \n",E); 

  return 0;
}

//obs toda vez qfor fazer contas envolvendo floats , é necessário colocar todos os numeros "visiveis e inteiros em float usando .0"

//exerciocio rodando perfeito com o solicitado 100%