#include<math.h>
#include<stdio.h>
#include<inttypes.h>
int main()
{
    int i;
     long long int r;
    float num;
    printf("Digite o numero ");
    scanf("%f",&num);
    fflush(stdin);
    r=num;
    for(i=num-1;i!=1;i--)
    {
       r=r*i;

    }
    printf("%"PRId64,r);
    return 0;
}
