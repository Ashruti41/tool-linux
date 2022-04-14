#include<unistd.h>
#include<sys/socket.h>
#include<sys/types.h>
#include<string.h>
#include<netinet/in.h>
#include<stdio.h>
#include<stdlib.h>



int main()
{
char buf[200];
char *serv_ip="127.0.01";
int n;
int sockfd,ret_val;
struct sockaddr_in seraddr;
sockfd = socket(AF_INET,SOCK_STREAM,0);
bzero(&seraddr,sizeof(seraddr));
seraddr.sin_family=AF_INET;
seraddr.sin_port=htons(8000);
inet_pton(AF_INET,serv_ip,&seraddr.sin_addr);
ret_val=connect(sockfd,(struct sockaddr*)&seraddr,sizeof(seraddr));
if(ret_val<0)
{
perror("connect : ");
exit(1);
}
printf("Enter the data that you want to send to the server\n");
gets(buf);
write(sockfd,buf,strlen(buf));
n=read(sockfd,buf,200);
buf[n]='\0';
printf("recevied %s from server\n",buf);



close(sockfd);
}
