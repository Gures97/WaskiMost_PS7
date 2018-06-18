#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include "thread_functions.h"
#include "thread_functions.h"



void run(int n){
    int tret[n];
    car_t* carsArray[n];

    for(int i=0; i<n; i++) {
        carsArray[i] = createCar(i);
    }

    for(int i = 0; i<n;i++){
        pthread_join( carsArray[i]->thread, NULL);
    }
}
