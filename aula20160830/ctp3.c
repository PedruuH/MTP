#include<stdio.h>
#include<ctype.h>
int main()
{
    char frase[50];
    char inv;
    int cont=0;
    int i=0;
    printf("Uma frase: ");
    gets(frase);
    fflush(stdin);
    inv=frase[0];
    while(inv)
    { 
       if(isalpha(inv)!=0)
         cont++;

        i++;
        inv=frase[i];      
        
    }
    printf("%s tem  %d letras ",frase,cont);
     return 0;
}