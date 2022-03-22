#include<stdio.h>
#include "calc_add_mul.h"

int main(int argv,char *argc[])
{
  int s1,s2,a1,a2;
  s1 = 10;
  s2 = 2;

  a1 = add(s1,s2);
  a2 = mul(s1,s2);

  printf("the sum is %d and %d is %d",s1,s2,a1);
  printf("\nthe mul is %d and %d is %d",s1,s2,a2);
return 0;
}
