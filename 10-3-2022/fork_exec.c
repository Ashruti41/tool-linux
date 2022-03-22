#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
  pid_t pid;
  pid = fork();
  if(pid<0)
   {
      fprintf(stderr,"Fork Filed");
    exit(-1);
   }
else if(pid==0){
    execl("/bin/ls", "ls",NULL);
 }

else{
   wait(NULL);
   printf("child created");
   exit(0);
}
}
