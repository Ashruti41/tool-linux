//create  two thread which perform on differnt task
#include<stdio.h>
#include<pthread.h>

 pthread_t tid;
void* thread1(void *arg)
{
  printf("\nnewly created thread1 is executing\n");
  return NULL;
 } 

void* thread2(void *arg)
{
  printf("\nnewly created thread2 is executing");
  return NULL;
 }

int main(void)
{
  int ret = pthread_create(&tid,NULL,thread1,NULL);
  int rat2 = pthread_create(&tid,NULL,thread2,NULL);

 if(ret)
   printf("\nthread is not created");
 else
  printf("thread is created");
  pthread_join(tid,NULL);


 if(rat2)
   printf("\nhello");
 else
  printf("\nhow are you?");
  sleep(2);


return 0;
}

