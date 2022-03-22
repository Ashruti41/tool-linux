#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  printf("\n FIle name: %s\n",argv[0]);
  printf("\n Total number of Arguments : %d",argc);
  printf("\n Arguments Passed : ");
 
   for(i=0; i<argc; i++)
      printf("%s ",argv[i]);
   printf("\n");
}
