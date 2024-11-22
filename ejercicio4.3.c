#include <stdio.h>
#include <stdlib.h>
/* Ejercicio 3 - Pedir al usuario que ingrese 10 números reales, validar
que los mismos sean valores positivos, si el usuario ingresa
un número negativo o nulo, pedir reingresar el número (repetir el
ingreso de dicho número mientras el número no sea correcto). Informar
al usuario la suma de los 10 números ingresados. */
void main()
{
float nro = 0, suma = 0;
for (int i = 1; i <= 10; i++)
{
    do
        {
        printf("Introduzca nro %i: ", i);
        scanf("%f", &nro);
        if(nro <= 0)
        {
            printf("Nro inv%clido\n", 160);
            
        }
        else
        {
            suma = suma + nro;
        }
    } while(nro <= 0 );
}
printf("La suma de los 10 nros. ingresados es = %f\n", suma);
system("pause");
}
