#include<stdio.h>
#include<stdlib.h>
int main()
{
    int vet[10],i,k=9,inter;
    for(i=0;i<10;i++)
    {
       printf("Digite o numero da posição %d: ",i);
       scanf("%d",&vet[i]);
    }
    
    for(int j=0;j<6;j++)
    {
        inter=vet[k];
        vet[k]=vet[j];
        vet[j]=inter;
        k--;
    }
    for(int p=0;p<10;p++)
       printf("%d",vet[p]);
 return 0;
}