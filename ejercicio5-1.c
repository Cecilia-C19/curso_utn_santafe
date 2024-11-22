#include <stdio.h>
#include <stdlib.h>


/*Declarar un array de tipo entero de 5 elementos,
 asignarles un valor, mostrar de la forma:
  “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante.*/

int main(){

    int numeros[5];// = {7, 45, 99, -2, 55};

    numeros[0] = 7; 
    numeros[1] = 45; 
    numeros[2] = 99; 
    numeros[3] = -2; 
    numeros[4] = 55;
    
    printf("En el orden ingresado:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Indice: %d \t Valor: %d \n", i, numeros[i]);
    }
     
    printf("De atr%cs hacia adelante:\n", 160);

    for (int i = 4; i >= 0; i--)
    {
        printf("Indice: %d \t Valor: %d \n", i, numeros[i]);
    }
    
    system("pause");
    return 0;
}