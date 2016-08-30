#include<math.h>
#include<stdio.h>
int main()
{
    float x,x1,y,y1;
    printf("Digite as coordenadas do 1o Ponto: ");
    scanf("%f",&x);
    scanf("%f",&y);
    printf("Digite as coordenadas do 2o Ponto: ");
    scanf("%f",&x1);
    scanf("%f",&y1);
    printf("A distancia e: %f",sqrt(pow(x1-x,2)+pow(y1-y,2)));
    return 0;
}