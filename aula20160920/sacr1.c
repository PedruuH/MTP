#include<stdio.h>
#include<time.h>
#include<stdlib.h>
char pega_carta();
int main()
{
   srand(time(0));
   char c1,c2;
   int ncartas;
   c1=pega_carta();
   c2=pega_carta();
   printf("Quantas cartas vc quer? ");
   scanf("%d",&ncartas);







    return 0;
}
char pega_carta()
{
    char carta;
    int c=rand()%13+1;
    switch(c)
    {
        case 1:carta='A';break;
        case 10:carta='D';break;
        case 11: carta='J';break;
        case 12: carta='Q';break;
        case 13: carta='K';break;
        default:
            carta=48+c;
    }
    return carta;
}
