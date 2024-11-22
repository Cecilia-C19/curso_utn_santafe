#include <stdio.h>
#include <stdlib.h>

/* Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9. */

int main()
{

    // no necesito variables, más que las definida en cada estructura iterativa

    for (int i = 1; i < 10; i++)
    {
        /* acá itero para cada tabla*/
        printf("Tabla de multiplicaci%cn del n%cmero %d es:\n", 162, 163, i);
        for (int j = 1; j <= 10; j++)
        {
            /* acá itero para todos los nros. dentro de la tabla*/
            printf(" %d X %d = %d\n", i, j, i * j);
        }
    }
    

    system("pause");
    return 0;
}