#include<stdio.h>
#include<unistd.h>

int main()
{
  printf("\nhelllo");
  fork();
  fork();
  fork();
  printf("\nhello2");
  printf("\nhi");
   while(1);
   return 0;
}
