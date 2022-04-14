#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

void abort_handler(int);

void main(){

    if(signal(SIGABRT,abort_handler) == SIG_ERR){
          fprintf(stderr, "Coludn't set signal handler\n");
          exit(1);
       }
abort();
exit(0);
}

void abort_handler(int i)
{
   fprintf(stderr, "Caught SIGABRT, existing application\n");
   exit(1);
}
