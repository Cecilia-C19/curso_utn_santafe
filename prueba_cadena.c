#include <stdio.h>
#include <string.h>

void main(){
    char caracter, cadena[100]={};
    int pos;
    printf("Ingrese una cadena\n");
    gets(cadena);
    printf("Ingrese un caracter\n");
    scanf("%c", caracter);
    printf("Ingrese la posici%cn\n", 163);
    scanf("%d", pos);
    cadena[pos] = caracter;
    printf("La cadena final es: %s\n");
}