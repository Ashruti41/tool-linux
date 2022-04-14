#include<stdio.h>
#include<signal.h>

void check_pending_sigs(){
    int i,res;
    sigset_t s;
    sigprocmask(SIG_BLOCK,NULL, &s);
    for(i=1; i<5; i++){
        res = sigismember(&s, i);
        if(res)
             printf(" signal %d is pending \n",i);
        else
             printf(" Signal %d is not pending\n",i);
   }
}

void sighand(int no){
         printf(" I am in sighandler\n");
}

int main(){
      sigset_t s_set,s;
      signal(2,sighand);
      sigemptyset(&s_set);
      sigaddset(&s_set,2);
      sigprocmask(SIG_BLOCK|SIG_SETMASK,&s_set,NULL);
      printf(" send me signal one and see the effect now\n");
      getchar();
      getchar();
      sigpending(&s);
      check_pending_sigs(s);
      getchar();
      sigprocmask(SIG_UNBLOCK,&s_set,NULL);
      printf(" now signals are unblocked\n");
while(1);
}
