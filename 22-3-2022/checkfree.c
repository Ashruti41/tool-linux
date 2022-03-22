#include<stdio.h>
#include<stdlib.h>

void buggy()
{
     int *intptr;
     intptr = (int *)malloc(sizeof(int)*5); //int data type=4 bytes

     *intptr=100;
      printf("value at ptr intptr = %d\n",(*intptr));
      free(intptr);
      *intptr=99;
}

int main()
{
       buggy();
       return 0;
}
