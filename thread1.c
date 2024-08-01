#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* thread_main(void *arg);

int main(void){
	pthread_t t_id;
	int thread_param = 5;

	pthread_create(&t_id, NULL, thread_main, (void*)&thread_param);

	sleep(10); puts("end of main");

	return 0;
}

void* thread_main(void *arg){
	int i;
	int cnt =*((int*)arg);
	for(i=0; i<cnt; i++){
		sleep(1); puts("running thread");
	}
	return NULL;
}