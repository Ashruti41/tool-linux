#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

//declaration of thread condition variable
pthread_cond_t cond1 = PTHREAD_COND_INITIALIZER;

//declaring mutex
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER;

int done = 1;

//thread func
void *foo(void *arg)
{
      char *str = (char*)arg;

      printf("thread task called by = %s\n",str);
      //acquire a lock
      pthread_mutex_lock(&lock);
      if(done ==1){
          printf("Waitiing on condition variable cond1\n");
          pthread_cond_wait(&cond1,&lock);
}
      else{
          printf("Signaling condition variable cond2\n");
          pthread_cond_signal(&cond1);
        }
  
    //release lock
         pthread_mutex_unlock(&lock);
         printf("Returning thread\n");
         return NULL;
    }
//driver code

int main()
{
     pthread_t tid1,tid2;
 
     //create thread1
     pthread_create(&tid1,NULL,foo,"ThDone");
     //sleep for 1 sec so that thread 1
     //would get a chance to run first
     sleep(5);

     //let's wait on condition variable cond1
     done=2;

     pthread_create(&tid2,NULL,foo,"ThDtwo");

     pthread_join(tid2,NULL);

return 0;
}
