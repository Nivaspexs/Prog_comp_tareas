#include <stdio.h>

int main()
{

    //Búsqueda de elementos de forma secuencial

    int arreglo[100];
    int num_bus = 0;

    for (int i = 0; i < 100; i++)
    {
        arreglo[i] = i + 1;
        printf("%i ", arreglo[i]);
    };

    printf("\n\n Busca un número del 1 al 100, el programa lo hará de forma secuencial dejando registro \n");
    printf("\n Ingrese número a buscar: ");
    scanf("%i", &num_bus);
    printf("El número a buscar es %i", num_bus);

    for (int i = 0; i < 100; i++)
    {
        printf("\n%i", arreglo[i]);
        if (arreglo[i] == num_bus)
        {
            printf("\nEncontraste la wea");
            break;
        }

        // Falta que cuando supere los elementos del arreglo, lo reconozca
    }

    return 0;
}