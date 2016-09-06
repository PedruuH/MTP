#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char frase[256];
   int i;
   printf("Entre com uma frase: ");
   gets(frase);
   for(i=0;frase[i]!='\0';i++)
   {
       frase[i]=toupper(frase[i]);
   }
   printf("Tamanho: %u\n",strlen(frase));
   if(strcmp(frase,"BOM DIA")==0)
      printf("Bom dia para voce tambem");
   else
      printf("Voce quer dizer: %s?",frase);

 return 0;
}