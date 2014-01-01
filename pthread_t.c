#include "pthread.h"
#include "stdio"
void *thread_fuction (void *arg)
{
	int *incoming = (int *) arg ;
	return NULL;
}

int main(void)
{
	
	pthread_t thread_ID;
	void *exit_status;
	int value;
	value = 42;
	pthread_create(&thread_ID, NULL, thread_fuction, &value);
	pthread_join(thread_ID, exit_status);

	return 0;
}
