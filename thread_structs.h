#ifndef THREAD_STRUCTS_H
#define THREAD_STRUCTS_H

#include <pthread.h>

typedef struct car {
    int numer;
    pthread_t thread;
} car_t;

car_t* createCar(int nr);
void carFunction(void* ptr);

typedef struct element{
    car_t * car;
    struct element * next;
} Element;

typedef Element *Queue;

Element* pop(Queue *root);
void push(Queue *root, car_t car);
Queue last(Queue *root);
int length(Queue root);

#endif