  #include <stdio.h>
  #include <stdlib.h>

int main()
{
    float b,*ptb=&b;
    char c="k";
    int a,*pta=&a,*ptc=&c;

  a = 6;
  b = 1.5;


  printf("valor:%d  - bits:%d  - endereco na memoria:%u\n\n",*pta,sizeof(a),pta); 

  printf("valor:%f  - bits:%d  - endereco na memoria:%u\n\n",*ptb,sizeof(b),ptb); 

  printf("valor:%c  - bits:%d  - endereco na memoria:%u\n\n",*ptc,sizeof(c),ptc); 


//nao entendo muito bem de char, creio que nao saiu correto 

  return 0;
}
