#include<stdio.h>

int main()
{
  int ret;
  ret = execl("/usr/bin/vim", "vim","info.txt",0);
  if(ret ==-1)
    printf("execl returned error%d\n",ret);
return 0;
}
