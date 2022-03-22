#include<stdio.h>
#include<string.h>

int main(){
       const char str[] = "linuxkernal.com";
       const char ch = '.';
       char *ret;

       printf("String before set/initialization is %s \n",str);

      ret = memchr(str,ch,strlen(str));

      printf("String after **%c** is - **%s**\n",ch,ret+1);
     //ret = memrchr(str,ch,strlen(str));

     printf("String after **%c** is - **%s**\n",ch,ret-7);


return 0;
}
