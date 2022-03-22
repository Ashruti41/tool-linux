#include<stdio.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(void)
{
  pid_t pid1;
  pid1=fork();
  int status;

  if(pid1)
  {
    
    pid1 = wait(0);


    printf("I am parent process pro pid=%d\n",waitpid(-1,&status,0));
  }
  
 return 0;
}
