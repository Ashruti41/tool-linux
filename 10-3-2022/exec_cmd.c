#include<stdio.h>

int main(int argc,char *argv[])
{
  int i;
  printf("file name: %s\n",argv[0]);
  printf("\n Total Number of arguments :%d",argc);
  printf("\n Arguments passed: ");
  for(i =1;i<argc; i++)
      printf("%s",argv[i]);
  printf("\n");
return 0;
}

