#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main()
{
  int fd;
  char buf[300];
  int res;
  fd = open("create.c", O_CREAT|O_RDWR, 777);
  printf("%d\n",fd);
  if(fd<0)
    printf("File is not opened or created\n");
  read(fd,buf ,90);
  printf("data from buffer = %s\n",buf);
  close(fd);
  return 0;
};
