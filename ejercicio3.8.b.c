#include <stdio.h>
#include <stdlib.h>
/* Ejercicio 8 - 8. Escriba un programa que lea un
* número n1, y escriba la tabla de multiplicar del número. */
void main()
{

 int n1, n2;
 printf("Introduzca n%cmero \n", 163);
 scanf("%d", &n1);

 printf(" tabla de multiplicar del %d \n", n1);
 for (n2 = 1; n2 <= 10; n2++)
 {
 printf(" %d X %d = %d\n", n1, n2, n1 * n2);
   
    }
 system("pause");
}