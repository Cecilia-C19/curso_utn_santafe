#include <stdio.h>
#include <stdlib.h>

/*Crear una función “esPrimo”, que reciba un número y devuelva el valor 1 si es un número primo o 0 en caso contrario.*/

int esPrimo(int n);

int main()
{
    int num;

    do
    {
        printf("Ingrese un nro. posito");
        scanf("%d", &num);
    } while (num < 1);

    printf("%d", esPrimo(num));

    system("pause");
    return 0;

}

int esPrimo(int n)
{
    int div, res;

    div = 1;
      
    do
    {
        res = n % ++div;
    } while (res != 0);

    if (div == n)
    {
        return 1;
    }
    else 
    {
        return 0;
    }

}