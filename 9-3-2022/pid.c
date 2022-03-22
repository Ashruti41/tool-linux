#include<stdio.h>
#include<unistd.h>

int main()
{
    printf("process pid=%d\n",getpid());
    printf("get pid=%d\n",getppid());
    printf("linux kernal");
    while(1);
    return 0;
}
