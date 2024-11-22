#include <stdio.h>
#include <stdlib.h>

/* Ejercicio 4 - Realizar un programa que calcule el promedio de las notas de los parciales de un curso. Comenzar pidiendo al usuario la cantidad
de alumnos del curso y la cantidad de parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los alumnos del curso. A 
medida que se ingresan las notas, validar que las mismas sean mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha 
nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va calculando y por último, el promedio general del curso. */


int main(){

    int cant_alumnos, cant_evaluaciones;
    float nota, acum, promedio_alum, acum_gral = 0, promedio_gral;


    printf("Ingrese la cantidad de alumnos:\n");
    scanf("%d", &cant_alumnos);

    printf("Ingrese la cantidad de evaluaciones que se tomaron en el cuatrimestre: \n");
    scanf("%d", &cant_evaluaciones);


    for (int i = 1; i <= cant_alumnos; i++)
    {
        acum = 0;
        for (int j = 1; j <= cant_evaluaciones; j++)
        {
           
           do
           {
               printf("Ingrese la nota %d del alumno %d:\n", j, i);
               scanf("%f", &nota);

               if (nota > 10 || nota < 0)
               {
                printf("Nota inv%clida, debe ser entre 0 y 10\n", 160);
               }               

           } while (nota > 10 || nota < 0);
           
           acum += nota;

        }

        promedio_alum = acum / cant_evaluaciones;
        acum_gral += promedio_alum;
        printf("El alumno %d tiene un promedio de: %.2f\n", i, promedio_alum);
        
    }

    promedio_gral = acum_gral / cant_alumnos;
    printf("El promedio general del curso es: %.2f\n", promedio_gral);

    system("pause");
    return 0;
}