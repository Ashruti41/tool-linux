#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
  int fd,len;
  char write_buf[50] = "hi, how are you!";
  char read_buf[50];

  fd = open("linuxabc.txt", O_CREAT| O_RDWR , 777);
  len = write(fd, write_buf, 50);
  printf("return value from write optn=%d\n",len);

  lseek(fd,0,SEEK_SET);
  read(fd,read_buf,len);
  printf("data from read option =%s",read_buf);

   lseek(fd,0,SEEK_END);
  read(fd,read_buf,len);
  printf("\ndata from read option =%s",read_buf);

 lseek(fd,-5,SEEK_CUR);
  read(fd,read_buf,len);
  printf("\ndata from read option =%s",read_buf);


  close(fd);
  return 0;
}

