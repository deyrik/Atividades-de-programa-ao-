  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h> 

  int main()
  {
    float custofabrica;
    printf("qual o custo de fabrica: \n");
    scanf("%f",&custofabrica);

    float distribuidor;
    distribuidor = 0.28 * custofabrica;

    float impostos;
    impostos = 0.45 * custofabrica; 

    float custocosumidor;
    custocosumidor = custofabrica + impostos + distribuidor;


    printf ("o valor do carro saira por %.2f reais \n",custocosumidor);




    return 0;
  }
  



  //100%
//gabriel 4705