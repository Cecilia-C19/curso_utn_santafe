#include <stdio.h>
#include <stdlib.h>
/* Ejercicio 11 - Pedir al usuario que ingrese dos números (permitir ingresar número con d
ecimales). Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el pr
ograma debe terminar.
*/
int main()
{
float numero1, numero2;
int opcion;
printf("Ingresa primer n%cmero:\n", 163);
scanf("%f", &numero1);
printf("Ingresa segundo n%cmero:\n", 163);
scanf("%f", &numero2);
printf("1. Informar su suma\n");
printf("2. Informar su resta\n");
printf("3. Informar su multiplicaci%cn\n", 162);
printf("4. Informar su divisi%cn\n", 162);
printf("5. Salir\n");
printf("Seleccione una operaci%cn:\n", 162);
scanf("%d", &opcion);
//valido primero que el numero sea distinto de 5
if(opcion != 5)
{
    switch (opcion)
    {
    case 1:
        printf("La suma es: %f\n", numero1 + numero2);
        break;
    case 2:
        printf("La resta es: %f\n", numero1 - numero2);
        break;
    case 3:
        printf("La multiplicaci%cn es: %f\n", 162, numero1 * numero2);
        break;
    case 4:
        printf("La divisi%cn es: %f\n", 162, numero1 / numero2);
        break;
    default:
        printf("La opción ingresada es incorrecta.\n");
        break;
    }
    system("pause");
    return 0;
}
}

