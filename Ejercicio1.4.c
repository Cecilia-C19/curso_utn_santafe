#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define VALOR_HORA 800
 //librería que nos permite utilizar la función sqrt y pow
/* Ejercicio 4 - Solicitar ingresar dos lados de un triángulo rectángulo y calcular
la hipotenusa, el perímetro, la superficie.
Imprima los resultados de las operaciones solicitadas.*/
int main()
{
 float hipotenusa, superficie, perimetro, lado1, lado2; // varibles donde guardaremos los catetos ingresados
 printf("Ingresa un lado del triangulo:\n"); // con \n inidicamos un salto de linea en la consola
 scanf("%f", &lado1);
 printf("Ingresa otro lado del triangulo:\n");
 scanf("%f", &lado2);
 //hipotenusa = (lado1 * lado1) + (lado2 * lado2); //sin usar función potencia (pow)
 hipotenusa = pow(lado1, 2) + pow(lado2, 2); //la función pow devuelve el resultado
 //de elevar el contenido de una variable a la potencia indicada, en este caso a la 2
 hipotenusa = sqrt(hipotenusa); //la función sqrt devuelve la raiz cuadrada del
 //contenido de la variable que indiquemos entre paréntesis
 printf("La hipotenusa del triangulo es: %f \n", hipotenusa);
 superficie = (lado1 * lado2)/2;
 printf("La superficie del triangulo es: %f \n", superficie);
 perimetro = lado1 + lado2 + hipotenusa;
 printf("El perimetro del triangulo es: %f \n", perimetro);
 system("pause");
 return 0;
}