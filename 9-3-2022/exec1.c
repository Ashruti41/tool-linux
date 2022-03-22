#include<stdio.h>
#include<unistd.h>

int main()
{
  printf("I am going to execute an 'ls' program\n");
 // execl("/bin/ls", "ls", "-lh", 0);

  execl("/home/ashruti/linux/Day-3/vfork", "./vfork", 0);
  
  printf("i executed program");
  printf("i executed program");
  printf("i executed program");

return 0;
}
