#include<complex.h>
#include<stdio.h>
int main()
{
   double complex Z1,Z2,soma;
   double R_z1,R_z2,I_z1,I_z2;
   printf("real de Z1: ");scanf("%lf",&R_z1);
   printf("imag de Z1: ");scanf("%lf",&I_z1);
   printf("real de Z2: ");scanf("%lf",&R_z2);
   printf("imag de Z2: ");scanf("%lf",&R_z2);
   Z1=R_z1+I_z1*I;Z2=R_z2+I_z2*I;
   soma=Z1+Z2;
   printf("Soma: %lf + %lf*i\n",creal(soma),cimag(soma));
   printf("Soma: %lf /_  %lf*i\n",cabs(soma),carg(soma));
   
    return 0;
}
