// #include<stdio.h>
// #include<unistd.h>
// #include<pthread.h>


// void *thread_function(void *);
// void main()
// {
//     int i,j,n=3;
//     pthread_t a_thread;
//     pthread_create(&a_thread,NULL,thread_function,NULL);
//     pthread_join(a_thread,NULL);
//     printf("inside the main program\n");

//     for(j=1;j<4;j++)
//     {
//         printf("%d\n",j);
//         sleep(2);
//     }
// }


//   void *thread_function(void *arg)
//     {
//         printf("inside the code");
//         printf("the value of n is ");
//         return NULL;

//     }

#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

int *thread_function(int *arg);

int main() {
    int i, j, n = 3;
    void *k;
    pthread_t a_thread;
    printf("inside the main program\n");
    pthread_create(&a_thread, NULL, thread_function, &n);
    pthread_join(a_thread,&k); // wait still a_thread coplet the task
// thread retun value store is pending  in pthread
    for (j = 1; j < 6; j++) {
        printf("%d\n", j);
        sleep(1);
    }
    printf("the vlaue of k is --------------------->%d\n" ,k);  
    return 0;
}

int *thread_function(int *argc) {
    printf("inside the thread\n");
    printf("the value of n is \n");
    return 5;
}
