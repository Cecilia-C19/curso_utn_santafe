#include <stdio.h>
#include <stdlib.h>

/* Ejercicio 11 - Realizar un programa que permita registrar los datos para una venta 
de $4600. Para ello, se le pedirá al usuario que ingrese su DNI, validar que dicho 
número no sea menor que 1000000 ni mayor que 99999999. Luego, requerir al usuario 
que seleccione el medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona 
tarjeta, pedir que ingrese una opción de las siguientes: 1-Visa, 2-American Express, 
3-Mercado Pago, 4-Cabal. Además, requerir la cantidad de cuotas en las que 
abonará (1, 3, 6 o 12). El interés por pagar en cuotas será de: 0 interés para efectivo 
o 1 cuota, 4% para 3 cuotas y 8% para 6 y 12 cuotas. Validar que todos los datos ingresados 
por el usuario sean correctos, en caso contrario informar la situación y finalizar programa. 
Por último, presentar un resumen de la operación, por ejemplo:
*/
void main()
{
    int dni = 0, medioPago = 0, tarjeta = 0, cantCuotas = 0;
    float venta = 4600, ventaTotal = 0;

    printf("Ingrese el DNI del cliente\n");
    scanf("%i", &dni);

    if(dni > 1000000 && dni < 99999999)
    {
     

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
                    printf("1 cuota\n");
                    printf("3 cuotas\n");
                    printf("6 cuotas\n");
                    printf("12 cuotas\n");
                    scanf("%i", &cantCuotas);
                    switch(cantCuotas)
                    {
                        case 1:
                            ventaTotal = venta;
                            break;
                        case 3: 
                            ventaTotal = venta + (venta * 0.04);
                            break;
                        case 6: 
                        case 12:
                            ventaTotal = venta + (venta * 0.08);
                            break;
                        default:
                            printf("Cantidad de cuotas inv%clidas\n", 160);
                            cantCuotas = 0;
                            break;
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

    system("pause");
}

