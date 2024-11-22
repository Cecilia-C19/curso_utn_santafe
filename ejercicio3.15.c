#include <stdlib.h>
#include <stdio.h>

int main(){

    int i, j, nota_alum, acum_nota_alum,  acum_gral, acum2;
    float prom_gral, prom_alum;
    prom_gral = 0;
    acum_gral = 0;
    for (i=1; i <= 5; i++){

        acum_nota_alum = 0;
        prom_alum = 0;
        printf("Ingrese las notas del alumno\n");

        for(j=1; j<=3; j++){

            printf("ingrese la nota:\n");
            scanf("%d", &nota_alum);
            acum_nota_alum = acum_nota_alum + nota_alum; // acumulo las notas para un alumno
            acum_gral = acum_gral + nota_alum; //acumulo todas las notas para el promedio general
        }

        prom_alum = (float)acum_nota_alum/3; 
        acum2 = acum2 + prom_alum;
        printf("El promedio del alumno es: %f \n", prom_alum);

    }

    prom_gral = acum_gral/15; // promedio si sume todas las notas
    acum2 = acum2/5; //promedio si sume promedios de alumnos
    printf("El promedio general es: %f\n", prom_gral);
    printf("El promedio general 2  es: %f\n", acum2);

    system("pause");
    return 0;

}