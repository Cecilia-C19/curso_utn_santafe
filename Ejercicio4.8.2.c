#include <stdio.h>
#include <stdlib.h>
 
/* Ejercicio 8 - Al finalizar cada día, los vendedores de un comercio rinden al 
dueño sus ventas para calcular la comisión que cobrarán. Los vendedores son 5, 
codificados de las ‘A’ a la ‘E’, y no se sabe cuántas ventas realizó cada uno. Los 
datos vienen ordenados y agrupados por vendedor. Por cada vendedor se ingresan cada 
uno de los importes de sus ventas. Para indicar fin de cada uno de ellos, se ingresa 
un valor de venta igual a 0. Se solicita mostrar para cada uno de los vendedores: su código, 
y la comisión que cobrará, que es el 2,5% de la suma de sus ventas */
void main()
{
 
    int vendedor = 1;
    float totalVta, vta, vtaVendedorA, vtaVendedorB, vtaVendedorC, vtaVendedorD, vtaVendedorE; 
    float comVendedorA, comVendedorB, comVendedorC, comVendedorD, comVendedorE;
    float comision = 0.25;
 
    do
    {
        switch(vendedor)
        {
            case 1:
                printf("Ingrese las ventas del vendedor A\n");
                break;
            case 2:
                printf("Ingrese las ventas del vendedor B\n");
                break;
            case 3:
                printf("Ingrese las ventas del vendedor C\n");
                break;
            case 4:
                printf("Ingrese las ventas del vendedor D\n");
                break;
            case 5:
                printf("Ingrese las ventas del vendedor E\n");
                break;
            default:
                printf("Vendedor inv%clido\n", 160);
        }
 
        printf("Ingrese el importe de la venta (0 para finalizar)\n");
        scanf("%f", &vta); 
  
        if (vta != 0)
        {
            totalVta = totalVta + vta;
        }
        else
        {
            switch (vendedor)
            {
                case 1: 
                    vtaVendedorA = totalVta;
                    break;
                case 2: 
                    vtaVendedorB = totalVta;
                    break;
                case 3: 
                    vtaVendedorC = totalVta;
                    break;
                case 4: 
                    vtaVendedorD = totalVta;
                    break;
                case 5: 
                    vtaVendedorE = totalVta;
                    break;
                default:
                    printf("error\n");
                    break;
            }
            vendedor += 1;
            totalVta = 0;
        }
 
    } while (vendedor <= 5);
 
    comVendedorA = vtaVendedorA * comision;
    comVendedorB = vtaVendedorB * comision;
    comVendedorC = vtaVendedorC * comision;
    comVendedorD = vtaVendedorD * comision;
    comVendedorE = vtaVendedorE * comision;
 
    printf("La com. del vendedor A es: %f \n", comVendedorA);
    printf("La com. del vendedor B es: %f \n", comVendedorB);
    printf("La com. del vendedor C es: %f \n", comVendedorC);
    printf("La com. del vendedor D es: %f \n", comVendedorD);
    printf("La com. del vendedor E es: %f \n", comVendedorE);
   
    system("pause");
}
