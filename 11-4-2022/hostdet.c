#include<stdio.h>
#include<netdb.h>
#include<netinet/in.h>


int main(){
     struct hostent *he = NULL;
     char dotaddr[20];
     he = gethostbyname("196.12.100.100");

     inet_ntop(AF_INET, he->h_addr,dotaddr,20);
     printf("address in dd notation = %s\n",dotaddr);
}

