#include <stdio.h>
#include <stdlib.h>
void main()
{
float numeroIngresado;
float suma = 0;
for (int x = 1; x <= 10; x++)
{
    printf("Ingrese el nro. %d: \n", x);
    scanf("%f", &numeroIngresado);
    //suma += numeroIngresado;
    for (int j = 1; j<4; j++)
    {
        printf("Ingrese la nota nro %d: \n", j);
    }
}
printf("La suma es = %f \n", suma);
system("pause");
}