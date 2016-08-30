#include<math.h>
#include<stdio.h>
int main()
{
    float b,c,ang;
    printf("Digite os lados b e c do triangulo");
    scanf("%f",&b);
    fflush(stdin);
    scanf("%f",&c);
    fflush(stdin);
    printf("Digite o angulo formado por esses lados");
    scanf("%f",&ang);
    fflush(stdin);
    printf("O lado A e: %f",sqrt(pow(b,2.)+pow(c,2.)-2*b*c*cos(ang))); 
    return 0;
}