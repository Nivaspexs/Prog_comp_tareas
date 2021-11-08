// Librería de entradas y salidas
#include <stdio.h>
//Librería de sistema, que manda instrucciones al sistema
#include <stdlib.h>
//Librería de manipulación del tiempo
#include <time.h>
//
#include <unistd.h>
//Prueba de macro (#define)
#define PI 3.1416

//Programa principal

int main(void)
{

    // printf("%f", PI);

    // Probar getch, getche y getchar

    /*char prueba;
    prueba = getchar();

    printf("%c", prueba); */

    time_t now1 = time(NULL);

    // Probar función system
    printf("Esta es una prueba por si se borra este mensaje\n\n");

    sleep(2);
    system("clear");
    printf("%ld", now1);

    printf("Funciona si se ve este mensaje");

    sleep(2);

    printf("Qasaaa");

    return 0;
}
