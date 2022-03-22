//pthread argument join using pthread_join

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<pthread.h>

static void* threadfunc(void *arg)
{
  char *s = (char *) arg;
  printf("%s\n",s);
  sleep(5);
  return (void*) strlen(s);
  return 0;
}

int main(int argc,char *argv[])
{
   pthread_t t1;
   void *res;
   int s;
   pthread_create(&t1,NULL,threadfunc,"Hello World");
   printf("message from main()\n");
   sleep(3);
   pthread_join(t1,&res);
   printf("Thread returned %ld\n",(long)res);
   exit(0);
}
