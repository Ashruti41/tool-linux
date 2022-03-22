#include<stdio.h>
#include<string.h>

struct A
{
        int roll;
        char name[40],gender __attribute__((aligned(2)));
        float height;
}__attribute__((packed));

int main()
{
        struct A first;
        printf("\n Size of Struct A %3d\n",sizeof(first));
}
