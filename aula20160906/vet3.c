#include<stdio.h>
#include<stdlib.h>
int main()
{
    int vet[10],i,k=9,inter,soma=0,prod=1;
    for(i=0;i<10;i++)
    {
       printf("Digite o numero da posicao [%d]: ",i);
       scanf("%d",&vet[i]);
    }
    
    for(int j=0;j<10;j++)
    {
        soma=soma+vet[j];
        prod=prod*vet[j];
    }
    printf("\nSoma %d\n",soma);
    printf("Produtorio %d\n",prod);

 return 0;
}