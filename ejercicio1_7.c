#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor_hora, cant_horas, sueldo;
    printf("Ingrese el valor de la hora del comerciante: \n");
    scanf("%f", &valor_hora);
    printf("Ingrese la cantidad de horas trabajadas: \n");
    scanf("%f", &cant_horas);
    sueldo = valor_hora * cant_horas;
    printf("El comerciante cobrar%c: %.3f\n", 160, sueldo);
    system("pause");
    return 0;
}