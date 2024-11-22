#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nro1, nro2, nro3;

    printf("Ingrese el primer valor (se admiten decimales)\n");
    scanf("%f", &nro1);

    printf("Ingrese el segundo valor (se admiten decimales)\n");
    scanf("%f", &nro2);

    printf("Ingrese el tercer valor (se admiten decimales)\n");
    scanf("%f", &nro3);

    printf("El resultado de la suma de los 3 valores ingresados es: %f", nro1 + nro2 + nro3);

    system("pause");

    return 0;
}