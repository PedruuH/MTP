#include <stdio.h>
struct soma
{
    int numerador;
    int denominador;

}vet[3];
void soma(int na,int nb,int da,int db);
int main()
{
   int n,d;
   printf("Digite o numerador (primeiro numero)");
   scanf("%d",&vet[0].numerador); 
   printf("Digite o denominador (primeiro numero)"); 
   scanf("%d",&vet[0].denominador);
   printf("Digite o numerador (segundo numero)");
   scanf("%d",&vet[1].numerador); 
   printf("Digite o denominador (segundo numero)"); 
   scanf("%d",&vet[1].denominador);
   soma(vet[0].numerador,vet[1].numerador,vet[0].denominador,vet[1].denominador);
   return 0;    
}
void soma(int na,int nb,int da,int db)
{
    int r;
    r=da*db;
    na=(r/da)*na;
    nb=(r/db)*nb;

    printf("A SOMA EH: %d/%d",na+nb,r);

}