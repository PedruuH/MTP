#include<stdio.h>
#include<ctype.h>
int main()
{
    char frase[50];
    char inv;
    int i=0;
    printf("Uma frase: ");
    gets(frase);
    fflush(stdin);
    inv=frase[0];
    while(inv)
    { 
        frase[i]=tolower(inv);
        i++;
        inv=frase[i];
    }
    printf("%s",frase);
     return 0;
}