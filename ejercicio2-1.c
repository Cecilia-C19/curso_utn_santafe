#include <stdio.h>
#include <stdlib.h>

int main()
{

    int nro1, nro2;

    printf("Ingrese un nro: \n");
    scanf("%d", &nro1);
    printf("Ingrese otro nro. \n");
    scanf("%d", &nro2);

    if (nro1 > nro2)
    {
        printf("El primer nro ingresado %d es el mayor", nro1);
    }
    else
    {
        if (nro2 > nro1)
        {
            printf("El segundo nro ingresado %d es el mayor", nro2);
        }
        else
        {
            printf("Los nros. ingresados son iguales: \nEl primer nro. es: %d y el segundo nro. es: %d", nro1, nro2);
        }
    }
}
