#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

void main()
{
    fork();  // 2^n  (n= number of time fork) many time hellow will print 
    fork();  // how many child process 2^n-1
    printf("heloow workd\n");
}
