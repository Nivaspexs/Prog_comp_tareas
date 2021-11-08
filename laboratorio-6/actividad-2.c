#include <stdio.h>

int main (){

    int n1, n2, n3;

    printf("Introduzca tres números: ");
    scanf("%i", &n1); 
    printf(" , "); 
    scanf("%i", &n2); 
    printf(" y "); 
    scanf("%i", &n3);

    if (n1>n2){
        if(n1>n3){

            printf("El primer número es el mayor");

        } else if (n2>n3){

            printf("El segundo número es el mayor");

        } else {

            printf("El tercer número es el mayor");


            }
        }

    }

 return 0;}