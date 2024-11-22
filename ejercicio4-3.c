#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nro, suma = 0;

    for (int i = 1; i <= 10; i++)
    {
        
        do
        {
          
            printf("Ingrese el nro. %d\t", i);
            scanf("%f", &nro);

            if (nro <= 0)
            {
                printf("El valor debe ser positivo\n");
            }
           /* else
            {
                suma = suma + nro;
            }*/            

        } while (nro <= 0);
        
        suma = suma + nro;
    }
    
    printf("La suma de los 10 nros. ingresados es: %f\n", suma);

    system("pause");
    return 0;
}