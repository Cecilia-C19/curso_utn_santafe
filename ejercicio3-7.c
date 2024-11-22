#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, suma = 0;
    for (i = 0; i < 20; i++)
    {
        suma += i * 2 + 1;
    }    

    printf("La suma de los 20 1ros nros impares es: %d\n", suma);
    
    system("pause");
    return 0;
}