#include<stdio.h>
#include<math.h>
#define RECEBEPONTO(c,ponto) \
    ({printf("Entre coord x de %c: ",c);\
      scanf("%f",&ponto.x);\
      printf("Entre coord y de %c: ",c);\
      scanf("%f",&ponto.y);})
#define SOMA(A,B,S) ({S.x=A.x+B.x;\
    S.y=A.y+B.y;})

#define MOSTRA(ponto) ({printf("(%g,%g) \n",ponto.x,ponto.y);});
#define DIST(ptA,ptB,d) ({d=sqrt(pow(ptA.x-ptB.x,2.f)+pow(ptA.y-ptB.y,2.f));\
                            printf("Distancia %g",d);})
struct ponto{
float x;
float y;

};
int main()
{
    float d;
    struct ponto A,B,S;
    RECEBEPONTO('A',A);
    RECEBEPONTO('B',B);
    SOMA(A,B,S);
    MOSTRA(S);
    DIST(A,B,d);
    return 0;
}
