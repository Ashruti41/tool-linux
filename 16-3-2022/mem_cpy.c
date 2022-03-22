#include<stdio.h>
#include<string.h>

int main()
{
   const char buf1[10]="madam";
   const char buf2[10];
   

   mymemcopy(buf1,buf2,10);
   printf("string in buf2 =%s\n",buf2);
  
return 0;
}

void mymemcopy(char *src,char *dest,int count)
 {
     int i;
     for(i=0; i<count; i++)
   {
       *dest = *src;
        dest++;
        src++;
    }
}
