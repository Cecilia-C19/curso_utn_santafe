#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nro1, nro2, nro3, suma;
    printf("Ingrese el 1er nro\t");
    scanf("%d", &nro1);
    printf("Ingrese el 2do nro\t");
    scanf("%d", &nro2);
    printf("Ingrese el 3er nro\t");
    scanf("%d", &nro3);
    suma = nro1 + nro2 + nro3;
    printf("La suma de %d, %d y %d es: %d \n", nro1, nro2, nro3, suma);

    system("pause");
    return 0;
}
