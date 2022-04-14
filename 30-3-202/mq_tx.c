#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>

struct msgbuf{
        long mtypes;
        char data[512];
};

int main(int argc, char *argv[]){
        struct msgbuf v;
        struct msqid_ds buf;
        int qid;

        qid=msgget(49, IPC_CREAT|0644);

        printf("id = %d\n",qid);
        v.mtypes=atoi(argv[1]);
        strcpy(v.data,argv[2]);
        msgsnd(qid, &v,strlen(v.data)+1,0);

        msgctl(qid,IPC_STAT,&buf);
       printf(" Here are the details of the queue\n");
       printf("no of msg's in q %hi\n",buf.msg_qnum);
       printf("max no of bytes in q %hi\n",buf.msg_qbytes);
        return 0;
}
