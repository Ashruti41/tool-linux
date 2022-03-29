#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<string.h>

int main()
{
    int fd;
    mkfifo("newfifo",0666);

    char arr1[100], arr2[100];
    while(1)
    {
          //open FIFO for write only
          fd = open("newfifo",O_WRONLY);

         //take an input arr2ing from user
         //100 is maximum length
          fgets(arr2,100,stdin);

         write(fd,arr2,strlen(arr2)+1);
         close(fd);

         fd = open("newfifo",O_RDONLY);

         read(fd,arr1,sizeof(arr1));

          printf("User2: %s\n",arr1);
         close(fd);
   }
 return 0;
}
