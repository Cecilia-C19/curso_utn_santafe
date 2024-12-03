#include <stdio.h>
#include <stdlib.h>

float sumar(float num1, float num2);

void main(){
    float numero1, numero2, resultado;

    printf("Ingresa 1er nro:\n");
    scanf("%f", &numero1);
    printf("Ingresa 2do nro:\n");
    scanf("%f", &numero2);

    resultado = sumar(numero1, numero2);
    printf("La suma es: %f\n", resultado);
    system("pause");
}

float sumar(float num1, float num2){

    float respuesta;
    respuesta = num1 + num2;
    return respuesta;
}

