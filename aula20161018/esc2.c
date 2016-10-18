#include<stdio.h>

int main()
{
    srand(time(0));
    int n;
     FILE*arquivo;
    int i;
    char *nome;
    printf("Nome arquivo: ");
    scanf("%s",nome);
    arquivo=fopen(nome,"w");
    printf("Quantos numeros deseja? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        fprintf(arquivo,"%d\n",rand()%99+1);
    }
    fclose(arquivo);
    return 0;
}

