#include<stdio.h>
void par();
void impar();
int main()
{
    int op;
    printf("(1)impar, (2) par");
    scanf("%d",&op);
    if(op==1)
      impar();
    if(op==2)
      par();
    return 0;
}
void par()
{
    int i=1;
    for(;i<=10;i++)
       if(i%2==0)
         printf("%d",i);
}
void impar()
{
    int i=1;
    for(;i<=10;i++)
        if(i%2==1)
          printf("%d",i);

}
