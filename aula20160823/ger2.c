#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(0));
    int cont=0,s,num,i=0;
    do
    {
        printf("Digite um numero de 0 a 99\n");
        scanf("%d",&num);
        s=rand()%100;
        if(num<s)
          printf("Menor\n");
        else
           printf("Maior\n");
        if(s==num)
           {
             printf("Acertou\n");
             i++;
           }
    }while(i==0);
    return 0;
}
             