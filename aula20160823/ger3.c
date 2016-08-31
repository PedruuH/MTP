#include <stdio.h>
int main()
{
   int num,soma=0;
   printf("Digite um numero para verificacao: ");
   scanf("%d",&num);
   for(int i=1;i<=num;i++)
   {
       if((num%i)==0)
           soma=soma+i;
   }
   if(soma==num)
      printf("Numero Perfeito\n");
   return 0;
}