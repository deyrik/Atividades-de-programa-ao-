#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define K 10

int main()
{
  int id;
  float valor;

  int vetorid[K];
  float vetorvalor[K];

  int N;
  int i=0;

while (id>=0){
  //array de id
  printf("digite o id do carro:\n");
  scanf("%d",&id);

    if (id<0){
    break;
  }
  vetorid[i]=id;


  //array de valor
  printf("qual o valor a pagar pelo veiculo?");
  scanf("%f",&vetorvalor[i]);
  

  //mostrar ao cliente:

  printf("seu caro possui o id %d e o valor a pagar de %.2f\n",vetorid[i],vetorvalor[i]);





  i++;
  
}

  //valor total do faturamento:
  float faturamento = 0;
  
  for ( i = 0; i < K; i++){
    faturamento = faturamento + vetorvalor[i];
  }
  
  printf("o faturamento total eh de: %.2f",faturamento);
  
  return 0;
}

