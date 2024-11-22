
#include <stdio.h>
#include <stdlib.h>
/* Ejercicio 6 -  Suma de los 10 primeros números múltiplos de tres.  */
int main()
{ 
  
    int n, suma = 0; 
    for (n = 1; n <= 10; n++)
    {
        suma += 3*n; 
    }
    printf("La suma de los 10 primeros múltiplos de tres es: %d\n", suma);
 
    system("pause");
    return 0;
}
