#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void parabens(int op);
int main()
{
  srand(time(0));
  do{
  int op;
  printf("Digite um numero: \n");
  scanf("%d",&op);
  parabens(op);
  }while(1);
  return 0;
}

void parabens(int op)
{
    if(rand()%10 + 1==op)
        printf("PARABENS");

}
