#include <stdio.h>
#include <stdlib.h>

int main(){
  int mat [5][20];
  int cont;
  int med = 0;
  int med_Maior = 0;
  int idade;
  int idade_Menor = 999;
  int curso_Menor_Idade;
  int curso_Maior_Med;

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 20; j++)
    {
      mat[i][j] = rand() %50;
    }
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 20; j++)
    {
      med += mat[i][j];

      if (med <= med_Maior)
      {
        med_Maior = med;
        curso_Maior_Med = i;
      }

      idade = mat[i][j];

      if (idade <= idade_Menor)
      {
        idade_Menor = idade;
        curso_Menor_Idade = i;
      }

    }

    printf("Media do curso %d e: %d\n", i, med);

  }

  printf("O curso com o aluno mais novo e %d\n", curso_Menor_Idade);
  printf("O curso com a maior med e  %d\n", curso_Maior_Med);

  return 0;
 }