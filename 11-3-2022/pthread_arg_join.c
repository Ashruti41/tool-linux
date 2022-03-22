//pthread argument join using sleep function

#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

static void* threadfunc(void *arg)
{
  char *s = (char *) arg;
  printf("%s\n",s);
  return 0;
}

int main(int argc,char *argv[])
{
   pthread_t t1;
   void *res;
   int s;
   s=pthread_create(&t1,NULL,threadfunc,"Hello World");
   printf("message from main()\n");
   sleep(3);
   exit(0);
}
