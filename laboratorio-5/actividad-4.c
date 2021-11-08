#include <stdio.h>
#include <math.h>

int main(){

    printf("El programa consiste en obtener el perímetro y el área de un círculo en base al radio que el usuario ingresa\n\n");


    int radio;
    float perimetro;
    float area;

    printf("Ingrese el radio de la circunferencia: ");
    scanf("%i", &radio);

    perimetro = 2 * M_PI * radio ;
    area = M_PI * radio * radio ;

    printf("\nEl perímetro es %f y el área es %f", perimetro, area);



    return 0;
}