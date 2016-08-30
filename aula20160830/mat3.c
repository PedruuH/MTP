#include<math.h>
#include<stdio.h>
int main()
{
    float num, base;
    printf("Digite o numero e a base");
    scanf("%f",&num);
    fflush(stdin);
    scanf("%f",&base);
    printf("%f",log(num)/log(base));    
    return 0;
}