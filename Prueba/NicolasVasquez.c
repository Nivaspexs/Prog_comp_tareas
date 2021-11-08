#include <stdio.h>

// Considere que está encargado de la búsqueda de tesoros submarinos para la filial chilena de una prestigiosa empresa internacional del rubro acuático.
 //Tras meses de estudio, se ha determinado que la zona de mayor concentración de elementos es de aproximadamente 10 x 10 kms. Ante esto, usted decide obtener mayor información de 
 // las posiciones exactas de estos tesoros en el mencionado territorio, por lo que decide enviar robots acuáticos exploradores con el objetivo de comunicar la cantidad de elementos en el
  //territorio. Para facilitar el procesamiento de la información, dividió el terreno en cuadrículas de 1 km2 cada una. Usted decidirá la cantidad de misiones a enviar, considerando que 
  //no pueden ser más de 10 ni menos de 2. Por cada misión, el robot se sumergirá en las coordenadas asignadas por usted (ingresadas por el usuario) y se encaminará fuera de la zona 
  //delimitada en una dirección también entregada por usted (ingresada por el usuario). El robot deberá informar la cantidad
 //de elementos que hay en cada cuadrícula mientras avanza en la dirección indicada. La cantidad de elementos en cada cuadrícula está definida por la siguiente tabla:

int main(){
  

  // Se define la matriz terreno que es en donde el robot tiene que explorar, la cantidad de misiones y la dirección
  
 int misiones = 0;
 int fila = 0;
 int columna = 0;

 int terreno[10][10]= {{2,9,0,0,10,9,6,10,5,4},
                        {9,6,5,0,0,9,6,3,2,8},
                        {3,3,8,10,6,9,5,4,3,9},
                        {2,6,3,6,4,3,6,2,8,3},
                        {6,6,9,10,3,4,6,2,9,9},
                        {4,10,4,4,9,0,9,10,8,8},
                        {2,2,0,3,5,4,4,6,6,5},
                        {8,4,1,3,9,5,6,6,7,7},
                        {8,1,4,9,5,7,7,3,4,4},
                        {4,8,5,4,2,3,3,2,3,6}};
  
  
 for(int i = 0; i<10; i++){

      for(int j = 0; j<10; j++){
          printf("[%i] ", terreno[i][j]);
          
      }
    printf("\n");

  };
 
 printf("¿Cúantas misiones quiere realizar? \n");
 scanf("%i", &misiones);
 printf("Se realizarán %i misiones\n", misiones);

 for(int i=0; i < misiones; i++){
     printf("Usted está en la misión %i\n", i+1);
     printf("Indique dónde quiere explorar el robot de la forma X,Y: ");
     scanf("%i %i", &fila, &columna);

 printf("\nUsted está en la coordenada: %i , %i\n", fila, columna);

 printf("Analizando terreno...\n");
 printf("Analizando terreno...\n");
 printf("Analizando terreno...\n");

 printf("El sector cuenta con %i de tesoros\n", terreno[fila-1][columna-1]);



 }



  
  
  return (0);
  
}