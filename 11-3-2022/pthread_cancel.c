#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *PrintHello(void *threadid)
{
   printf("\n Hello world!\n");
   while(1);
}

int main()
{
   pthread_t thread;
   int rc ,t=0;
   printf("creating thread\n");
   rc =pthread_create(&thread,NULL,PrintHello,NULL);
   printf("\n thread id: %u",thread);
   sleep(6);
   t=pthread_cancel(thread);
   if(t==0)
       printf("\n canceld thread\n");
   printf("\n Thread ID: %u\n",thread);
}
