#include <stdio.h>

int main(){

    printf("\n El programa trata de ingresar un carácter para que después se muestre con su código ASCII\n\n");

    /*
    Definir variable "carac" que es el carácter que se pide después
    */

    char carac;

    printf("Ingrese un carácter para que se muestre su codigo ASCII:  ");
    scanf("%c", &carac);

    /*
    Indicando al programa que carac pasa a ser un int (ocupando %i) muestra directamente el código ASCII del caracter
    */
    printf("\nEl codigo ASCII de %c es %i\n", carac, carac);




    return 0;
}