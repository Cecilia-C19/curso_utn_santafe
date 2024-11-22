#include <stdio.h>
#include <stdlib.h>
/* Ejercicio 5 - Escriba un programa que pida ingresar un número y a
* continuación escriba en la consola si el mismo es par o impar. */
int main()
{
    int numero;
    int resto;

    printf("ingrese un nro: \n");
    scanf("%d", &numero);
    if (numero == 0)
    {
        printf("El n%cmero debe ser distinto de 0\n", 163); // validación
    }
    else
    {
        resto = numero % 2;

        if (resto == 0)
        {
            printf("El nro ingresado es par.\n");
        }
        else
        {
            printf("El nro ingresado es impar.\n");
        }
    }
    system("pause");
    return 0;
}

