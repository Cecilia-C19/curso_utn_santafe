#include <stdio.h>
#include <stdlib.h>

int signo(float num);

/*Crear una función llamada “signo”, que reciba un número real, y devuelva un número entero con el valor:
 -1 si el número es negativo, 1 si es positivo o 0 si es cero.*/

 int main()
 {
    float nro;
    int rdo;

    printf("Ingrese un nro real:\n");
    scanf("%f", &nro);

    rdo = signo(nro);

    switch (rdo)
    {
    case 1:
        printf("El nro es positivo\n");
        break;
    case -1:
        printf("El nro es negativo\n");
        break;
    case 0:
        printf("El nro es 0\n");
        break;
    
    default:
        break;
    }
    


    system("pause");
    return 0;
 }

 int signo(float num){

    //int sig;  directamente hago los return, no necesito definir la variable

    if (num > 0)
    {
        return 1;

    } else
    {
        if (num < 0)
        {
            return -1;
        }
        else
        {
            return 0;
        }
        
    }

 }
