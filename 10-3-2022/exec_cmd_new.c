#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>


int main()
{
 printf("File name:");
 execl("/home/ashruti/linux/Day-4/exec","./exec","command",NULL);
 printf("can you see\n");
return 0;
}
