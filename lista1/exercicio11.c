  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>

  int main()
  {
    int L,M,N;
    printf("escreva tres numeros\n");
    scanf("%d",&L);
    scanf("%d",&M);
    scanf("%d",&N);

if (L>M && M>N)
{
  printf("%d,%d,%d\n",L,M,N);
}

if (L>N && N>M)
{
  printf("%d,%d,%d\n",L,N,M);
}

if (M>L && L>N)
{
  printf("%d,%d,%d\n",M,L,N);
}

if (M>N && N>L)
{
  printf("%d,%d,%d\n",M,N,L);
}
if (N>M && M>L)
{
  printf("%d,%d,%d\n",N,M,L);
}

if (N>L && L>M)
{
  printf("%d,%d,%d\n",N,L,M);
}
/*
printf("%d\n",&L);
printf("%d\n",&M);
printf("%d\n",&N);

quando peço pra imprimir as variaveis L M N aparecem numeros gigantes, porem o codigo esta funcionando normalmente.
*/
    return 0;
  }
  
//100%
//gabriel 4705