#include <stdio.h>
#include <stdlib.h>
/* Ejercicio 4 - Realizar un programa que calcule el promedio de las
notas de los parciales de un curso. Comenzar pidiendo al usuario la canti
dad de alumnos del curso y la cantidad de parciales que se tomaron durante el
cuatrimestre. Calcular el promedio de notas de los alumnos del curso. A medida
que se ingresan las notas, validar que las mismas sean mayores que 0 (cero)
y menores que 10, en caso contrario requerir el ingreso de dicha nota hasta
que sea correcta. Mostrar el promedio de cada alumno a medida que se va calculando
y por último, el promedio general del curso. */
void main()
{
    int cantAlumnos = 0;
    int cantNotasPorAlumno = 4;
    float notaIngresada;
    float sumaPromedioGeneral = 0;
    float promedioGeneral = 0;
    printf("Ingresa la cantidad de alumnos:\n");
    scanf("%i", &cantAlumnos);
    printf("Ingresa la cantidad de parciales:\n");
    scanf("%i", &cantNotasPorAlumno);
    for (int x = 1; x <= cantAlumnos; x++)
    {
        printf("Ingrese notas del alumno nro. %d \n", x);
        float suma = 0;
        float promedio = 0;
        int y;
        for (y = 1; y <= cantNotasPorAlumno; y++)
        {
            do
            {
                printf("Ingrese nota %i \n", y);
                scanf("%f", &notaIngresada);
                if (notaIngresada <= 0 || notaIngresada > 10)
                {
                    printf("Nota inv%clida\n", 160);
                }
                else
                {
                    suma = suma + notaIngresada; // voy acumulando en suma, las notas del alumno actual
                }
            } while (notaIngresada <= 0 || notaIngresada > 10);
        }

        promedio = suma / cantNotasPorAlumno; // calculo y muestro el promedio para el alumno actual
        printf("La suma de todas las notas ingresadas es: %f\n", suma);
        printf("El promedio del alumno %d es = %f \n", x, promedio);
        sumaPromedioGeneral = sumaPromedioGeneral + promedio; // acumulo promedio, para obtener el promedio general
    }
    promedioGeneral = sumaPromedioGeneral / cantAlumnos;
    printf("El promedio general es = %f \n", promedioGeneral);
    system("pause");
}