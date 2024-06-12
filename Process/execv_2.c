#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(int argc,char *argv)
{
    printf("We are in execv-2.c\n");
    printf("PID of execv-2.c = %d", getpid());
    return 0;
}