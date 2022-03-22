#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

int sharedVar=5;

void *thread_inc(void *arg)
{
     sharedVar++;
     printf("after incr=%d\n",sharedVar);
}

int main()
{
    pthread_t thread1,thread2;

    pthread_create(&thread1,NULL,thread_inc,NULL);
    printf("sharedVar= %d\n",sharedVar);

    pthread_exit(NULL);
//there will be pending requests at this point.but it still alowing

     
return 0;
}
