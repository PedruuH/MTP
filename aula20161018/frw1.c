#include<stdio.h>
void recuperarDados();
void receberDados();
int main()
{
    int op;

    do{

        printf("\n================\nEscolha:\n(1)Receber Dados\n(2)Recuperar Dados\n(0)Sair\n===============\n");
        scanf("%d",&op);
        if(op==1) receberDados();
        if(op==2) recuperarDados();


    }while(op);
    return 0;
}
void receberDados()
{
    FILE*arquivo;
    char nome[256];
    int idade;
    float altura_m;
    printf("Entre com seu nome: ");
    fscanf(stdin,"%s",nome);
    printf("Entre sua idade: ");
    fscanf(stdin,"%d",&idade);
    printf("Entre com sua altura: ");
    fscanf(stdin,"%g",&altura_m);
    arquivo=fopen("info.txt","w");
    fprintf(arquivo,"%s\n%d\n%f\n",nome,idade,altura_m);
    fclose(arquivo);


}
void recuperarDados()
{
    FILE*arquivo;
    char nome[256];
    int idade;
    float altura_m;
    arquivo=fopen("info.txt","w");
    fgets(nome,256,arquivo);
    fscanf(arquivo,"%s\n%d\n%f\n",nome,&idade,&altura_m);
    fclose(arquivo);
    fprintf(stdout,"Nome: %s\n Idade: %d\n Altura: %f",nome,idade,altura_m);

}
