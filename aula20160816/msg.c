#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
   int i;
   if(argc ==1)
     printf("HELLO, World \n");
   else

      if(argc == 2)
           printf("HELLO, %s!\n",argv[1]);
      else 
          for(i=0;i<atoi(argv[1]);i++)    
              printf("HELLO, %s!\n",argv[2]);
   return 0;



   




}