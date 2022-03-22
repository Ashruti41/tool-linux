// file with a 4k byte free space

#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
  char buf1 = "LAB";
  char buf2 = "OS Linux";
  int fd;
  if((fd =creat("file.gol" , 0666))<0)
  {
    error("creation error");
    exit(1);
  }

if(write(fd,buf1,sizeof(buf1)) < 0)
  {
     error("Writing error");
     exit(2);
  }

if(lseek(fd,4096, SEEK_SET) < 0)
  {
     error("Positioning error");
     exit(3);
   }

if(write(fd,buf2,sizeof(buf2)) < 0)
  {
     error("Writing error");
     exit(2);
  }
}
