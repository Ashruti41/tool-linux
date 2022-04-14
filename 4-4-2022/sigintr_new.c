#include<stdio.h>
#include<signal.h>

void sighand(int no){
         printf(" Interrrupt signal rec'd..but no termination on ctrl+c\n");
         if(signal== SIGINT)
        printf("Recived a sigint signal\n");

  exit(0);
}

int main()
{
   int i;
   signal(SIGINT,sighand);
   for(i=0;;i++)
   {
      printf("%d\n",i);
     sleep(1);
}
}
