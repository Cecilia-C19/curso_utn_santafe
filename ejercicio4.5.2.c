#include <stdio.h>
#include <stdlib.h>

/* Ejercicio 5 - Se tiene el dni de un alumno y una nota correspondiente a 
su parcial. Requerir al usuario ingresar el dni del alumno. Validar el 
rango del mismo y evaluar si el dni ingresado es igual al que se tiene 
almacenado. Permitir ingresar el dni hasta 3 veces como máximo. Si el usuario 
ingresa el dni de manera correcta, mostrar en la consola la nota del alumno. 
*/
void main()
{ 

    int dni = 38632584;
    float nota = 7;
    
    int dniIngresado = 0;
    int intentos = 1;

    do
    {
        printf("Ingrese DNI %i \n");
        scanf("%f", &dniIngresado); 
 
        if(dniIngresado != dni)
        {
            printf("DNI inexistente\n");
            intentos++; 
        }        
 
    }while((dniIngresado != dni) && intentos <= 3);

    if(dniIngresado == dni)
    {
        printf("La nota del alumno con DNI %d es: %.2f\n", dni, nota); 
    }
    else
    {
        printf("Se acabaron los intentos\n");
    }
     
    system("pause");
}