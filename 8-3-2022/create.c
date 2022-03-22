//file operation
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
   printf("max fds: %d\n" , getdtablesize());
   exit(0);
}

