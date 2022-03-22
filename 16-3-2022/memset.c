#include<stdio.h>
#include<string.h>

int main(){
           const char str[] = "linux hello";
          const char ch = '#';

          printf("String before set/initialization is %s \n",str);

          memset(str,ch,strlen(str)); //ch ma je hoy ene str ni lenght ma print kare😀️

         //memchr(str,ch,strlen(str));  same str ne scanning kare and print kare

            printf("String after set is %s \n",str);

return 0;
}
