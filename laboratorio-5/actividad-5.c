#include <stdio.h>

int main(){

    float prueba1;
    float practica1;
    float practica2;
    float practica3;
    float prueba2;
    float nota_f;
    nota_f = 4.0;

    printf("\nEste programa trata de calcularte la nota que se necesita en la Prueba 2 para pasar la asignatura, para ello tienes que colocar tus otras notas\n ");

    printf("Ingrese nota de la primera prueba: ");
    scanf("%f", &prueba1);
    printf("\nIngrese las tres notas de la parte teórica: ");

    scanf("%f", &practica1), printf(" , "), scanf("%f", &practica2), printf(" y "), scanf("%f", &practica3);

/*

    Este print era para confirmar los valores

    printf("%.2f , %.2f , %.2f y %.2f\n", prueba1, practica1, practica2, practica3);

*/


/*
NF = (EvT1*0.5+EvT2*0.5)*0.3+(EvP1*0.2+EvP2*0.2+EvP3*0.6)*0.7

4.0 - EvT1*0.5*0.3 - EvT2*0.5*0.3 = (EvP1*0.2+EvP2*0.2+EvP3*0.6)*0.7

- EvT2 = (-4.0 + EvT1*0.5*0.3 + EvP1*0.2*0.7+EvP2*0.2*0.7+EvP3*0.6*0.7)/*0.15

*/

prueba2 = (nota_f - prueba1*0.15 - practica1*0.14 - practica2*0.14 - practica3*0.42)/0.15 ;

printf("%.2f", prueba2);



 








    return 0;
}