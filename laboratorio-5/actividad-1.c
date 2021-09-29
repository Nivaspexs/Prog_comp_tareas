#include <stdio.h>

int main(){
 /* 
 Se muestra por pantalla la descripción del programa
 */
    printf("\n ¡Bienvenido a este simple programa! \n\n ");
    printf("Aquí tienes que ingresar dos números para que se sumen\n\n");
    /*
    Se declaran las variables que se van a ocupar (números a sumar)
    */

    int num1;
    int num2;
    int resul;
    /*
    Se imprime por pantalla para pedir los números y después sumarlos e imprimir el resultado
    */

    printf(" Ingrese primer número:  ");
    scanf("%i", &num1);
    printf("\n Ingrese segundo número: ");
    scanf("%i", &num2);

    resul = num1 + num2 ;


    printf("\n El resultado de la suma es %i\n\n", resul);

    /*
    Nt: Espaciar con \n fue exclusivamente para ordenar el programa
    */

return 0 ;
}