#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   int fd[2],nbytes,i;
   pid_t childpid;
   char string[] ="linux kernel technolongy\n";
   char readbuffer[50];
    pipe(fd);

     if((childpid==fork()) ==-1)
    {
          perror("pipe");
          exit(1);
      }

    if(childpid ==0)
   {
     close(fd[0]);
     write(fd[1],string,(strlen(string)+1));
     exit(0);
   }

  else{
     close(fd[1]);
    nbytes = read(fd[0],readbuffer,sizeof(readbuffer));

       for(i=0; readbuffer[i]; i++)
        {
          if(readbuffer[i]>='a' && readbuffer[i]<='z')
         readbuffer[i] = readbuffer[i]-32;
     }
printf("received string :%s",readbuffer);
}
return 0;
}
