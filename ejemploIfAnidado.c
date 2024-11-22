#include <stdio.h>
void main () {
    

    int pas;
    char A, B;
    int ve;
    printf("ingresar tipo de vehiculo, 1. Moto 2. Auto 3. Camion\n");
    scanf("%i",&ve);
    if (ve = 1 && ve < 2)
    {
        printf("Usted tiene una motocicleta\n");
    }
    else
    { 
        if (ve == 2 )
            {
                printf("Usted tiene un automovil\n");
            }
        else { 
            if (ve = 3 || ve > 2)
                {
                    printf("Usted tiene un camion\n");
                }
             else
                {
                    printf("Opcion invalida\n");
                }    
            }
    }

    system("pause");
}
