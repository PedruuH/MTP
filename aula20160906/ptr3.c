#include<stdio.h>
int main()
{
  int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF},cont=0;
  int t=sizeof(vetor)/sizeof(int);
  unsigned char * ponteiro=NULL;
  ponteiro=(unsigned char *)vetor;
  for(;ponteiro<(unsigned char *)(t+vetor);ponteiro++)
 {
   printf("%p:%X\n",ponteiro,*ponteiro);
   if(*ponteiro==0xFF)cont++;
 }
 printf("Sao %d",cont);
 return 0;
}