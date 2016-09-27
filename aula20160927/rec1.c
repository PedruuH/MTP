#include <stdio.h>
#include<string.h>
void imprimir(char *frase,int n);

int main()
{ 
   char frase[256];
   gets(frase);
   imprimir(frase,strlen(frase));


    return 0;
}
void imprimir(char *frase,int n)
{
   for(int i=0; i<=n;i++)
    printf("%c",frase[n-i]);


}