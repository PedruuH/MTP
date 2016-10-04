#include<stdio.h>
#define N 2
#define M 4
void recebeMatriz(float matriz[N][M]);
void transporMatriz(float matriz[N][M],float transposta[M][N]);
void imprime(float matriz[N][M]);
void imprimeTr(float transposta[M][N]);
int main()
{
    float matriz[N][M],transposta[M][N];
    recebeMatriz(matriz);
    transporMatriz(matriz,transposta);
    imprimeTr(transposta);


    return 0;
    }
void recebeMatriz(float matriz[N][M])
{
  int i ,j;
  for (i=0;i<N;i++)
            for (j=0;j<M;j++)
             {
                  printf("Entre com o elemento (%d,%d): ",i,j);
               scanf("%f",&matriz[i][j]);

             }
}
void imprime(float matriz[N][M])
{
    int i ,j;
  for (i=0;i<N;i++)
            for (j=0;j<M;j++)
                printf("%g%c",matriz[i][j],(j!=M-1)? '\t':'\n');

              }
void transporMatriz(float matriz[N][M],float transposta[M][N])
{
     int i,j;
     for (i=0;i<N;i++)
            for (j=0;j<M;j++)
                transposta[j][i]=matriz[i][j];

}
void imprimeTr(float transposta[M][N])
{
    int i ,j;
  for (i=0;i<M;i++)
            for (j=0;j<N;j++)
                printf("%g%c",transposta[i][j],(j!=N-1)? '\t':'\n');

              }
