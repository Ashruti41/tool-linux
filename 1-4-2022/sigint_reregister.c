#include<stdio.h>
#include<signal.h>

void sig_handler(int signum)
  {
     printf("Interrupt signal rec'd..but no termination on ctrl+c\n");
    signal(SIGINT,SIG_DFL);
  }
int main()
{
    int i;
      signal(SIGINT,sig_handler);
    //signal(SIGINT,SIG_DFL);

    for(i=1; ; i++)
   {
         printf("%d inside main function\n",i);
         sleep(1);
   }
  return 0;
}
