#include <stdio.h>

int main() {

    int a = 0;
    int num;

    printf("Ingresa un número aleatorio: ");
    scanf("%i",&num);

    do {
        printf("%i", a);
        
        a = num;

    }
    while (a==5);




    return 0;
}