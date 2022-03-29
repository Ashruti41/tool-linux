#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<string.h>

int main(void){
      printf("Server - listening");

      //create fifo
      int code = mkfifo("cli_ser_fifo",0764);
      if(code ==-1){
          perror("mkfifo returned an error -file may already exists");
     }

       //open read end
      int fd = open("cli_ser_fifo",O_RDONLY);
      if(fd == -1){
          perror("Cannot open FIFO for read");
          return 0;
      }
      printf("FIFO OPEN");

     //read string (upto 100 character)
     char serverrcv[100];          //string buffer
     memset(serverrcv,0,100);  //set ser buff with zeros

     int res;
     char len;
     while(1){
            res = read(fd, &len,1);
            if(res==0){
                break;
            }
            read(fd,serverrcv,len);     //read string characters
            //serverrcv[(int)Len]=0;    //zero terminator
            printf("Server received: %s\n",serverrcv);
       }
     printf("EOF reached");
     
      close(fd);
      printf("FIFO Closed");

     return 0;
}
