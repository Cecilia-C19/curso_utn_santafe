#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
 /* 3. Ingresar por consola 10 nombres de alumnos en un array y
 sus apellidos en otro, concatenar de la forma "nombre apellido"
 para cada uno, y mostrar por consola.
 strcat(arg1, arg2) Concatena las cadenas representadas por arg1 y arg
2.
 */

 char nombres[10][100];
 char apellidos[10][100];
 for(int i = 0; i < 10; i++)
    {
        printf("Ingrese nombre %d\n", i+1);
        scanf("%s", &nombres[i]);
        printf("Ingrese apellido %d\n", i+1);
        scanf("%s", &apellidos[i]); 
    }
 printf("\nListado de alumnos:\n\n");
 for(int i = 0; i < 10; i++)
    {
        strcat(nombres[i], " "); //primero concateno un espacio
        printf("- %s\n", strcat(nombres[i], apellidos[i]));
    }

 system("pause");
 return 0;
}