#include <stdio.h>

int main(){

    printf("\n El programa trata de ingresar un caracter para que después se muestre con su código ASCII");

    char carac;

    printf("Ingrese un caracter para que se muestre su codigo ASCII\n");
    scanf("%c", &carac);

    printf("El codigo ASCII de %c es %i\n", carac, carac);




    return 0;
}