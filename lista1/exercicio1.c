#include <stdio.h>
#include <stdlib.h>

int main()
{

float salariomin;
float salariopessoa;

scanf("%f",&salariomin);
scanf("%f",&salariopessoa);

//calculo de percentual do salario com base no salar.min

float percentsalario;

percentsalario=(salariopessoa*100)/salariomin;

if (salariomin<salariopessoa)
{
  printf("salario superio ao salario minino\n");

}


if (salariomin==salariopessoa)
{
  printf("salario igual ao salario minino\n");
}


if (salariomin>salariopessoa)
{
  printf("salario inferior ao salario minino\n");
}

printf("salario da corresponde a: %.2f porcento\n",percentsalario);

//perguntar ao professor como colocar % no print sem ser identificado como uma funçao  ou codigo, apenas um string normal para ler.


  return 0;
}


//100%
//gabriel 4705