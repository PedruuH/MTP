#include<math.h>
#include<stdio.h>
int main()
{
  float inv,inv2=0;
  double invert,invert2=0;
  int n,i=0;
  printf("Um numero inteiro: ");
  scanf("%d",&n);
  inv=1.f/n;
  invert=1.0/n;
  while(i<729)
  {
    inv2=inv+inv2;
    invert2=invert+invert2;
    i++;
  }
  printf("Numero float: %.15f",inv2);
  printf("Numero double: %.15f",invert2);
  return 0;
}