  #include <stdio.h>
  #include <stdlib.h>

int main()
{
    int a=5,*pta=&a;
    float b=2.5,*ptb=&b;

    printf("valor de a:%d \n",a);
    printf("endereco de memoria de a:%u\n",&a);
    printf("valor do ponteiro pta:%d \n",pta);
    printf("endereco do ponteiro pta:%u \n",&pta);
    printf("valor apontado pelo ponteiro pta:%d \n\n",*pta);

    printf("******************************************\n\n");

    printf("valor de b:%.2f \n",b);
    printf("endereco de memoria de b:%u\n",&b);
    printf("valor do ponteiro ptb:%u \n",ptb);
    printf("endereco do ponteiro ptb:%u \n",&ptb);
    printf("valor apontado pelo ponteiro ptb:%.2f \n",*ptb);





  return 0;
}

//deu cerinho 