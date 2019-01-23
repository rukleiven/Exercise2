#include <pthread.h>
#include <stdio.h>

int i = 0;
pthread_mutex_t lock; // lagt til av Stine

// Note the return type: void*
void* incrementingThreadFunction(){
    for (int j = 0; j < 1000000; j++) {
	// TODO: sync access to i
	pthread_mutex_lock(&lock); // lagt til av Stine
	i++;
	pthread_mutex_unlock(&lock); // lagt til av Stine
    }
    return NULL;
}

void* decrementingThreadFunction(){
    for (int j = 0; j < 1000000; j++) {
	// TODO: sync access to i
	pthread_mutex_lock(&lock); // lagt til av Stine
	i--;
	pthread_mutex_unlock(&lock); // lagt til av Stine
    }
    return NULL;
}


int main(){
	pthread_mutex_init(&lock, NULL); // lagt til av Stine
    pthread_t incrementingThread, decrementingThread;
    
    pthread_create(&incrementingThread, NULL, incrementingThreadFunction, NULL);
    pthread_create(&decrementingThread, NULL, decrementingThreadFunction, NULL);
    
    pthread_join(incrementingThread, NULL);
    pthread_join(decrementingThread, NULL);
    
    printf("The magic number is: %d\n", i);
    return 0;
}

// koden er testet og fungerer :)
