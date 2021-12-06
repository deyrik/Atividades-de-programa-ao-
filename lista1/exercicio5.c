  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h> 

  int main()
  {
    int velocidademax;
    printf("Qual a velocidade maxima da via\n?");
    scanf("%d",&velocidademax);


    int velocidademotorista;
    printf("Qual a velocidade do motorista \n?");
    scanf("%d",&velocidademotorista);


  if (velocidademotorista>=(velocidademax +10))
  {
    printf("sua multa sera de 50 reais.\n");
  }
  


  if (velocidademotorista>=(velocidademax +11) && velocidademotorista<=(velocidademax+30))
  {
    printf("sua multa sera de 100 reais.\n");
  }
  

  if (velocidademotorista>(velocidademax+30))
  {
    printf("sua multa sera de 200 reais.\n");
  }
    return 0;
  }
  
//100%
//gabriel 4705
