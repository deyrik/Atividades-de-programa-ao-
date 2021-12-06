  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>

int main()
{
  

  int qntpaes;
  printf("quantos paes levara\n?");
  scanf("%d",&qntpaes);

  int sal_ou_doce;
  printf("digite 1 para paes de sal ou 2 para paes doce?  ");
  scanf("%d",&sal_ou_doce);

  float valortotal;
  valortotal=0;

  if (sal_ou_doce==1)
  {
    valortotal=qntpaes*0.10;
    printf("o valor total sera de %.2f reais",valortotal);
  }
  
  if (sal_ou_doce==2)
  {
    valortotal=qntpaes*0.15;
    printf("o valor total sera de %.2f reais",valortotal);
  }
  

  return 0;
}

//100%
//gabriel 4705