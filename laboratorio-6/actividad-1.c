#include <stdio.h>

int main(){

 /*
 El programa consiste en ingresar un número y determinar si es par o no   
 */
 
 int numero ;

 printf("\nIngrese un número entero cualquiera: ");
 scanf("%i", &numero);

 if (numero%2 == 0){

     printf("\nEl número es par\n\n");


 } else {

 printf("\nEl número es impar\n\n");

 }


    return 0;
}