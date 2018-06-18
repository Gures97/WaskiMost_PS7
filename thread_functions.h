#ifndef THREAD_FUNCTIONS_H
#define THREAD_FUNCTIONS_H

#include <pthread.h>
#include <thread_structs.h>

Queue queueA;
Queue queueB;

pthread_mutex_t transfer_mutex  = PTHREAD_MUTEX_INITIALIZER;

void run(int n);

#endif