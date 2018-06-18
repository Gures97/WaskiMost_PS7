#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    int liczbaSamochodow;
    if(argc != 2){
        printf("Uzyj jednego argumentu.");
        exit(EXIT_FAILURE);
    }
    liczbaSamochodow = atoi(argv[1]);
    if(liczbaSamochodow < 1){
        printf("Niepoprawny argument. Podaj liczbe dodatnia.");
        exit(EXIT_FAILURE);
    }
    run(liczbaSamochodow);

    return 0;
}
