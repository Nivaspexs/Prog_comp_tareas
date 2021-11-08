#include <stdio.h>

int main (){

    float nota;

    printf("\nDebe ingresar la nota: ");
    scanf("%f",&nota);

    

    if (nota < 4){
        
        printf("\n Nota es insuficiente\n");
        }
    else if (nota < 5){

        printf("Suficiente");
    } else if (nota < 6){
        printf("BUENO");
    } else {
        printf("MUY BUENO");
    }
      
return 0;
}

    