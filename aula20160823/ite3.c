#include<stdio.h>
int main()
{
    char str[100];
    int i=0,cont=0;
    printf("Digite a palavra");
    scanf("%s",str);
    for(;i<100;i++)
    {
        if(str[i]!='\0')
            cont++;
        else
            break;
    }
    printf("%d",cont);
}
