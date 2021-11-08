#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{

    /*
     Trata de hacer un conecta 4, que trata de una rejilla con 6 filas y 7 columnas. El objetivo es alinear 4 fichas del mismo color de forma horizontal, vertical 
    o diagonal
    */

    // Definir matrices y variables

    char tablero[6][7];

    // Presentación del juego
    int prueba;
    int getch();

    printf("%i", prueba);

    //system("/bin/stty raw");

    while (prueba != 10)
    {

        printf("\n\n-------------------------\n");
        usleep(200000);

        printf("-------------------------\n");
        usleep(200000);

        printf("------- CONECTA 4 -------\n");
        usleep(200000);

        printf("-------------------------\n");
        usleep(200000);

        printf("-------------------------\n");
        usleep(200000);

        system("clear");
        prueba = getch();
    }
    // system("/bin/stty cooked");

    return 0;
}