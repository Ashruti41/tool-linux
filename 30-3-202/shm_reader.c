#include<stdio.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/shm.h>

int main(){
    char *p;
    int id,q;
    struct shmid_ds buf;

    
    id = shmget(48,250, IPC_CREAT|0644);

        if(id<0){
        perror("shmget");
        return 0;
      }

    printf(" id=%d\n", id);
    p = shmat(id,0,0);
    printf("%s\n",p);
   // q = shmdt(&p);
    shmctl(id,IPC_STAT,&buf);
    printf("no of msg's in q %hi\n",buf.shmid_qnum);
   printf("max no of bytes in q %hi\n",buf.shmid_qbytes);
   return 0;
}
