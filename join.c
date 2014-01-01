#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void* thread_function(void)
{
    char *a = malloc(10);
    strcpy(a,"hello world\n");
    pthread_exit((void*)a);
}
int main()
{
    pthread_t thread_id;
    char *b;

    pthread_create (&thread_id, NULL,&thread_function, NULL);

    pthread_join(thread_id,(void**)&b); 
                                        
    printf("b is %s",b);   
}
