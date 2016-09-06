#include<stdio.h>
int main()
{
  int vetor[]={0,1,2,4,8},cont=0;
  int t=sizeof(vetor)/sizeof(int);
  unsigned char * ponteiro=NULL;
  ponteiro=(unsigned char *)vetor;
  for(;ponteiro<(unsigned char *)(t+vetor);ponteiro++)
 {
   printf("%p:%X\n",ponteiro,*ponteiro);
   if(*ponteiro==0x0)cont++;
 }
 printf("Sao %d",cont);
 return 0;
}