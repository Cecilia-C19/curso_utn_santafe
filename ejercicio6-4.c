#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Crear una función que devuelva la primera letra de una cadena de texto.*/

char primeraLetra(char* cadena);

int main()
{

    char palabra[10];
    printf("Ingrese una palabra: \n");
    scanf("%s", palabra);
    printf("La 1ra letra es: %c \n", primeraLetra(palabra));

    system("pause");
    return 0;

}

char primeraLetra(char* cadena){
    printf("%s\n", cadena);
    return cadena[0];
}

