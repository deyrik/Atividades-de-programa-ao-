#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define N 10

int main()
{
  

  int vetorPrograma[150];
  int vetorCalculo[220];
  int i ;
  int j ;

//criando vetor de programaçao 
printf("matriculas de programacao:\n");
for ( i = 0; i < 150 ; i++)
{
  printf("matricula:");
  scanf("%d",&vetorPrograma[i]);
}

//criando vetor de calculo:
printf("matriculas de calculo:\n");
for ( i = 0; i < 220 ; i++)
{
  printf("matricula:");
  scanf("%d",&vetorCalculo[i]);
}


for (i = 0; i < 220; i++)
{
 for ( j = 0; i < 150; i++)
 {
   if (vetorPrograma[j]==vetorCalculo[i]);
   {
     printf("aluno de matricula %d esta matriculado em ambas materias\n",vetorPrograma[i]);
   }
   
 }
 
}






  return 0;



}
