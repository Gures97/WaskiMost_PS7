#include<pthread.h>
#include<stdlib.h>
#include<stdio.h>
#include"thread_structs.h"

Element* pop(Queue *root){
    Element* top = *root;
    *root = top->next;

    return top;
}

void push(Queue *root, car_t *car){
    Queue tail = last(*root);
	Queue new = (Queue)malloc(sizeof(Element));
    new->car = car;
    new->next = NULL;
    tail->next = new;
}

Queue last(Queue root){
    if(root == NULL)
		return NULL;
	while(root->next != NULL)
		root = root->next;
	return root;
}

car_t* createCar(int nr, void* (*funkcja)(void*)){

    car_t* new = (car_t*)malloc(sizeof(car_t));
    if(pthread_create( new->thread, NULL, carFunction,(void*)nr)){
        printf("Blad tworzenia watku nr %d.",nr);
        exit(EXIT_FAILURE);
    }
}

void carFunction(void* ptr){
    unsigned char inA = (int)ptr%2 == 0?0:1;

    while(1){
        drive(inA);
        inA = !inA;
    }
}

int length(Queue root){
    int sum = 0;
    while(root == NULL){
        sum++;
        root = root->next;
    }
    return sum;
}