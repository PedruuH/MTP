#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10000
int main()
{
  srand(time(0));
  int numero,vetor[N],i;
  float soma;
  printf("Digite um numero inteiro nao negativo: ");
  scanf("%d",&numero);
  for(i=0;i<N;i++)
  {
     vetor[i]=rand()%(numero + 1);
     soma=soma+vetor[i];
  }
 printf("A media eh: %g",soma/N);
 return 0;
}