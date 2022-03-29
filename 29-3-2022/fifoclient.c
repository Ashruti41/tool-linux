#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<string.h>

int main(void){
         printf("Client process writing\n");
         char clientmsg[] = " Linux Kernel Programming";

         //open fifo for write
        int fd = open("cli_ser_fifo",O_WRONLY);
        if(fd == -1){
           perror("Cannot open fifo");
           return EXIT_FAILURE;
        }

       write(fd, clientmsg,strlen(clientmsg));

       close(fd);
       return 0;
}
