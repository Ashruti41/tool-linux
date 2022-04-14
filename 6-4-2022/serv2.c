#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<string.h>
#include<netinet/in.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
int listfd,connfd,retval;
int opt=1;
//pid_t childpid;
socklen_t clilen;
struct sockaddr_in cliaddr,seraddr;
listfd = socket(AF_INET,SOCK_STREAM,0);
if(listfd<0)
{
perror("sock:");
exit(1);
}
bzero(&seraddr,sizeof(seraddr));
seraddr.sin_family=AF_INET;
seraddr.sin_addr.s_addr=inet_addr("127.0.0.1");
seraddr.sin_port=htons(8000);
retval=bind(listfd,(struct sockaddr *)&seraddr,sizeof(seraddr));
if(retval<0)
{
perror("bind:");
exit(2);
}
listen(listfd,5);
if(setsockopt(listfd,SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt)));
while(1)
{
char buff[200];
int n;
clilen=sizeof(cliaddr);
connfd=accept(listfd,(struct sockaddr *) &cliaddr,&clilen);
printf("client connected \n");
n=read(connfd,buff,200);
buff[n]='\0';
printf(" data received from client = %s \n",buff);
write(connfd,"Nidhi Shah",11);



}
return 0;
}
