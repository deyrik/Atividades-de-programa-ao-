#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int N;
  printf("quantas pessoas?:");
  scanf("%d",&N);

  int vetoridade[N];
  char vetorsexo[N];
  int contfem =0;
  int contmas =0;
  int soma =0;
  int maior =0;
  int i;

  for ( i = 0; i < N; i++)
  {
      printf("qual a idade da pessoa %d?:",(i+1));
      scanf("%d",&vetoridade[i]);
  }
  
    for ( i = 0; i < N; i++)
  {
      printf("o sexo da pessoa %i F para feminino e M para masculino ?:\n",(i+1));
      scanf("%c",&vetorsexo[i]);
      
      if (vetorsexo[i]=="M")
      {
        contmas++;
      }
      
  }
  
  printf("foram armazenadas %d pessoas masculinas\n",contmas);
  

for ( i = 0; i < N; i++)

{
  if (vetorsexo[i]=="F")
  {
    soma=soma+vetoridade[i];
    contfem++;
  }
  
}

float media=soma/contfem;

printf("media das idades das mulheres e de %.2f \n",media);


/*
for ( i = 0; i < N; i++)

{
  if (vetorsexo[i]=="M")
  {
    soma=soma+vetoridade[i];
    contfem++;
  }
  
}
*/
//nao deu tempo de  fazer o maior idade entre os homens 

  return 0;
}