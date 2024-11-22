#include <stdio.h>
#include <stdlib.h>

int main(){

    int numeros[5];
    float promedio, suma = 0;
    int acum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nro de la posici%cn %d \n", 162, i+1);
        scanf("%d", &numeros[i]);
        suma = suma + numeros[i];

        if (numeros[i] == 5)
        {
            acum ++;
        }
        
    }
    /*
    for (int i = 0; i < 5; i++)
    {
        suma = suma + numeros[i];
    }*/
    
    promedio = suma/5;

    printf("La suma de los elementos es: %.2f\n", suma);
    printf("El promedio de los elementos es: %.2f\n", promedio);
    printf("La cantidad de nros. cincos es: %d\n", acum);

    system("pause");
    return 0;

}