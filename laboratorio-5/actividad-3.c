#include <stdio.h>

 int main(){

     printf("\n El programa consiste en pedir dos números reales de la forma X.X y Y.Y para que después se multipliquen\n\n");
     
     float num1;
     float num2;
     float resul;
     printf("Ingrese dos números de la forma indicada: ");
     scanf("%f", &num1);
     printf(" y ");
     scanf("%f",&num2);

     printf("%f y %f", num1, num2);

     resul = num1 * num2;

     printf("\nEl resultado es %f", resul);






     return 0;
 }