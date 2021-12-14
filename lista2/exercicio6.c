#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  int i;
  int numero;
  int fatorial = 1;
  i = numero;

  printf("quer saber fatoria de qual numero?\n");
  scanf("%d", &numero);

if (numero == 0){
    printf("1");
  printf("%d", fatorial);
}
else
  for ( i = numero; i > 1; i--){
    
    fatorial=fatorial*i;
  }
  return 0;
}

//acho q esta rodando 100%, meu Vs code bugou o terminal, mas a sintaxe parece correta. 