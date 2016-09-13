#include<stdio.h>
#define N 20
struct cadastro{
 char nome;
 int idade;
 int numero;
}vet[N];
void cadastrar(i)
{
    for(;i<N;i++)
    {
         system("cls");
         printf("Nome: ");
         gets(vet[i].nome);
         fflush(stdin);
         printf("Idade: ");
         scanf("%d",&vet[i].idade);
         printf("Telefone: ");
         scanf("%d",&vet[i].numero);
    }


}
int main()
{
    int op,i=0;
   do
    {
        printf("Ecolha uma opcao\n");
        printf("(1)Cadastrar\n");
        printf("(2)Listar Nome\n");
        printf("(3)Listar telefone\n");
        printf("(4)Listar Idade\n");
        printf("(5)Sair\n");
        scanf("%d",&op);
        switch(op)
          case 1:
            cadastrar(i);
            break;
          case 2:
            listarn();
            break;
          case 3:
            listartel();
          case 4:
             listaridade();
            break;
          case 5:
            break;
    }while(op!=5);






   }















 return 0;
}
