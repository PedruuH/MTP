#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float desvio(float *dados,int n);
float media(float *dados,int n);
void recebe(float *dados,int n);
int main()
{
      int n;
      float * dados;
      printf("Quantos numeros deseja: ");
      scanf("%d",&n);
      dados=malloc(n*sizeof(float));
      recebe(dados,n);
      printf("Media %g; Desvio-Padrao %g\n", media(dados,n),desvio(dados,n));
      free(dados);


    return 0;
}
void recebe(float *dados,int n)
{
    int i;
    for(i=0;i<n;i++)
       scanf("%f",&dados[i]);
}
float media(float *dados,int n)
{
    float s=0.f;int i;
    for(i=0;i<n;i++)
        s+=dados[i];
    return s/n;
}
float desvio(float *dados,int n)
{
    float s=0.f,m=media(dados,n);int i;
    for(i=0;i<n;i++)
        s+=pow(m-dados[i],2.f);
    return sqrt(s/(n-1));
}
