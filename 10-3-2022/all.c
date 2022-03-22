#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
  pid_t pid1;
  pid1=fork();

if(pid1==0)
{
 printf("child process=%d\n",getpid());
 execl("/home/ashruti/linux/Day-4/exec","./exec","hello",NULL);
 }

else{
 int pid2;
     printf("I am parent pro pid=%d\n",getpid());
     pid2 = wait(0);

    printf("parent saying child%d exited/terminated normally\n",pid2);
    printf("I am parent process pro pid=%d\n",getpid());
  }
return 0;
}
