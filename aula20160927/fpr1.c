#include <stdio.h>
void divisao(int dividendo,int divisor, int *pquociente, int *presto);
int main()
{ 
      int dividendo,divisor,quociente,resto;
      printf("Digite o dividendo");scanf("%d",&dividendo);
      printf("Digite o divisor");scanf("%d",&divisor);
      divisao(dividendo,divisao,&quociente,&resto);
      printf("Quociente e resto %d , %d\n",quociente,resto);      
      return 0;
}
void divisao(int dividendo,int divisor, int *pquociente, int *presto)
{
    *pquociente=dividendo/divisor;
    *presto=dividendo%divisor;
}
