#include <stdio.h>

int main(){

    float prueba1;
    float practica1;
    float practica2;
    float practica3;
    float prueba2;

    printf("\nEste programa trata de calcularte la nota que se necesita en la Prueba 2 para pasar la asignatura, para ello tienes que colocar tus otras notas\n ");

    printf("Ingrese nota de la primera prueba: ");
    scanf("%f", &prueba1);
    printf("\nIngrese las tres notas de la parte teórica: ");

    scanf("%f", &practica1), printf(" , "), scanf("%f", &practica2), printf(" y "), scanf("%f", &practica3);




    printf("%f , %f y %f", practica1, practica2, practica3);

/*
NF = (EvT1*0.5+EvT2*0.5)*0.3+(EvP1*0.2+EvP2*0.2+EvP3*0.6)*0.7
*/


 








    return 0;
}