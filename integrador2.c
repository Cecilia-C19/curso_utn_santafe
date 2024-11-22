#include <stdio.h>
#include <stdlib.h>
 
/*  Ejercicio Integrador 2 */
void main()
{
    int cantVentas = 0, dni = 0, medioPago = 0, tarjeta = 0, cantCuotas = 0;
    float venta = 0, ventaTotal = 0, totalDia = 0;
 
    printf("Ingrese la cantidad de ventas a ingresar:\n");
    scanf("%i", &cantVentas);
 
    for(int i = 1; i <= cantVentas; i++)
    {
       
        printf("Ingrese el DNI del cliente\n");
        scanf("%i", &dni);
        
        if(dni > 1000000 && dni < 99999999)
        {
            printf("Ingrese el importe de la venta\n");
            scanf("%f", &venta);
 
            printf("Medio de pago:\n");
            printf("1 - Efectivo\n");
            printf("2 - Tarjeta\n");
            scanf("%i", &medioPago);
            
            switch(medioPago)
            {
                case 1://efectivo
                    ventaTotal = venta;
                    break;
                case 2: //tarjeta
                    printf("Seleccione la tarjeta:\n");
                    printf("1 - Visa\n");
                    printf("2 - American Express\n");
                    printf("3 - Mercado Pago\n");
                    printf("4 - Cabal\n");
                    scanf("%i", &tarjeta);
                    if(tarjeta >= 1 && tarjeta <= 4)
                    {
                        printf("Seleccione la cantidad de cuotas:\n");
                        printf("1 - 1 cuota\n");
                        printf("2 - 3 cuotas\n");
                        printf("3 - 6 cuotas\n");
                        printf("4 - 12 cuotas\n");
                        scanf("%i", &cantCuotas);
                        switch(cantCuotas)
                        {
                            case 1:
                                ventaTotal = venta;
                                break;
                            case 2: 
                                ventaTotal = venta + (venta * 0.04);
                                break;
                            case 3: 
                            case 4:
                                ventaTotal = venta + (venta * 0.08);
                                break;
                            default:
                                printf("Cantidad de cuotas inv%clidas\n", 160);
                                cantCuotas = 0;
                        }
                    }
                    else
                    {
                        printf("Tarjeta inv%clida\n", 160);
                        tarjeta = 0;
                    }
                    break;
                default:
                    printf("Medio de pago inv%clido\n", 160);
                    medioPago = 0;
                    break;
            }
 
            // mostramos resumen requerido en la consola
            if((medioPago == 0) || (medioPago == 2 && (tarjeta == 0 || cantCuotas == 0))) //si hay algun dato invalido muestro mensaje
            {
                printf("Alg%cn dato inv%clido\n", 163, 160);
            }
            else
            {
                printf("DNI: %i\n", dni);
                switch(medioPago)
                {
                    case 1:
                        printf("Medio de pago: Efectivo\n");
                        break;
                    case 2: 
                        printf("Medio de pago: Tarjeta de cr%cdito\n", 130);
                        switch(tarjeta)
                        {
                            case 1:
                                printf("Tarjeta: Visa\n");
                                break;
                            case 2: 
                                printf("Tarjeta: American Express\n");
                                break;
                            case 3: 
                                printf("Tarjeta: Mercado Pago\n");
                                break;
                            case 4:
                                printf("Tarjeta: Cabal\n");
                                break;
                            default:
                                printf("Tarjeta inv%clida\n", 160);
                        }
                        printf("Cuotas: %i\n", cantCuotas);
                        break;
                    default:
                        printf("Medio de pago inv%clido\n", 160);
                        break;
                }
                printf("Total: %f\n", ventaTotal);   
            }
        }
        else
        {
            printf("DNI inv%clido\n", 160);
        }
    }
    
    printf("El total vendido en el d%ca es: %f", 161, totalDia);
    
    system("pause");
}
