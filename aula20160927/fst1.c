#include <stdio.h>
struct quociente_resto
{
    int quociente;
    int resto;

}vet[1];
int main()
{
    
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d",&a);
    scanf("%d",&b);
    vet[0].quociente=a/b;
    vet[0].resto=a%b;
    printf("Quociente%d\n",vet[0].quociente);
    printf("Resto %d\n",vet[0].resto);
    return 0;   
        
}
