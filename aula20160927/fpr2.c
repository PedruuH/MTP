#include <stdio.h>
#include <ctype.h>
#include<string.h>
void soletras(char *frase, char *novafrase,int n);
int main()
{
   char frase[256],novafrase[256];
   printf("Entre com uma frase: \n");
   gets(frase);  
   soletras(frase,novafrase,strlen(frase));
   printf("%s\n",novafrase);
        
}
void soletras(char *frase, char *novafrase,int n)
{
  int i,j=0;
  for(i=0;i<n;i++)
    if(isalpha(frase[i]))
      {novafrase[j]=frase[i];
       j++;}

  novafrase[j]='\0';


}