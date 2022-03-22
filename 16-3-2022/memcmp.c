#include<stdio.h>
#include<string.h>

int main()
{
     char buf[10];
     char buf1[10];
     int ret;

     memcpy(buf,"madAM",5);
     memcpy(buf1,"madam",5);

     ret = memcmp(buf,buf1,5);

     if(ret>0){
         printf("buf is greater than buf1\n");
     }

     else if(ret<0){
         printf("buf is less than buf2\n");
     }

     else{
         printf("buf is equal to buf1");
     }
return 0;
}
