#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(int argc,char *argv[])
{
    printf("PID of excv_1.c \nPID=%d\n",getpid());
    char *args[] ={"hellow","neso","Academy",NULL};
    execv("./ex2",args); // will jup to the ex2 program and run that
    printf("Back to excv_1.c\n");
    return 0;
}