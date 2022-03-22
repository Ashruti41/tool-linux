//multiple fork in parent and child
#include<stdio.h>
#include<unistd.h>

int main()
{
  int pid_1;
  printf("currrent process pid=%d\n", getpid());
  pid_1=fork();
  pid_1=fork();
  if(pid_1)
  {
    printf("parent process pid= %d\n",getpid());   //bash process
    printf("parents parent process ppid=%d\n",getppid());
    
  }
  else{
     printf("new child process pid=%d\n",getpid());  //current process
    printf("new child parent process ppid=%d\n",getppid());
   }

  while(1);
  return 0;
}
