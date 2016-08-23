#include<stdio.h>
int main()
{
    int x,i,cont=0;
    printf("Um numero: ");
    scanf("%d",&x);
    for(i=2;i<x/2;i++)
    {
        if(x%i==0)
        {
          cont=1;
          break;
        }
    }
    if(cont==0)
        printf("Primo");
    else
       printf("Nao Primo");

       return 0;
}
