#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float main(){

    int i;
    float mayor, menor, acumulador;  
    float facturacion[6];
    acumulador = 0;
    mayor = 0;
    menor = 99999;
    int n;
    //printf("Ingrese la facturacion de los ultimos seis meses:\n");
    for (i = 0; i < 6; i++){
        n = i + 1;
        printf("Ingrese la facturacion del mes: %d\n",n);
        scanf("%f", &facturacion[i]);
        acumulador = acumulador + facturacion[i];
        if (facturacion[i] > mayor){
        mayor = facturacion[i];
        }
        if (facturacion[i] < menor){
        menor = facturacion[i];
        }
        
    }
    printf("El volumen de venta fue: %f\n", acumulador);
    printf("El promedio de ventas fue: %f\n", acumulador/6);
    printf("La facturacion maxima fue: %f\n", mayor);
    printf("La facturacion minimo fue: %f\n", menor);
    

    
    system("pause");
    return 0;
}
