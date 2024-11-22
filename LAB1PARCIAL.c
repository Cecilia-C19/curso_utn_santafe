#include <stdio.h>
#include <stdlib.h>

/*Un empleado de un comercio debe registrar las ventas del día. Para ello, realizar un programa
que permita ingresar los datos de las ventas realizadas. Primero, requerir al empleado la
cantidad de ventas que necesita registrar. Luego, para cada venta deberá ingresar el DNI del
cliente (validar que dicho número no sea menor que 1000000 ni mayor que 99999999).
Ingresar el monto de la venta y el medio de pago: 1 - Efectivo, 2 - Tarjeta de crédito, si la venta
fue con tarjeta, pedir que ingrese una opción de las siguientes: 1 - Visa, 2 - American Express, 3
- Mercado Pago, 4 - Cabal. Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o
12). El interés por pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas
y 8% para 6 y 12 cuotas, por lo se deberá calcular el importe a abonar dependiendo si la venta
es en efectivo o en cuotas. Validar que todos los datos ingresados por el empleado para una
venta sean correctos, en caso contrario informar la situación y finalizar la carga de la venta
actual. Para cada venta, presentar un resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784
Al finalizar el registro, mostrar la suma total de las ventas ingresadas.*/


void main ()
{
    int i, cantVentas, dni, medioPago, tarjeta, cantCuotas;
    float venta, ventaTotal;

    printf ("Ingrese la cantidad de ventas: \n");
    scanf ("%i", &cantVentas);

    do
    {
        if (cantVentas>0)
        {
             for (i=0 ; i<= cantVentas-1; i++)
            {
                do
                {
                    printf ("Ingrese el n%cmero de DNI: \n",163);
                    scanf ("%i", &dni);

                    if (dni>=1000000 && dni<=99999999)
                        {
                            do
                            {   
                                printf ("Ingrese el monto de la venta: \n");
                                scanf ("%f", &venta);
                                

                                if (venta>0)
                                {
                                    do
                                    {
                                        printf ("Ingrese un medio de pago: \n");
                                        printf ("1- Efectivo. \n");
                                        printf ("2- Tarjeta de cr%cdito. \n",130);
                                        scanf ("%i", &medioPago);

                                        if (medioPago>=1 && medioPago<=2)
                                        {
                                          switch (medioPago)
                                          {
                                            case 1:
                                                ventaTotal=venta;  
                                                break;
                                            case 2:

                                                do
                                                {    
                                                    printf ("Seleccione su tarjeta: \n");
                                                    printf ("1- Visa. \n");
                                                    printf ("2- American Express. \n");
                                                    printf ("3- Mercado Pago. \n");
                                                    printf ("4- Cabal. \n");
                                                    scanf ("%i", &tarjeta);

                                                    if (tarjeta>=1 && tarjeta<=4)
                                                    {
                                                        do
                                                        {
                                                            printf ("Ingrese el n%cmero de cuotas: \n",163);
                                                            printf ("1- Una cuota. \n");
                                                            printf ("2- Tres cuotas. \n");
                                                            printf ("3- Seis cuotas. \n");
                                                            printf ("4- Doce cuotas. \n");
                                                            scanf ("%i", &cantCuotas);

                                                            switch (cantCuotas)
                                                            {
                                                            case 1:
                                                                ventaTotal= venta;
                                                                break;
                                                            case 2:
                                                                //recargo 4%
                                                                ventaTotal= venta + (venta*0.4);
                                                                break;
                                                            case 3:
                                                                //recargo 8%
                                                                ventaTotal=venta + (venta*0.8);
                                                                break;
                                                            case 4:
                                                                //recargo 8%
                                                                ventaTotal=venta + (venta*0.8);
                                                                break;                                                        
                                                            default:
                                                                printf ("La cantidad de cuotas ingresadas no es correcta. \n");
                                                                cantCuotas=0;
                                                                break;
                                                            }
                                                        }while (cantCuotas<1 || cantCuotas>4);
                                                       
                                                        
                                                        
                                                    }
                                                    else
                                                    {
                                                        tarjeta=0;
                                                    }
                                                    

                                                }while (tarjeta<1 || tarjeta>4);

                                                break;
                                            default:
                                                printf ("Ingrese una opci%cn correcta. \n",162);
                                                medioPago=0;
                                                break;
                                          }
                                               

                                        }
                                                            

                                    }while(medioPago<1||medioPago>2);

                                    ventaTotal=ventaTotal+venta;

                                            if (medioPago ==0 || medioPago== 2 && (tarjeta == 0  && cantCuotas == 0))
                        
                                            {
                                                printf ("Alguno de los datos ingresados es inv%clido. \n",160);
                                            }
                        
                                            else
                                            {
                                                printf ("DNI: %i \n", dni);
                                        
                                                switch (medioPago)
                                                {
                                                    case 1:
                                                        printf ("Medio de pago: EFECTIVO \n");
                                                        printf ("Importe: %f \n", venta);
                                                        break;
                                                    case 2: 
                                                        printf ("Medio de pago: TARJETA DE CR%cDITO \n",144);
                                                        switch (tarjeta)
                                                            {
                                                            case 1:
                                                                printf ("Tarjeta: VISA \n");
                                                                break;
                                                            case 2:
                                                                printf ("Tarjeta: AMERICAN EXPRESS \n");
                                                                break;
                                                            case 3:
                                                                printf ("Tarjeta: MERCADO PAGO \n");
                                                                break;
                                                            case 4:
                                                                printf ("Tarjeta: CABAL \n");
                                                                break;
                                                            default:
                                                                break;
                                                            }
                                                        switch (cantCuotas)
                                                        {
                                                            case 1:
                                                                printf ("CANTIDAD DE CUOTAS: 1 \n");
                                                                break;
                                                            case 2:
                                                                printf ("CANTIDAD DE CUOTAS: 3 \n");
                                                                break;
                                                            case 3:
                                                                printf ("CANTIDAD DE CUOTAS: 6 \n");
                                                                break;
                                                            case 4:
                                                                printf ("CANTIDAD DE CUOTAS: 12 \n");
                                                                break;
                                                            default:
                                                                break;
                                                        }            
                                                
                                                    break;
                                                    default:
                                                    break;
                                                    }
                                                
                                                        switch (cantCuotas)
                                                            {
                                                            case 1:
                                                                printf ("El total a pagar es %f. \n");
                                                                break;
                                                            case 2:
                                                                printf ("El total a pagar es %f. \n", venta + (venta*0.04));
                                                                break;
                                                            case 3:
                                                                printf ("El total a pagar es %f. \n", venta + (venta*0.08));
                                                                break;
                                                            case 4:
                                                                printf ("El total a pagar es %f. \n", venta + (venta*0.08));
                                                                break;
                                                            default:
                                                                break;
                                                            }
                                    
                                    
                                            }


                                }
                                else
                                {
                                    printf ("El monto ingresado no es correcto. \n");
                                    venta=0;
                                }
                            }while (venta<=0);
                        
                        }
                    else
                        {
                            printf ("El numero de DNI ingresado no es correcto. \n");
                        }
                
                }while (dni<1000000||dni>99999999);
            }
        
        }
        else
        {
            printf ("La cantidad de ventas ingresada no es correcta. \n");
        }

    
    }while (cantVentas<=0);
    
    printf (" ");
    printf ("El total de las ventas del d%ca es %f",161, ventaTotal);
    
    printf (" ");
    printf ("\n !Gracias por su compra! \n");
    system ("pause");

//revisar hay algo que me suma mas el total


}