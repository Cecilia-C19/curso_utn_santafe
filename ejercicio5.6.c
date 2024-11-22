#include <stdio.h>
#include <stdlib.h>

/*Ejericio 6- Ingrese por teclado la facturación de los últimos 6 meses. Informar:
- La facturación total
- El promedio de facturación
- La máxima facturación
- La mínima facturación */

int main(){
    
    float facturacion[6];
    float maximo, minimo, promedio, total = 0;

    for(int i = 0;i<6; i++){

        printf("Ingrese la facturaci%cn del mes %d: ", 162, i+1); //cargo el array
        scanf("%f", &facturacion[i]);
        
        total += facturacion[i]; //acumulo los valores para calcular total

        if(i==0){ //inicializo máximo y mínimo
            maximo = facturacion[i];
            minimo = facturacion[i];
        }

        if (facturacion[i] > maximo){ //comparo con máximo
            maximo = facturacion[i];
        }

        if (facturacion[i] < minimo){ //comparo con mínimo
            minimo = facturacion[i];
        }       


    }

    //promedio
    promedio = total/6;

    printf("Facturaci%cn total es: %.2f\n", 162, total );
    printf("El promedio de la facturaci%cn es: %.2f\n", 162, promedio);
    printf("Facturaci%cn m%cxima es: %.2f\n", 162, 160, maximo);
    printf("Facturaci%cn m%cnima es: %.2f", 162, 161, minimo);

    system("pause");
    return 0 ;
}